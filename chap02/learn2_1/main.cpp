//主程序入口文件，实现main()函数的程序文件
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义并创建程序
    Widget w;                   //定义并创建窗口
    w.show();                   //显示窗口
    return a.exec();            //应用运行
}
