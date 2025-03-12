#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>

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
    cv::Mat image = cv::imread(ui->picFileEdit->text().toUtf8().data());//用OpenCV从ui读数据
    int faceID = faceobj.face_register(image);

    //2.把个人信息存储到数据库employee表


    //3. 提示注册成功

}
