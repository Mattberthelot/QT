/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJava;
    QAction *actionC_2;
    QAction *actionPHP;
    QAction *actionJavascript;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QTextEdit *textEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *menuLangage;
    QMenu *menuWeb;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(354, 401);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QString::fromUtf8("actionC"));
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QString::fromUtf8("actionJava"));
        actionC_2 = new QAction(MainWindow);
        actionC_2->setObjectName(QString::fromUtf8("actionC_2"));
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QString::fromUtf8("actionPHP"));
        actionJavascript = new QAction(MainWindow);
        actionJavascript->setObjectName(QString::fromUtf8("actionJavascript"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 69, 198, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(51, 220, 258, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_6->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));

        verticalLayout_2->addWidget(textEdit);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 119, 256, 90));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox = new QCheckBox(layoutWidget2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_3->addWidget(checkBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton = new QRadioButton(layoutWidget2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_4->addWidget(radioButton_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(61, 20, 238, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 255, 253);"));

        horizontalLayout->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 354, 21));
        menuLangage = new QMenu(menubar);
        menuLangage->setObjectName(QString::fromUtf8("menuLangage"));
        menuWeb = new QMenu(menuLangage);
        menuWeb->setObjectName(QString::fromUtf8("menuWeb"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLangage->menuAction());
        menuLangage->addAction(actionC);
        menuLangage->addSeparator();
        menuLangage->addAction(actionJava);
        menuLangage->addAction(actionC_2);
        menuLangage->addSeparator();
        menuLangage->addAction(menuWeb->menuAction());
        menuWeb->addAction(actionPHP);
        menuWeb->addAction(actionJavascript);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        actionJava->setText(QCoreApplication::translate("MainWindow", "Java", nullptr));
        actionC_2->setText(QCoreApplication::translate("MainWindow", "C++", nullptr));
        actionPHP->setText(QCoreApplication::translate("MainWindow", "PHP", nullptr));
        actionJavascript->setText(QCoreApplication::translate("MainWindow", "Javascript", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Choix", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Linux", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Windows", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\303\251v\303\250nement", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Entrez votre code", nullptr));
        menuLangage->setTitle(QCoreApplication::translate("MainWindow", "Langages", nullptr));
        menuWeb->setTitle(QCoreApplication::translate("MainWindow", "Web", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
