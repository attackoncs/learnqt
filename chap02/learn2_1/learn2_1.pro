#项目组织文件，存储项目设置的文件

#表示项目加入core gui模块，是用于GUI设计的类库模块，若是控制台应用则不需添加，Qt以模块形式组织各功能类，若需数据库模块则添加QT+=sql
QT       += core gui

#Qt版本大于4则添加widgets模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#下面不需用户自动添加，当添加或删除一个文件时，条目会自动修改
#源程序文件
SOURCES += \
    main.cpp \
    widget.cpp

#头文件
HEADERS += \
    widget.h

#窗体文件
FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
