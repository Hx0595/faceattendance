#include "selectwin.h"
#include "ui_selectwin.h"

SelectWin::SelectWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWin)
{
    ui->setupUi(this);
    model = new QSqlTableModel();
}

SelectWin::~SelectWin()
{
    delete ui;
}

void SelectWin::on_selectBt_clicked()
{
    if(ui->empRb->isChecked())
    {
        model->setTable("employee");//设置员工表格
    }
    if(ui->attRb->isChecked())
    {
        model->setTable("attendance");
    }

    //设置过滤器
    //model->setFilter("name='张三'");
    //查询
    model->select();

    ui->tableView->setModel(model);
}
