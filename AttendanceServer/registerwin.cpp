#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>
#include <QSqlTableModel> //数据库模型
#include <QSqlRecord> //记录
#include <QMessageBox>
#include <QDebug>

RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)//定时器事件
{
    //获取摄像头数据并且显示在界面上
    cv::Mat image;
    if(cap.isOpened())
    {
        cap>>image;
        if(image.data == nullptr)
        {
            return;
        }
    }
    //Mat--->QImage 将摄像头的OpenCV数据转化为QT数据
    cv::Mat rgbImage;
    cv::cvtColor(image,rgbImage,cv::COLOR_BGR2RGB);
    QImage qImage(rgbImage.data,rgbImage.cols,rgbImage.rows,rgbImage.step1(),QImage::Format_RGB888);
    //在QT界面上显示
    QPixmap mmp = QPixmap::fromImage(qImage);
    mmp = mmp.scaledToWidth(ui->headpicLb->width());//将图片水平缩小
    ui->headpicLb->setPixmap(mmp);
}

void RegisterWin::on_resetBt_clicked()//重置
{
    //清空数据
    ui->nameEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());//设置成当前日期
    ui->addressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}

void RegisterWin::on_addpicBt_clicked()//添加头像
{
    //通过文件对话框 选择文件路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filepath);

    //显示图片
    QPixmap mmp(filepath);
    mmp = mmp.scaledToWidth(ui->headpicLb->width());//根据图片的宽缩放
    ui->headpicLb->setPixmap(mmp);
}

void RegisterWin::on_registerBt_clicked()//注册
{
    //1.通过照片，结合faceObject模块得到faceID
    QFaceObject faceobj;
    cv::Mat image = cv::imread(ui->picFileEdit->text().toUtf8().data());//用OpenCV从ui读人脸数据
    int faceID = faceobj.face_register(image);
    qDebug()<<faceID;//输出人脸ID
    //把头像保存到一个固定路径下
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().Base64Encoding));
    cv::imwrite(headfile.toUtf8().data(),image);

    //2.把个人信息存储到数据库employee表
    QSqlTableModel model;//
    model.setTable("employee");//设置用户 绑定用户信息的表格
    QSqlRecord record = model.record();
    //设置数据
    record.setValue("name",ui->nameEdit->text());
    record.setValue("sex",ui->mrb->isChecked()?"男":"女");
    record.setValue("birthday",ui->birthdayEdit->text());
    record.setValue("address",ui->addressEdit->text());
    record.setValue("phone",ui->phoneEdit->text());
    record.setValue("faceID",faceID);
    //头像路径
    record.setValue("headfile",headfile);
    //把记录插入到数据库表格中
    bool ret = model.insertRecord(0,record);

    //3. 提示注册成功
    if(ret)
    {
        QMessageBox::information(this,"注册提示:","注册成功");
        //提交
        model.submitAll();
    }else
    {
        QMessageBox::information(this,"注册提示:","注册失败");
    }

}

void RegisterWin::on_videoswitchBt_clicked()//打开摄像头
{
    if(ui->videoswitchBt->text() == "打开摄像头")
    {
        //打开摄像头
        if(cap.open("/dev/video0"))//dev/video0
        {
            ui->videoswitchBt->setText("关闭摄像头");
            //启动定时器事件
            timerid = startTimer(100);
        }

    }else
    {
        killTimer(timerid);//关闭定时器事件
        ui->videoswitchBt->setText("打开摄像头");
        //关闭摄像头
        cap.release();//释放
    }
}

void RegisterWin::on_cameraBt_clicked()//拍照
{
    //保存数据
    //把头像保存到一个固定路径下
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().Base64Encoding));
    ui->picFileEdit->setText(headfile);
    cv::imwrite(headfile.toUtf8().data(),image);
    killTimer(timerid);//关闭定时器事件
    ui->videoswitchBt->setText("打开摄像头");
    //关闭摄像头
    cap.release();
}
