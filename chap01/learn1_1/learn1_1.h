#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_learn1_1.h"

class learn1_1 : public QMainWindow
{
    Q_OBJECT

public:
    learn1_1(QWidget *parent = nullptr);
    ~learn1_1();

private:
    Ui::learn1_1Class ui;
};
