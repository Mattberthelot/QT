#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton0,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton1,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton2,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton3,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton4,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton5,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton6,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton7,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton8,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButton9,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonPlus,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonSoustraire,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonMultiplication,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    connect(ui->pushButtonDIviser,&QPushButton::clicked,this,&Widget::onQPushButtonClicked);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonC_clicked()
{
      ui->lineEditAfficheur->clear();
}


void Widget::on_pushButtonEgal_clicked()
{
    QScriptEngine expression;
    ui->lineEditAfficheur->setText(expression.evaluate(ui->lineEditAfficheur->text()).toString());
}

void Widget::onQPushButtonClicked()
{
QPushButton *touche;
touche=qobject_cast<QPushButton*>(sender());
QString val;
val=touche->text();
ui->lineEditAfficheur->insert(val);

}
