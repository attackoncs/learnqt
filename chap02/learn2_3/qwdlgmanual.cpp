#include "qwdlgmanual.h"
#include <QHBoxLayout>

//初始化ui
void QWDlgManual::iniUI()
{
    //创建Underline、Italic、Bold3个CheckBox，并水平布局
    chkBoxUnder=new QCheckBox(tr("Underline"));
    chkBoxItalic=new QCheckBox(tr("Italic"));
    chkBoxBold=new QCheckBox(tr("Bold"));
    QHBoxLayout *hlay1=new QHBoxLayout;
    hlay1->addWidget(chkBoxUnder);
    hlay1->addWidget(chkBoxItalic);
    hlay1->addWidget(chkBoxBold);
    //创建Black、Red、Blue3个RadioButton，并水平布局
    rBtnBlack=new QRadioButton(tr("Black"));
    rBtnRed=new QRadioButton(tr("Red"));
    rBtnBlue=new QRadioButton(tr("Blue"));
    QHBoxLayout *hlay2=new QHBoxLayout;
    hlay2->addWidget(rBtnBlack);
    hlay2->addWidget(rBtnRed);
    hlay2->addWidget(rBtnBlue);
    //创建确定、取消、退出3个PushButton，并水平布局
    btnOK=new QPushButton(tr("确定"));
    btnCancel=new QPushButton(tr("取消"));
    btnClose=new QPushButton(tr("退出"));
    QHBoxLayout *hlay3=new QHBoxLayout;
    hlay3->addStretch();
    hlay3->addWidget(btnOK);
    hlay3->addWidget(btnCancel);
    hlay3->addStretch();
    hlay3->addWidget(btnClose);
    //创建文本框，并设置初始化字体
    txtEdit=new QPlainTextEdit;
    txtEdit->setPlainText("Hello world\n\nIt is my demo");
    QFont font=txtEdit->font();//获取字体
    font.setPointSize(20);
    txtEdit->setFont(font);
    //创建垂直布局，并设置为主布局
    QVBoxLayout *vlay=new QVBoxLayout;
    vlay->addLayout(hlay1);
    vlay->addLayout(hlay2);
    vlay->addWidget(txtEdit);
    vlay->addLayout(hlay3);
    setLayout(vlay);
}

//绑定所有槽函数
void QWDlgManual::iniSignalSlots()
{
    //关联CheckBox的槽
    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxItalic(bool)));
    connect(chkBoxBold,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxBold(bool)));
    //关联RadioButton的槽
    connect(rBtnBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    //关联3按钮的槽
    connect(btnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnCancel,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));
}

//3个checkBox的响应槽函数，并没有通过ui指针而是直接通过组件指针。下同
void QWDlgManual::on_chkBoxUnder(bool checked)
{
    QFont font=txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    QFont font=txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxBold(bool checked)
{
    QFont font=txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

//设置文字颜色的槽函数，三个按钮同时绑定这个槽函数
void QWDlgManual::setTextFontColor()
{
    QPalette plet=txtEdit->palette();
    if(rBtnBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if(rBtnRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(rBtnBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else
        plet.setColor(QPalette::Text,Qt::black);
    txtEdit->setPalette(plet);
}

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    iniUI();//手动初始化ui
    iniSignalSlots();//绑定所有槽函数
    setWindowTitle("Form created manually");
}

//这里应该需要删掉指针，不过官方例子代码并没删除
QWDlgManual::~QWDlgManual()
{
  /*  delete chkBoxUnder;
    delete chkBoxItalic;
    delete chkBoxBold;
    delete rBtnBlack;
    delete rBtnRed;
    delete rBtnBlue;
    delete txtEdit;
    delete btnOK;
    delete btnCancel;
    delete btnClose;*/
}
