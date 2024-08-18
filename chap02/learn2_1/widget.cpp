//Widget类的功能实现源文件
#include "widget.h"
//自动加入的Qt编译生成的与UI文件widget.ui对应的类定义文件
#include "ui_widget.h"

//执行父类QWidget的构造函数，创建一个Ui::Widget类的对象ui，就是Widget类private中定义的指针
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);//执行Ui::Widget类的setupUi函数，实现窗口的生成与各属性的设置、信号与槽的关联
}

Widget::~Widget()
{
    delete ui;
}

