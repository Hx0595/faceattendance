/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *empRb;
    QRadioButton *attRb;
    QPushButton *selectBt;
    QTableView *tableView;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(1024, 600);
        verticalLayout = new QVBoxLayout(SelectWin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        empRb = new QRadioButton(SelectWin);
        empRb->setObjectName(QString::fromUtf8("empRb"));

        horizontalLayout->addWidget(empRb);

        attRb = new QRadioButton(SelectWin);
        attRb->setObjectName(QString::fromUtf8("attRb"));

        horizontalLayout->addWidget(attRb);

        selectBt = new QPushButton(SelectWin);
        selectBt->setObjectName(QString::fromUtf8("selectBt"));

        horizontalLayout->addWidget(selectBt);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(SelectWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QApplication::translate("SelectWin", "Form", nullptr));
        empRb->setText(QApplication::translate("SelectWin", "\345\221\230\345\267\245", nullptr));
        attRb->setText(QApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        selectBt->setText(QApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
