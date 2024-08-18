//编译后根据窗体上组件及属性、信号与槽关联等自动生成的一个类的定义文件，类名词是Ui_Widget
/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

//1封装可视化设计的界面为类Ui_Widget
//2在public中自动生成界面各组件的类成员变量定义，名就是设置的UI设计器中指定的objectName；
//3定义setupUi函数，用于创建各界面组件，并设置属性，设置信号与槽的关联。
class Ui_Widget
{
public:
    QPushButton *btnClose;
    QLabel *LabelDemo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        btnClose = new QPushButton(Widget);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(250, 230, 75, 24));
        LabelDemo = new QLabel(Widget);
        LabelDemo->setObjectName("LabelDemo");
        LabelDemo->setGeometry(QRect(210, 90, 281, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        LabelDemo->setFont(font);

        retranslateUi(Widget);//调函数设置各组件的文字内容属性，将界面上文字设置内容独立出作为函数，在设计多语言界面时会用到该函数
        //调connect将UI设计器设置的信号与槽关联转换为语句，这里将btnClose按键的clicked信号与窗体的close槽关联
	QObject::connect(btnClose, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));
	//设置槽函数的关联方式，将UI设计器自动生成的组件信号的槽函数与组件信号相关联
        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "Close", nullptr));
        LabelDemo->setText(QCoreApplication::translate("Widget", "Hello,World!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};//4定义一个从Ui_Widget集成的类Widget
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
