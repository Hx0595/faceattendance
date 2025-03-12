#include "attendancewin.h"
#include "ui_attendancewin.h"

AttendanceWin::AttendanceWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendanceWin)
{
    ui->setupUi(this);

    //qtcpServer当有客户端连接会发送newconnection
    connect(&mserver,&QTcpServer::newConnection,this,&AttendanceWin::accept_client);
    mserver.listen(QHostAddress::Any,9999);//监听，启动服务器
    bsize = 0;
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
    QByteArray data;
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
}
