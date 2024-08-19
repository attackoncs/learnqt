#include "qwmainwind.h"
#include "ui_qwmainwind.h"
#include <QTextCharFormat>
#include <QFile>
#include <QFileDialog>
#include <QFontDialog>

void QWMainWind::updateCurFile(QString aFile)
{//更新当前文件名，并更新状态栏提示
    fCurFileName=aFile;
    fLabCurFile->setText("当前文件："+fCurFileName);
}

void QWMainWind::iniUI()
{
    //状态栏上添加组件
    fLabCurFile=new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);//添加到状态栏

    progressBar1=new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMaximum(50);
    progressBar1->setMinimum(5);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);
    //工具栏上添加组件
    spinFontSize=new QSpinBox;//文字大小SpinBox
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);

    ui->mainToolBar->addWidget(new QLabel("字体大小 "));
    ui->mainToolBar->addWidget(spinFontSize);

    ui->mainToolBar->addSeparator();//分隔条
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboFont=new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);//添加到工具栏

    setCentralWidget(ui->txtEdit);
}

QWMainWind::QWMainWind(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();//手工初始化UI

    iniSignalSlots();//信号与槽关联

}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::iniSignalSlots()
{ //信号与槽的关联，当函数带有参数时，必须写明参数的类型
    connect(spinFontSize,SIGNAL(valueChanged(int)),
            this,SLOT(on_spinBoxFontSize_valueChanged(int)));

    connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),
            this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}

void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if(checked){
        fmt.setFontWeight(QFont::Bold);
    }else{
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_actFontItalic_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_actFontUnder_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_actOpen_triggered()
{
    QString curPath,aFileName;
    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径

    //调用打开文件对话框打开一个文件
    aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                                             "C++程序文件(*.cpp);;H头文件(*.h);;文本文件(*.txt);;所有文件(*.*)");

    if (!aFileName.isEmpty())
    {
        QFile aFile(aFileName);  //以文件方式读出
        if (aFile.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream aStream(&aFile); //用文本流读取文件
            while (!aStream.atEnd())
                ui->txtEdit->append(aStream.readLine()); //读取一个文本行
            updateCurFile(aFileName); //更新状态栏显示
        }
        aFile.close();
    }
}


void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    //有文字可copy时更新cut,copy的Enable状态
                                 ui->actCut->setEnabled(b); //能否 cut
    ui->actCopy->setEnabled(b);  //能否copy

    ui->actPaste->setEnabled(ui->txtEdit->canPaste()); //能否paste
}


void QWMainWind::on_actNew_triggered()
{
    //新建文件
    ui->txtEdit->clear();
    updateCurFile("");
}


void QWMainWind::on_actFont_triggered()
{
    bool    ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok)
        ui->txtEdit->setFont(font);
}


void QWMainWind::on_txtEdit_selectionChanged()
{
    //当前选择的文字发生变化,更新粗体、斜体、下划线3个action的checked状态
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat(); //获取文字的格式

    ui->actFontItalic->setChecked(fmt.fontItalic()); //是否斜体
    ui->actFontBold->setChecked(fmt.font().bold()); //是否粗体
    ui->actFontUnder->setChecked(fmt.fontUnderline()); //是否有下划线
}


void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{//改变字体大小的SpinBox的响应
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize); //设置字体大小
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{//FontCombobox的响应，选择字体名称
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);//设置字体名称
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actToolbarLab_triggered(bool checked)
{
    if (checked)  //显示文字和图标
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    else //只显示图标
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
}

