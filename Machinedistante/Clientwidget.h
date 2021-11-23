#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:

    void on_pushButtonCOnnexion_clicked();

    void on_pushButtonNomDeLordinateur_clicked();

    void on_pushButtonNomUtilisateur_clicked();

    void on_pushButtonArchitectureProcesseur_clicked();

    void on_pushButtonOSOrdinateur_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket* socketDeDialogueAvecServeur;
    QString typeDeDemande;
   void  onQTcpSocket_connected();
   void  onQTcpSocket_disconnected();
   void  onQTcpSocket_error (QAbstractSocket::SocketError socketError);
   void  onQTcpSocket_hostFound();
   void   onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState);
   void  onQTcpSocket_aboutToClose();
   void  onQTcpSocket_bytesWritten(qint64 bytes);
   void  onQTcpSocket_readChannelFinished();
   void  onQTcpSocket_readyRead();





};
#endif // WIDGET_H
