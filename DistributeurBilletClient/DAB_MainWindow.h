#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class DAB_MainWindow : public QWidget
{
    Q_OBJECT

public:
    DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:
    QTcpSocket* socketClientBanque;
    void on_pushButton_Connexion_clicked();

    void on_pushButton_Envoie_clicked();

    void on_pushButton_NumeroDeCompte_clicked();
     void onQTcpSocket_error(QAbstractSocket::SocketError SocketError);

private:    Ui::Widget *ui;
};
#endif // WIDGET_H
