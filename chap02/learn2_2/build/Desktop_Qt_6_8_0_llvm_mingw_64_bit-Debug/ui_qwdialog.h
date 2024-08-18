/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QPlainTextEdit *txtEdit;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkBoxUnder;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkBoxItalic;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rBtnBlack;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *rBtnRed;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *rBtnBlue;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName("QWDialog");
        QWDialog->resize(800, 600);
        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName("txtEdit");
        txtEdit->setGeometry(QRect(140, 170, 341, 61));
        QFont font;
        font.setPointSize(20);
        txtEdit->setFont(font);
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 30, 300, 80));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 204, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chkBoxUnder = new QCheckBox(layoutWidget);
        chkBoxUnder->setObjectName("chkBoxUnder");

        horizontalLayout->addWidget(chkBoxUnder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chkBoxItalic = new QCheckBox(layoutWidget);
        chkBoxItalic->setObjectName("chkBoxItalic");

        horizontalLayout->addWidget(chkBoxItalic);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        chkBoxBold = new QCheckBox(layoutWidget);
        chkBoxBold->setObjectName("chkBoxBold");

        horizontalLayout->addWidget(chkBoxBold);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(140, 90, 300, 80));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 20, 172, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rBtnBlack = new QRadioButton(layoutWidget1);
        rBtnBlack->setObjectName("rBtnBlack");

        horizontalLayout_2->addWidget(rBtnBlack);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        rBtnRed = new QRadioButton(layoutWidget1);
        rBtnRed->setObjectName("rBtnRed");

        horizontalLayout_2->addWidget(rBtnRed);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        rBtnBlue = new QRadioButton(layoutWidget1);
        rBtnBlue->setObjectName("rBtnBlue");

        horizontalLayout_2->addWidget(rBtnBlue);

        layoutWidget2 = new QWidget(QWDialog);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(150, 260, 239, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(layoutWidget2);
        btnOK->setObjectName("btnOK");

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(layoutWidget2);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_3->addWidget(btnCancel);

        btnClose = new QPushButton(layoutWidget2);
        btnClose->setObjectName("btnClose");

        horizontalLayout_3->addWidget(btnClose);


        retranslateUi(QWDialog);
        //关联三个button的信号和槽函数
        QObject::connect(btnOK, &QPushButton::clicked, QWDialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, QWDialog, qOverload<>(&QDialog::reject));
        QObject::connect(btnClose, &QPushButton::clicked, QWDialog, qOverload<>(&QDialog::close));
	//这行代码会自动查找界面上所有符合标准格式的匹配槽的信号，并关联信号和槽函数，这里是on_chkBoxUnder_clicked三个函数
        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QCoreApplication::translate("QWDialog", "QWDialog", nullptr));
        txtEdit->setPlainText(QCoreApplication::translate("QWDialog", "Hello,world!It is Demo.", nullptr));
        groupBox->setTitle(QString());
        chkBoxUnder->setText(QCoreApplication::translate("QWDialog", "Underline", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("QWDialog", "Italic", nullptr));
        chkBoxBold->setText(QCoreApplication::translate("QWDialog", "Bold", nullptr));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QCoreApplication::translate("QWDialog", "Black", nullptr));
        rBtnRed->setText(QCoreApplication::translate("QWDialog", "Red", nullptr));
        rBtnBlue->setText(QCoreApplication::translate("QWDialog", "Blue", nullptr));
        btnOK->setText(QCoreApplication::translate("QWDialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("QWDialog", "\345\217\226\346\266\210", nullptr));
        btnClose->setText(QCoreApplication::translate("QWDialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
