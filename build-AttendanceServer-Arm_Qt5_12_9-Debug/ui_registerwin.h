/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QRadioButton *mrb;
    QRadioButton *wrb;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *registerBt;
    QPushButton *resetBt;
    QVBoxLayout *verticalLayout_2;
    QLabel *headpicLb;
    QLineEdit *picFileEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addpicBt;
    QPushButton *videoswitchBt;
    QPushButton *cameraBt;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(1024, 600);
        horizontalLayout_8 = new QHBoxLayout(RegisterWin);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RegisterWin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(RegisterWin);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setFont(font);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(RegisterWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        mrb = new QRadioButton(RegisterWin);
        mrb->setObjectName(QString::fromUtf8("mrb"));
        mrb->setFont(font);

        horizontalLayout_4->addWidget(mrb);

        wrb = new QRadioButton(RegisterWin);
        wrb->setObjectName(QString::fromUtf8("wrb"));
        wrb->setFont(font);

        horizontalLayout_4->addWidget(wrb);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(RegisterWin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        birthdayEdit = new QDateEdit(RegisterWin);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy);
        birthdayEdit->setFont(font);

        horizontalLayout_5->addWidget(birthdayEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegisterWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        addressEdit = new QLineEdit(RegisterWin);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);
        addressEdit->setFont(font);

        horizontalLayout_2->addWidget(addressEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RegisterWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        phoneEdit = new QLineEdit(RegisterWin);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);
        phoneEdit->setFont(font);

        horizontalLayout_3->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        registerBt = new QPushButton(RegisterWin);
        registerBt->setObjectName(QString::fromUtf8("registerBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(registerBt->sizePolicy().hasHeightForWidth());
        registerBt->setSizePolicy(sizePolicy1);
        registerBt->setFont(font);

        horizontalLayout_6->addWidget(registerBt);

        resetBt = new QPushButton(RegisterWin);
        resetBt->setObjectName(QString::fromUtf8("resetBt"));
        sizePolicy1.setHeightForWidth(resetBt->sizePolicy().hasHeightForWidth());
        resetBt->setSizePolicy(sizePolicy1);
        resetBt->setFont(font);

        horizontalLayout_6->addWidget(resetBt);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        headpicLb = new QLabel(RegisterWin);
        headpicLb->setObjectName(QString::fromUtf8("headpicLb"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(headpicLb->sizePolicy().hasHeightForWidth());
        headpicLb->setSizePolicy(sizePolicy2);
        headpicLb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));

        verticalLayout_2->addWidget(headpicLb);

        picFileEdit = new QLineEdit(RegisterWin);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));

        verticalLayout_2->addWidget(picFileEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        addpicBt = new QPushButton(RegisterWin);
        addpicBt->setObjectName(QString::fromUtf8("addpicBt"));
        sizePolicy1.setHeightForWidth(addpicBt->sizePolicy().hasHeightForWidth());
        addpicBt->setSizePolicy(sizePolicy1);
        addpicBt->setFont(font);

        horizontalLayout_7->addWidget(addpicBt);

        videoswitchBt = new QPushButton(RegisterWin);
        videoswitchBt->setObjectName(QString::fromUtf8("videoswitchBt"));
        sizePolicy1.setHeightForWidth(videoswitchBt->sizePolicy().hasHeightForWidth());
        videoswitchBt->setSizePolicy(sizePolicy1);
        videoswitchBt->setFont(font);

        horizontalLayout_7->addWidget(videoswitchBt);

        cameraBt = new QPushButton(RegisterWin);
        cameraBt->setObjectName(QString::fromUtf8("cameraBt"));
        sizePolicy1.setHeightForWidth(cameraBt->sizePolicy().hasHeightForWidth());
        cameraBt->setSizePolicy(sizePolicy1);
        cameraBt->setFont(font);

        horizontalLayout_7->addWidget(cameraBt);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_8->addLayout(verticalLayout_2);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QApplication::translate("RegisterWin", "Form", nullptr));
        label->setText(QApplication::translate("RegisterWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("RegisterWin", "\346\200\247\345\210\253\357\274\232", nullptr));
        mrb->setText(QApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wrb->setText(QApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_6->setText(QApplication::translate("RegisterWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_2->setText(QApplication::translate("RegisterWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_3->setText(QApplication::translate("RegisterWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        registerBt->setText(QApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetBt->setText(QApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
        headpicLb->setText(QString());
        addpicBt->setText(QApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoswitchBt->setText(QApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraBt->setText(QApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
