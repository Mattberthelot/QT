#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase bd;
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.7");
    bd.setDatabaseName("france2018");
    bd.setUserName("snir");
    bd.setPassword("snir");
    if(!bd.open())
    {
        qDebug()<<"pb acces bd"<<bd.lastError();
    }
    else
    {
        qDebug()<<"acces bd ok";
    }


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_Avoir_Nom_departement_clicked()
{
    QSqlQuery requetePrepare;
    QString numero = ui->lineEdit_numero_departement->text();
    requetePrepare.prepare ("select name from departments where code=:numero;");
    requetePrepare.bindValue(":numero ",numero);
    if (!requetePrepare.exec()){
        qDebug()<<"pb requete "<<requetePrepare.lastError();
}
    QString nomDepartement;
    while(requetePrepare.next()){
    nomDepartement =requetePrepare.value("name").toString();
    }
    ui->label_NomDepartement->setText(nomDepartement);
}
