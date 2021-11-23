#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
void  onQPushButtonClicked();
    Ui::Widget *ui;
    QLineEdit *afficheur;
    QPushButton *touches[16];
    QGridLayout *grille;
    const QString tableDesSymboles[16]={"0","1","2","3","4","5","6","7","8","9","c","=","/"
                                        ,"*","-","+"};
};
#endif // WIDGET_H
