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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_NomDepartement;
    QPushButton *pushButton_Quitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Donnez_numero_departement;
    QLineEdit *lineEdit_numero_departement;
    QPushButton *pushButton_Avoir_Nom_departement;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label_NomDepartement = new QLabel(Widget);
        label_NomDepartement->setObjectName(QString::fromUtf8("label_NomDepartement"));
        label_NomDepartement->setGeometry(QRect(20, 170, 128, 16));
        pushButton_Quitter = new QPushButton(Widget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(420, 160, 80, 24));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 110, 534, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Donnez_numero_departement = new QLabel(widget);
        label_Donnez_numero_departement->setObjectName(QString::fromUtf8("label_Donnez_numero_departement"));

        horizontalLayout->addWidget(label_Donnez_numero_departement);

        lineEdit_numero_departement = new QLineEdit(widget);
        lineEdit_numero_departement->setObjectName(QString::fromUtf8("lineEdit_numero_departement"));

        horizontalLayout->addWidget(lineEdit_numero_departement);

        pushButton_Avoir_Nom_departement = new QPushButton(widget);
        pushButton_Avoir_Nom_departement->setObjectName(QString::fromUtf8("pushButton_Avoir_Nom_departement"));

        horizontalLayout->addWidget(pushButton_Avoir_Nom_departement);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_NomDepartement->setText(QCoreApplication::translate("Widget", "Nom du d\303\251partement", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        label_Donnez_numero_departement->setText(QCoreApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement ", nullptr));
        pushButton_Avoir_Nom_departement->setText(QCoreApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
