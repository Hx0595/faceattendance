#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>

namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();

private slots:
    void on_resetBt_clicked();

    void on_addpicBt_clicked();

private:
    Ui::RegisterWin *ui;
};

#endif // REGISTERWIN_H
