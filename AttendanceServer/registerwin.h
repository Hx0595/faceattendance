#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include <opencv/cv.hpp>

namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();
    void timerEvent(QTimerEvent * e);//定时器事件

private slots:
    void on_resetBt_clicked();//重置

    void on_addpicBt_clicked();//添加头像

    void on_registerBt_clicked();//注册

    void on_videoswitchBt_clicked();//打开摄像头

    void on_cameraBt_clicked();//拍照

private:
    Ui::RegisterWin *ui;
    int timerid;
    cv::VideoCapture cap;
    cv::Mat image;
};

#endif // REGISTERWIN_H
