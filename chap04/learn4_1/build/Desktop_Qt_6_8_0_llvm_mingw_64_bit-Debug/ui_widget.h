/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *editNum;
    QLineEdit *editTotal;
    QLabel *label_3;
    QPushButton *btnCal;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *editPrice;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *editDec;
    QPushButton *btnDec;
    QLabel *label_7;
    QLineEdit *editBin;
    QPushButton *btnBin;
    QLabel *label_8;
    QLineEdit *editHex;
    QPushButton *btnHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(330, 189);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        Widget->setFont(font);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        editNum = new QLineEdit(Widget);
        editNum->setObjectName("editNum");

        gridLayout->addWidget(editNum, 0, 1, 1, 1);

        editTotal = new QLineEdit(Widget);
        editTotal->setObjectName("editTotal");

        gridLayout->addWidget(editTotal, 1, 4, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        btnCal = new QPushButton(Widget);
        btnCal->setObjectName("btnCal");

        gridLayout->addWidget(btnCal, 1, 1, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        editPrice = new QLineEdit(Widget);
        editPrice->setObjectName("editPrice");

        gridLayout->addWidget(editPrice, 0, 4, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        editDec = new QLineEdit(Widget);
        editDec->setObjectName("editDec");

        gridLayout_2->addWidget(editDec, 0, 1, 1, 1);

        btnDec = new QPushButton(Widget);
        btnDec->setObjectName("btnDec");

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        editBin = new QLineEdit(Widget);
        editBin->setObjectName("editBin");

        gridLayout_2->addWidget(editBin, 1, 1, 1, 1);

        btnBin = new QPushButton(Widget);
        btnBin->setObjectName("btnBin");

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        editHex = new QLineEdit(Widget);
        editHex->setObjectName("editHex");

        gridLayout_2->addWidget(editHex, 2, 1, 1, 1);

        btnHex = new QPushButton(Widget);
        btnHex->setObjectName("btnHex");

        gridLayout_2->addWidget(btnHex, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\344\270\216\350\276\223\345\205\245\350\276\223\345\207\272", nullptr));
        editNum->setText(QCoreApplication::translate("Widget", "12", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273 \344\273\267", nullptr));
        btnCal->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260 \351\207\217", nullptr));
        editPrice->setText(QCoreApplication::translate("Widget", "5.3", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225 \344\273\267", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201 \350\277\233 \345\210\266", nullptr));
        editDec->setInputMask(QString());
        editDec->setText(QCoreApplication::translate("Widget", "12", nullptr));
        btnDec->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\344\272\214 \350\277\233 \345\210\266", nullptr));
        editBin->setInputMask(QString());
        btnBin->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        editHex->setInputMask(QString());
        btnHex->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
