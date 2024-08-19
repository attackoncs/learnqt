#ifndef QWDLGMANUAL_H
#define QWDLGMANUAL_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

class QWDlgManual : public QDialog
{
    Q_OBJECT
private:
    //没有ui指针
    //各组件的指针变量
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QPlainTextEdit *txtEdit;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;
    void iniUI();//ui创建与初始化，并完成组件的布局和属性设置
    void iniSignalSlots();//初始化信号与槽的链接，完成所有信号与槽函数的关联

private slots:
    //槽函数，3个CheckBox响应槽函数，3个颜色设置的RadioButton共同响应槽函数
    void on_chkBoxUnder(bool checked);
    void on_chkBoxItalic(bool checked);
    void on_chkBoxBold(bool checked);
    void setTextFontColor();//设置字体颜色
public:
    QWDlgManual(QWidget *parent = nullptr);
    ~QWDlgManual();
};
#endif // QWDLGMANUAL_H
