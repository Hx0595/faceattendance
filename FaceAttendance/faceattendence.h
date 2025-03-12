#ifndef FACEATTENDENCE_H
#define FACEATTENDENCE_H

#include <QMainWindow>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv/cv.h>
#include <QTcpSocket>
#include <QTimer>
using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class FaceAttendence; }
QT_END_NAMESPACE

class FaceAttendence : public QMainWindow
{
    Q_OBJECT

public:
    FaceAttendence(QWidget *parent = nullptr);
    ~FaceAttendence();
    //定时器事件
    void timerEvent(QTimerEvent *e);

protected slots:
    void timer_connect();//定时连接服务器
    void stop_connect();//断开连接
    void start_connect();//开始连接

private:
    Ui::FaceAttendence *ui;

    //摄像头
    VideoCapture cap;
    //hear--级联分类器 用于检测人脸
    //cv::CascadeClassifier cascade;

    //创建网络套接字，定时器(用来定时连接服务器)
    QTcpSocket msocket;
    QTimer mtimer;

};
#endif // FACEATTENDENCE_H
