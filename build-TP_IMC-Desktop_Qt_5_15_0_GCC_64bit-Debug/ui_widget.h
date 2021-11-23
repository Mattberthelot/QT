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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBoxAge;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(545, 466);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 320, 80, 24));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 50, 162, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(140, 90, 180, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditPrenom = new QLineEdit(widget1);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);

        widget2 = new QWidget(tab);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(140, 130, 183, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        radioButtonFemme = new QRadioButton(widget2);
        radioButtonFemme->setObjectName(QString::fromUtf8("radioButtonFemme"));

        horizontalLayout_3->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(widget2);
        radioButtonHomme->setObjectName(QString::fromUtf8("radioButtonHomme"));

        horizontalLayout_3->addWidget(radioButtonHomme);

        widget3 = new QWidget(tab);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(140, 210, 158, 27));
        horizontalLayout_5 = new QHBoxLayout(widget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        doubleSpinBoxPoids = new QDoubleSpinBox(widget3);
        doubleSpinBoxPoids->setObjectName(QString::fromUtf8("doubleSpinBoxPoids"));

        horizontalLayout_5->addWidget(doubleSpinBoxPoids);

        widget4 = new QWidget(tab);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(140, 250, 144, 27));
        horizontalLayout_6 = new QHBoxLayout(widget4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        doubleSpinBoxTaille = new QDoubleSpinBox(widget4);
        doubleSpinBoxTaille->setObjectName(QString::fromUtf8("doubleSpinBoxTaille"));

        horizontalLayout_6->addWidget(doubleSpinBoxTaille);

        widget5 = new QWidget(tab);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(140, 180, 151, 27));
        horizontalLayout_4 = new QHBoxLayout(widget5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spinBoxAge = new QSpinBox(widget5);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));
        spinBoxAge->setSizeIncrement(QSize(0, 0));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        horizontalLayout_4->addWidget(spinBoxAge);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 2, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 3, 1, 1, 1);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Suite", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        lineEditNom->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QCoreApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme->setText(QCoreApplication::translate("Widget", "Homme", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Poids (kg)", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Taille (m)", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Informations personnelles", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de devine", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de lorentz", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Calcul du poids id\303\251al ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
