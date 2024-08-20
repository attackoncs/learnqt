#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->horizontalLayout);  //设置窗口的主布局组件

    connect(ui->SliderGreen,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
    connect(ui->SliderBlue,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
    connect(ui->SliderAlpha,SIGNAL(valueChanged(int)),this,SLOT(on_SliderRed_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_SliderRed_valueChanged(int value)
{
    //拖动Red、Green、Blue 颜色滑动条时设置textEdit的底色
    Q_UNUSED(value);
    QColor  color;
    int R=ui->SliderRed->value();  //读取SliderRed的当前值
    int G=ui->SliderGreen->value();//读取 SliderGreen 的当前值
    int B=ui->SliderBlue->value();//读取 SliderBlue 的当前值
    int alpha=ui->SliderAlpha->value();//读取 SliderAlpha 的当前值
    color.setRgb(R,G,B,alpha); //使用QColor的setRgb()函数 获得颜色

    QPalette pal=ui->textEdit->palette();//获取textEdit原有的 palette
    pal.setColor(QPalette::Base,color); //设置palette的基色（即背景色）

    ui->textEdit->setPalette(pal);//设置为textEdit的palette,改变textEdit的底色
}


void Widget::on_dial_valueChanged(int value)
{
    ui->LCDDisplay->display(value);
}


void Widget::on_radioBtnDec_clicked()
{
    ui->LCDDisplay->setDigitCount(3);//设置位数
    ui->LCDDisplay->setDecMode();
}


void Widget::on_radioBtnBin_clicked()
{
    ui->LCDDisplay->setDigitCount(8);//设置位数
    ui->LCDDisplay->setBinMode();
}


void Widget::on_radioBtnOct_clicked()
{
    ui->LCDDisplay->setDigitCount(4);//设置位数
    ui->LCDDisplay->setOctMode();
}


void Widget::on_radioBtnHex_clicked()
{
    ui->LCDDisplay->setDigitCount(3);//设置位数
    ui->LCDDisplay->setHexMode();
}


void Widget::on_SliderH_valueChanged(int value)
{
    ui->progBarH->setValue(value); //
    ui->ScrollBarH->setValue(value);//
}


void Widget::on_SliderV_valueChanged(int value)
{
    ui->progBarV->setValue(value);
    ui->ScrollBarV->setValue(value);
}

void Widget::on_ScrollBarH_sliderMoved(int position)
{
    ui->progBarH->setValue(position);
}


void Widget::on_ScrollBarV_sliderMoved(int position)
{
    ui->progBarV->setValue(position);
}

