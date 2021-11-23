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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_Clients;
    QPushButton *pushButton_Quitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_NumeroPort;
    QPushButton *pushButton_LancerServeur;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 130, 451, 248));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_Clients = new QTextEdit(layoutWidget);
        textEdit_Clients->setObjectName(QString::fromUtf8("textEdit_Clients"));

        verticalLayout->addWidget(textEdit_Clients);

        pushButton_Quitter = new QPushButton(layoutWidget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        verticalLayout->addWidget(pushButton_Quitter);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 50, 451, 59));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox_NumeroPort = new QSpinBox(layoutWidget1);
        spinBox_NumeroPort->setObjectName(QString::fromUtf8("spinBox_NumeroPort"));
        spinBox_NumeroPort->setMinimum(-4);
        spinBox_NumeroPort->setMaximum(900000);
        spinBox_NumeroPort->setValue(8888);

        horizontalLayout->addWidget(spinBox_NumeroPort);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_LancerServeur = new QPushButton(layoutWidget1);
        pushButton_LancerServeur->setObjectName(QString::fromUtf8("pushButton_LancerServeur"));

        verticalLayout_3->addWidget(pushButton_LancerServeur);


        retranslateUi(Widget);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Clients", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Numero de port ", nullptr));
        pushButton_LancerServeur->setText(QCoreApplication::translate("Widget", "Lancement serveur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
