#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton7_clicked()
{
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"7");
}

void Widget::on_pushButton8_clicked()
{
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"8");
}

void Widget::on_pushButton9_clicked()
{
   ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"9");
}

void Widget::on_pushButton4_clicked()
{
  ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"4");
}

void Widget::on_pushButton5_clicked()
{
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"5");
}

void Widget::on_pushButton6_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"6");
}

void Widget::on_pushButton1_clicked()
{
      ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"1");
}

void Widget::on_pushButton2_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"2");
}

void Widget::on_pushButton3_clicked()
{
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"3");
}

void Widget::on_pushButtonPlus_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"+");
}

void Widget::on_pushButtonSoustraire_clicked()
{
      ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"-");
}

void Widget::on_pushButtonMultiplication_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"*");
}

void Widget::on_pushButton0_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"0");
}

void Widget::on_pushButtonDIviser_clicked()
{
     ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+"/");
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
