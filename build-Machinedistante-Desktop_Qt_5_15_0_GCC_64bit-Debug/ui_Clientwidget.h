/********************************************************************************
** Form generated from reading UI file 'Clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexionServeur;
    QPushButton *pushButtonQuitter;
    QLabel *label_3;
    QTextEdit *textEditEtatConnexion;
    QPushButton *pushButtonCOnnexion;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditAdresseServeur;
    QLineEdit *lineEditNumeroPort;
    QGroupBox *groupBoxInformationCLient;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonNomDeLordinateur;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonArchitectureProcesseur;
    QPushButton *pushButtonOSOrdinateur;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNomDeLordinateur;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditArchitectureProcesseur;
    QLineEdit *lineEditOsOrdinateur;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        groupBoxConnexionServeur = new QGroupBox(Widget);
        groupBoxConnexionServeur->setObjectName(QString::fromUtf8("groupBoxConnexionServeur"));
        groupBoxConnexionServeur->setGeometry(QRect(20, 60, 531, 151));
        pushButtonQuitter = new QPushButton(groupBoxConnexionServeur);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(30, 120, 80, 24));
        label_3 = new QLabel(groupBoxConnexionServeur);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 40, 131, 16));
        textEditEtatConnexion = new QTextEdit(groupBoxConnexionServeur);
        textEditEtatConnexion->setObjectName(QString::fromUtf8("textEditEtatConnexion"));
        textEditEtatConnexion->setGeometry(QRect(320, 60, 191, 70));
        pushButtonCOnnexion = new QPushButton(groupBoxConnexionServeur);
        pushButtonCOnnexion->setObjectName(QString::fromUtf8("pushButtonCOnnexion"));
        pushButtonCOnnexion->setGeometry(QRect(220, 110, 80, 24));
        layoutWidget = new QWidget(groupBoxConnexionServeur);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 298, 58));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditAdresseServeur = new QLineEdit(layoutWidget);
        lineEditAdresseServeur->setObjectName(QString::fromUtf8("lineEditAdresseServeur"));

        verticalLayout_2->addWidget(lineEditAdresseServeur);

        lineEditNumeroPort = new QLineEdit(layoutWidget);
        lineEditNumeroPort->setObjectName(QString::fromUtf8("lineEditNumeroPort"));

        verticalLayout_2->addWidget(lineEditNumeroPort);


        horizontalLayout->addLayout(verticalLayout_2);

        groupBoxInformationCLient = new QGroupBox(Widget);
        groupBoxInformationCLient->setObjectName(QString::fromUtf8("groupBoxInformationCLient"));
        groupBoxInformationCLient->setGeometry(QRect(30, 240, 521, 171));
        layoutWidget1 = new QWidget(groupBoxInformationCLient);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 501, 118));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButtonNomDeLordinateur = new QPushButton(layoutWidget1);
        pushButtonNomDeLordinateur->setObjectName(QString::fromUtf8("pushButtonNomDeLordinateur"));

        verticalLayout_3->addWidget(pushButtonNomDeLordinateur);

        pushButtonNomUtilisateur = new QPushButton(layoutWidget1);
        pushButtonNomUtilisateur->setObjectName(QString::fromUtf8("pushButtonNomUtilisateur"));

        verticalLayout_3->addWidget(pushButtonNomUtilisateur);

        pushButtonArchitectureProcesseur = new QPushButton(layoutWidget1);
        pushButtonArchitectureProcesseur->setObjectName(QString::fromUtf8("pushButtonArchitectureProcesseur"));

        verticalLayout_3->addWidget(pushButtonArchitectureProcesseur);

        pushButtonOSOrdinateur = new QPushButton(layoutWidget1);
        pushButtonOSOrdinateur->setObjectName(QString::fromUtf8("pushButtonOSOrdinateur"));

        verticalLayout_3->addWidget(pushButtonOSOrdinateur);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditNomDeLordinateur = new QLineEdit(layoutWidget1);
        lineEditNomDeLordinateur->setObjectName(QString::fromUtf8("lineEditNomDeLordinateur"));

        verticalLayout_4->addWidget(lineEditNomDeLordinateur);

        lineEditNomUtilisateur = new QLineEdit(layoutWidget1);
        lineEditNomUtilisateur->setObjectName(QString::fromUtf8("lineEditNomUtilisateur"));

        verticalLayout_4->addWidget(lineEditNomUtilisateur);

        lineEditArchitectureProcesseur = new QLineEdit(layoutWidget1);
        lineEditArchitectureProcesseur->setObjectName(QString::fromUtf8("lineEditArchitectureProcesseur"));

        verticalLayout_4->addWidget(lineEditArchitectureProcesseur);

        lineEditOsOrdinateur = new QLineEdit(layoutWidget1);
        lineEditOsOrdinateur->setObjectName(QString::fromUtf8("lineEditOsOrdinateur"));

        verticalLayout_4->addWidget(lineEditOsOrdinateur);


        horizontalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexionServeur->setTitle(QCoreApplication::translate("Widget", "Connexion au serveur ", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Etat de la connexion ", nullptr));
        pushButtonCOnnexion->setText(QCoreApplication::translate("Widget", "Connexion", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Adresse IP du serveur", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Num\303\251ro de port du serveur", nullptr));
        lineEditAdresseServeur->setText(QCoreApplication::translate("Widget", "172.18.58.83", nullptr));
        lineEditNumeroPort->setText(QCoreApplication::translate("Widget", "1025", nullptr));
        groupBoxInformationCLient->setTitle(QCoreApplication::translate("Widget", "Informations Client", nullptr));
        pushButtonNomDeLordinateur->setText(QCoreApplication::translate("Widget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QCoreApplication::translate("Widget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitectureProcesseur->setText(QCoreApplication::translate("Widget", "Architecture processeur", nullptr));
        pushButtonOSOrdinateur->setText(QCoreApplication::translate("Widget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
