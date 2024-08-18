//设计的窗体类的头文件，任何窗体或界面组件都是用类封装
//定义窗口类的头文件，定义类Widget
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }//命名空间包含类Widget，注意这里的Widget不是该文件定义的Widget而是ui_widget.h文件里定义的类
//这种Ui::Widget和本文件中的Widget同名的设计，让用户感知不到Ui::Widget的类的存在，只需知道在Widget中通过ui指针可访问可视化界面的组件即可
QT_END_NAMESPACE

//继承自基类QWidget的Widget
class Widget : public QWidget
{
    //宏定义，这是使用信号与槽机制都必须使用的宏
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;//定义的ui指针，这里指针指示的是可视化设计的界面，后面要访问界面上的组件，都需通过该指针
};
#endif // WIDGET_H
