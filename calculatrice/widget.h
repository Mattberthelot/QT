#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButtonPlus_clicked();

    void on_pushButtonSoustraire_clicked();

    void on_pushButtonMultiplication_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonDIviser_clicked();

    void on_pushButtonC_clicked();

    void on_pushButtonEgal_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
