#ifndef SELECTWIN_H
#define SELECTWIN_H

#include <QWidget>
#include <QSqlTableModel>
namespace Ui {
class SelectWin;
}

class SelectWin : public QWidget
{
    Q_OBJECT

public:
    explicit SelectWin(QWidget *parent = nullptr);
    ~SelectWin();

private slots:
    void on_selectBt_clicked();//查询按钮

private:
    Ui::SelectWin *ui;
    QSqlTableModel *model;//表

};

#endif // SELECTWIN_H
