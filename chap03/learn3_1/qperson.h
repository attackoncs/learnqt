#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>

class QPerson:public QObject
{
    //使得类可使用元对象系统的特性
    Q_OBJECT

    //类的附加信息，为类的元对象定义“名称-值”信息，可通过元对象的classInfo获取某个附加信息
    Q_CLASSINFO("author","Wang")
    Q_CLASSINFO("company","UPC")
    Q_CLASSINFO("version","1.0.0")

    //基于元对象系统实现的，定义属性
    //返回类型为int，名称为age，读取函数为age，写入函数为setAge，属性值发生变化时发送信号ageChanged
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    //返回类型为QString，名称为name，指定属性name与m_name相关联，成为可读可写的属性，无需设置READ、WRITE
    Q_PROPERTY(QString name MEMBER m_name)
    //同上
    Q_PROPERTY(int score MEMBER m_score)
private:
    int  m_age=10;
    QString m_name;
    int     m_score=79;
public:
    explicit QPerson(QString fName, QObject *parent = nullptr);

    int     age();
    void    setAge(int value);

    void    incAge();
signals:
    void    ageChanged( int  value);//该函数自定义的信号，无需实现只需发射emit,必须是无返回值函数

public slots:
};

#endif // QPERSON_H
