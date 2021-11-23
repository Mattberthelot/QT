#include "Clientwidget.h"
#include "ui_Clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::connected,this,&ClientWidget::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::disconnected,this,&ClientWidget::onQTcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&ClientWidget::onQTcpSocket_error);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::hostFound,this,&ClientWidget::onQTcpSocket_hostFound);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::stateChanged,this,&ClientWidget::onQTcpSocket_stateChanged);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::aboutToClose,this,&ClientWidget::onQTcpSocket_aboutToClose);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readChannelFinished,this,&ClientWidget::onQTcpSocket_readChannelFinished);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readyRead,this,&ClientWidget::onQTcpSocket_readyRead);
    ui->groupBoxInformationCLient->setEnabled(false);
    ui->lineEditArchitectureProcesseur->clear();
    ui->lineEditNomDeLordinateur->clear();
    ui->lineEditOsOrdinateur->clear();
    ui->lineEditNomUtilisateur->clear();
}

ClientWidget::~ClientWidget()
{
    delete ui;
}



void ClientWidget::on_pushButtonCOnnexion_clicked()
{
    if(ui->pushButtonCOnnexion->text()=="Connexion"){

        socketDeDialogueAvecServeur->connectToHost(ui->lineEditAdresseServeur->text(), ui->lineEditNumeroPort->text().toInt());
    }
    else {
        socketDeDialogueAvecServeur->disconnectFromHost();
    }
}

void ClientWidget::on_pushButtonNomDeLordinateur_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonArchitectureProcesseur_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOSOrdinateur_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    ui->textEditEtatConnexion->append("Connected");
    ui->pushButtonCOnnexion->setText("Deconnexion");
    ui->lineEditAdresseServeur->setEnabled(false);
    ui->lineEditNumeroPort->setEnabled(false);
    ui->groupBoxInformationCLient->setEnabled(true);

    ui->lineEditArchitectureProcesseur->clear();
    ui->lineEditNomDeLordinateur->clear();
    ui->lineEditOsOrdinateur->clear();
    ui->lineEditNomUtilisateur->clear();

}

void ClientWidget::onQTcpSocket_disconnected()
{

  ui->textEditEtatConnexion->append("Deconnexion");
   ui->pushButtonCOnnexion->setText("Connexion");
  ui->lineEditAdresseServeur->setEnabled(true);
  ui->lineEditNumeroPort->setEnabled(true);
  ui->groupBoxInformationCLient->setEnabled(false);

  ui->lineEditArchitectureProcesseur->clear();
  ui->lineEditNomDeLordinateur->clear();
  ui->lineEditOsOrdinateur->clear();
  ui->lineEditNomUtilisateur->clear();

}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEditEtatConnexion->append("hostfound");
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString etat;
    switch (socketState) {
    case QAbstractSocket::UnconnectedState: etat="The socket is not connected.";break;
    case QAbstractSocket::HostLookupState: etat="The socket is performing a host lookup";break;
    case QAbstractSocket::ConnectingState: etat="The socket has started establishing a connection";break;
    case QAbstractSocket::BoundState: etat="The socket is bound to an address and port";break;
    case QAbstractSocket::ListeningState: etat="For internal use only";break;
    case QAbstractSocket::ClosingState: etat="The socket is about to  close";break;

    }
    ui->textEditEtatConnexion->append(etat);
}

void ClientWidget::onQTcpSocket_aboutToClose()
{

}

void ClientWidget::onQTcpSocket_readChannelFinished()
{

}

void ClientWidget::onQTcpSocket_readyRead()
{
    QByteArray buffer;
    if(socketDeDialogueAvecServeur->bytesAvailable()>0)
    {
        buffer= socketDeDialogueAvecServeur->readAll();
    }
    if(typeDeDemande=="u"){
        ui->lineEditNomUtilisateur->setText(buffer.data());
    }
    if(typeDeDemande=="c")
    {
        ui->lineEditNomDeLordinateur->setText(buffer.data());
    }
    if(typeDeDemande=="o")
    {
        ui->lineEditOsOrdinateur->setText(buffer.data());
    }
    if(typeDeDemande=="a")
    {
        ui->lineEditArchitectureProcesseur->setText(buffer.data());
    }
}

