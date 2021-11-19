#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QProcess>
#include <QHostInfo>
#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_LancerServeur_clicked();

    void onQTcpServer_newConnection();
    void onQTcpServer_readyRead();
    void onQTcpServer_disconnected();
    void onQProcess_readyReadStandardOutput();
private:
    Ui::Widget *ui;

    QTcpServer* socketEcouteServeur;
    QList <QTcpSocket*> socketDialogueClient;
    // QProcess* process;
    QList <QProcess*> process;
    QList<QTcpSocket*> listesSocketClient;
     QList<QProcess*> listeProcess;




};
#endif // WIDGET_H
