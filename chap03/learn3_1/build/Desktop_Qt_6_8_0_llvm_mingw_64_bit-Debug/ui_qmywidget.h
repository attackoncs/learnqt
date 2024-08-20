/********************************************************************************
** Form generated from reading UI file 'qmywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QLabel *label_2;
    QSpinBox *spinGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *QmyWidget)
    {
        if (QmyWidget->objectName().isEmpty())
            QmyWidget->setObjectName("QmyWidget");
        QmyWidget->resize(410, 320);
        verticalLayout = new QVBoxLayout(QmyWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(QmyWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoy = new QSpinBox(QmyWidget);
        spinBoy->setObjectName("spinBoy");
        spinBoy->setMinimum(0);
        spinBoy->setMaximum(200);
        spinBoy->setValue(10);

        gridLayout->addWidget(spinBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(QmyWidget);
        btnBoyInc->setObjectName("btnBoyInc");

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassInfo = new QPushButton(QmyWidget);
        btnClassInfo->setObjectName("btnClassInfo");

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        label_2 = new QLabel(QmyWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinGirl = new QSpinBox(QmyWidget);
        spinGirl->setObjectName("spinGirl");
        spinGirl->setMaximum(200);
        spinGirl->setValue(20);

        gridLayout->addWidget(spinGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(QmyWidget);
        btnGirlInc->setObjectName("btnGirlInc");

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(QmyWidget);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        textEdit = new QPlainTextEdit(QmyWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        retranslateUi(QmyWidget);

        QMetaObject::connectSlotsByName(QmyWidget);
    } // setupUi

    void retranslateUi(QWidget *QmyWidget)
    {
        QmyWidget->setWindowTitle(QCoreApplication::translate("QmyWidget", "MetaObject\347\232\204\344\275\277\347\224\250", nullptr));
        label->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("QmyWidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("QmyWidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("QmyWidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClear->setText(QCoreApplication::translate("QmyWidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QmyWidget: public Ui_QmyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H
