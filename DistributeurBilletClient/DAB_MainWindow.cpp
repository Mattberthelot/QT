#include "DAB_MainWindow.h"
#include "ui_DAB_MainWindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}


void DAB_MainWindow::on_pushButton_Connexion_clicked()
{
    if(ui->pushButton_Connexion->text()=="Connexion"){

        socketClientBanque->connectToHost(ui->lineEdit_AdresseServeur->text(), ui->lineEdit_Port->text().toInt());
    }
    else {
        socketClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::on_pushButton_Envoie_clicked()
{

}

void DAB_MainWindow::on_pushButton_NumeroDeCompte_clicked()
{

}
