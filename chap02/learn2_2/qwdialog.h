#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class QWDialog;
}
QT_END_NAMESPACE

class QWDialog : public QDialog
{
    Q_OBJECT

public:
    QWDialog(QWidget *parent = nullptr);
    ~QWDialog();

private slots:
    //自定义的三个槽函数，利用ui_qwdialog.h中的QMetaObject::connectSlotsByName(QWDialog)函数，搜索QWDialog界面上所有组件，将
    //信号与槽函数匹配的信号和槽关联起来，只要符合on_<object name>_<signal name>(signal parameters),就会将槽函数与此匹配的信号关联
    //等价于connect(ui->chkBoxUnder,SIGNAL(clicked(bool checked)),this,SLOT(on_chkBoxUnder_clicked(bool checked)));不用手工关联
    void on_chkBoxUnder_clicked(bool checked);

    void on_chkBoxItalic_clicked(bool checked);

    void on_chkBoxBold_clicked(bool checked);

    //3个信号关联一个槽函数
    void setTextFontColor();

    //三个button的信号都是clicked，槽函数分别是accept、reject、close，它们在Ui::QWDialog的setupUi函数中
private:
    Ui::QWDialog *ui;
};
#endif // QWDIALOG_H
