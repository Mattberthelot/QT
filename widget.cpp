#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer(this);
    socketEcouteServeur->setMaxPendingConnections(10);

}

Widget::~Widget()
{
    delete ui;
    delete socketEcouteServeur;
}


void Widget::on_pushButton_LancerServeur_clicked()
{
    if(!socketEcouteServeur->listen(QHostAddress::Any,(static_cast<quint16>(ui->spinBox_NumeroPort->value())))){
        QString message="Impossible de démarrer le serveur"+ socketEcouteServeur->errorString();
        ui->textEdit_Clients->append(message);
        close();
    }
    else{
        QList<QHostAddress> listeAdresse = QNetworkInterface::allAddresses();
        for (int i = 0; i <listeAdresse.size();i++){
            if(listeAdresse.at(i).toIPv4Address())
                ui->textEdit_Clients->append((listeAdresse.at(i).toString()));
        }
        ui->textEdit_Clients->append("N° du port :"+ QString::number(socketEcouteServeur->serverPort()));
        connect(socketEcouteServeur,&QTcpServer::newConnection,this,&Widget::onQTcpServer_newConnection);

        ui->pushButton_LancerServeur->setEnabled(false);
        ui->spinBox_NumeroPort->setEnabled(false);
    }
}


void Widget::onQTcpServer_newConnection()
{

    QTcpSocket *client;
    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&Widget::onQTcpServer_readyRead);
    QHostAddress addresseClient =client->peerAddress();
    ui->textEdit_Clients->append(addresseClient.toString());
    listesSocketClient.append(client);
    QProcess *p = new QProcess(this);
    connect(p,&QProcess::readyReadStandardOutput,this,&Widget::onQProcess_readyReadStandardOutput);
    listeProcess.append(p);




}

void Widget::onQTcpServer_readyRead()
{

    QChar commande;
    QString nom;
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=listesSocketClient.indexOf(client);
    if(client->bytesAvailable())
    {
        QByteArray tmp=client->readAll();
        commande=tmp.at(0);

        QString message = "Commande reçu de "+client->peerAddress().toString()+" : ";
        message += commande;
        ui->textEdit_Clients->append(message);
        QString reponse;

        switch(commande.toLatin1()){
        case 'u': reponse = getenv("LOGNAME");
            client->write(reponse.toUtf8());
            break;


        case'a' :
            listeProcess.at(indexProcess)->start("uname");


        case'c':
            reponse =QHostInfo::localHostName();
            client->write(reponse.toLatin1());
            break;

        case'o':
            listeProcess.at(indexProcess)->start("uname",QStringList("-p"));
        }
        qDebug()<<"reponse : "<<reponse;
    }
}

void Widget::onQTcpServer_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    ui->textEdit_Clients->append("Deconnexion de "+client->peerAddress().toString());
    int index=listesSocketClient.indexOf(client);
    listesSocketClient.removeAt(index);
    listeProcess.removeAt(index);
}

void Widget::onQProcess_readyReadStandardOutput()
{
    QProcess *p=qobject_cast<QProcess*>(sender());
    int indexClient= listeProcess.indexOf(p);
    QString reponse = p->readAllStandardOutput();
    if(!reponse.isEmpty()){
        QString message= "Réponse envoyée à"+listesSocketClient.at(indexClient)->peerAddress().toString()+":"+reponse;
        ui->textEdit_Clients->append(message);
        listesSocketClient.at(indexClient)->write(reponse.toUtf8());

    }
}
