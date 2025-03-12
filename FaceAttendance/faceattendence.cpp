#include "faceattendence.h"
#include "ui_faceattendence.h"

FaceAttendence::FaceAttendence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttendence)
{
    ui->setupUi(this);
    //打开摄像头
    cap.open(0);//dev/video0
    //启动定时器事件
    startTimer(100);//100ms

    //导入级联分类器文件,用于检测人脸  file.xml训练好的脸部特征数据
    //cascade.load("级联分类器文件路径/file.xml")

    //QTcpSocket当断开连接的时候发送disconnected信号，连接成功会发送connected
    connect(&msocket,&QTcpSocket::disconnected,this,&FaceAttendence::start_connect);
    connect(&msocket,&QTcpSocket::connected,this,&FaceAttendence::stop_connect);

    //定时连接服务器
    connect(&mtimer,&QTimer::timeout,this,&FaceAttendence::timer_connect);
    //启动定时器
    mtimer.start(5000);//每5s连接一次,直到连接成功


}

FaceAttendence::~FaceAttendence()
{
    delete ui;
}

void FaceAttendence::timerEvent(QTimerEvent *e)
{
    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//读取一帧数据
    }

    //将人脸转化为灰度图
    Mat grayImage;
    cvtColor(srcImage,grayImage,COLOR_BGR2GRAY);
    //检测人脸数据
    std::vector<Rect> faceRects;//定义一个矩形框用来框住人脸
    //cascade.detecMultiScale(grayImage,faceRects);//检测人脸的函数,用灰度图检测，识别效果更好
    if(faceRects.size()>0)//检测到人脸
    {
        //1.
        Rect rect = faceRects.at(0);//获取到第一个人脸的矩形框数据
        rectangle(srcImage,rect,Scalar(255,0,0));//绘制人脸矩形框，会有一个框包着人脸
        //移动人脸框（图片--QLabel）
        //ui->headpicLb->move(rect,x,rect,y);

        //二.2.
        //把Mat数据转化为QbyteArray, -->编码成jpg格式(压缩数据）
        std::vector<uchar> buf;
        cv::imencode(".jpg",srcImage,buf);
        QByteArray byte((const char*)buf.data(),buf.size());
        //准备发送
        quint64 backsize = byte.size();
        QByteArray sendData;
        QDataStream stream(&sendData,QIODevice::WriteOnly); //数据流添加只写权限
        stream.setVersion(QDataStream::Qt_5_12);//设置数据流版本
        stream<<backsize<<byte;//往数据流放入数据
        //发送
        msocket.write(sendData);

    }else
    {
        //把人脸框移动到中心位置
        ui->headpicLb->move(100,60);
    }

    //判断读取的数据是否为空
    if(srcImage.data == nullptr) return;
    //把opencv里面的Mat格式数据(BGR)转化为Qt里面的QImage(RGB)
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    ui->videoLb->setPixmap(mmp);
}

void FaceAttendence::timer_connect()
{
    //连接服务器
    msocket.connectToHost("192.168.68.132",9999);
    qDebug()<<"正在连接服务器";
}

void FaceAttendence::stop_connect()
{
    mtimer.stop();//停止定时器
    qDebug()<<"成功连接服务器";
}

void FaceAttendence::start_connect()
{
    mtimer.start(5000);//启动定时器
    qDebug()<<"断开连接服务器";
}

