/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditAfficheur;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonPlus;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonSoustraire;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplication;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonC;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDIviser;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 110, 342, 154));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAfficheur = new QLineEdit(widget);
        lineEditAfficheur->setObjectName(QString::fromUtf8("lineEditAfficheur"));

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        horizontalLayout->addWidget(pushButton7);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        horizontalLayout->addWidget(pushButton8);

        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        horizontalLayout->addWidget(pushButton9);

        pushButtonPlus = new QPushButton(widget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));

        horizontalLayout->addWidget(pushButtonPlus);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        horizontalLayout_2->addWidget(pushButton4);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        horizontalLayout_2->addWidget(pushButton5);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        horizontalLayout_2->addWidget(pushButton6);

        pushButtonSoustraire = new QPushButton(widget);
        pushButtonSoustraire->setObjectName(QString::fromUtf8("pushButtonSoustraire"));

        horizontalLayout_2->addWidget(pushButtonSoustraire);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        horizontalLayout_3->addWidget(pushButton1);

        pushButton2 = new QPushButton(widget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        horizontalLayout_3->addWidget(pushButton2);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        horizontalLayout_3->addWidget(pushButton3);

        pushButtonMultiplication = new QPushButton(widget);
        pushButtonMultiplication->setObjectName(QString::fromUtf8("pushButtonMultiplication"));

        horizontalLayout_3->addWidget(pushButtonMultiplication);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonC = new QPushButton(widget);
        pushButtonC->setObjectName(QString::fromUtf8("pushButtonC"));

        horizontalLayout_4->addWidget(pushButtonC);

        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        horizontalLayout_4->addWidget(pushButton0);

        pushButtonEgal = new QPushButton(widget);
        pushButtonEgal->setObjectName(QString::fromUtf8("pushButtonEgal"));

        horizontalLayout_4->addWidget(pushButtonEgal);

        pushButtonDIviser = new QPushButton(widget);
        pushButtonDIviser->setObjectName(QString::fromUtf8("pushButtonDIviser"));

        horizontalLayout_4->addWidget(pushButtonDIviser);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditAfficheur->setInputMask(QString());
        lineEditAfficheur->setText(QString());
        lineEditAfficheur->setPlaceholderText(QCoreApplication::translate("Widget", "                                                             affichage des operations", nullptr));
        pushButton7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButtonSoustraire->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButtonMultiplication->setText(QCoreApplication::translate("Widget", "*", nullptr));
        pushButtonC->setText(QCoreApplication::translate("Widget", "C", nullptr));
        pushButton0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButtonDIviser->setText(QCoreApplication::translate("Widget", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
