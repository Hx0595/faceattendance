#include "attendancewin.h"
#include "ui_attendancewin.h"

#include <QDateTime>
#include <QThread>
#include <QSqlQuery>
#include <QSqlRecord>
#include <opencv/cv.hpp>
#include <QSqlError>

AttendanceWin::AttendanceWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendanceWin)
{
    ui->setupUi(this);

    //qtcpServer当有客户端连接会发送newconnection
    connect(&mserver,&QTcpServer::newConnection,this,&AttendanceWin::accept_client);
    mserver.listen(QHostAddress::Any,9999);//监听，启动服务器
    bsize = 0;

    //给sql模型绑定表格
    model.setTable("employee");

    //创建一个线程
    QThread *thread = new QThread();
    //把QFaceObject对象移动到thread线程中执行
    fobj.moveToThread(thread);
    //启动线程
    thread->start();
    connect(this,&AttendanceWin::query,&fobj,&QFaceObject::face_query);//让线程单独处理人脸查询函数
    //关联QFaceObject对象里面的send_faceid信号
    connect(&fobj,&QFaceObject::send_faceid,this,&AttendanceWin::recv_faceid);
}

AttendanceWin::~AttendanceWin()
{
    delete ui;
}

//接受客户端连接
void AttendanceWin::accept_client()
{
    //获取于客户端通信的套接字
    msocket = mserver.nextPendingConnection();

    //当客户端有数据到达会发送readyRead信号
    connect(msocket,&QTcpSocket::readyRead,this,&AttendanceWin::read_data);
}

//读取客户端发送的数据
void AttendanceWin::read_data()
{
    QDataStream stream(msocket);//把套接字绑定到数据流
    stream.setVersion(QDataStream::Qt_5_12);//设置数据流版本，与客户端相同

    //1.读文件大小
    if(bsize == 0)
    {
        if(msocket->bytesAvailable()<(qint64)sizeof(bsize))//如果采集到的数据小于8个字节
        {
            return;
        }
        //采集数据的长度
        stream>>bsize;
    }

    //2.判断文件是否发送完毕
    if(msocket->bytesAvailable() < bsize)//说明数据还没有发送完成，返回继续等待
    {
        return;
    }

    //3.开始读数据
    QByteArray data; //数组
    stream>>data;//把所有数据读出来
    bsize = 0;//将bsize清0
    if(data.size() == 0)//没有读取到数据
    {
        return;
    }

    //显示图片
    QPixmap mmp;
    mmp.loadFromData(data,"jpg");
    mmp = mmp.scaled(ui->picLb->size());
    ui->picLb->setPixmap(mmp);

    //识别人脸
    cv::Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(),data.data(),data.size());//将从客户端读取的数据复制到decode
    //解码
    faceImage = cv::imdecode(decode,cv::IMREAD_COLOR);//将字节流数据转化为faceImage矩阵

    //int faceid = fobj.face_query(faceImage);//消耗资源较多
    emit query(faceImage);//通过信号执行线程函数
}

void AttendanceWin::recv_faceid(int64_t faceid)
{
    //qDebug()<<"00000"<<faceid;
    //从数据库中查询faceID对应的人脸信息
    //给模型设置过滤器
    qDebug()<<"识别到的人脸id："<<faceid;
    if(faceid < 0)//未找到对应faceid数据
    {
        QString sdmsg = QString("{\"employeeID\":\"\",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
        msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端
        return ;
    }
    model.setFilter(QString("faceID=%1").arg(faceid));
    //查询
    model.select();
    //判断是否查询到数据
    if(model.rowCount() == 1)
    {
        //工号，姓名，部门，时间
        //{employeeID:%1,name:%2,department:软件,time:%3}
        QSqlRecord record = model.record(0);
        QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}")
                .arg(record.value("employeeID").toString())
                .arg(record.value("name").toString())
                .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
        msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端

        //把数据写入数据库--考勤表
        QString insertSql = QString("insert into attendance(employeeID) values('%1')").arg(record.value("employeeID").toString());
        QString query;
        /*if(!query.exec(insertSql))//考勤失败
        {
            //QString sdmsg = QString("{\"employeeID\":\"\",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
            //msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端
            //return ;
        }else//考勤成功
        {
             //msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端
        }*/

    }
}
