#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    int colonne=0, ligne=0;
        grille=new QGridLayout();
        afficheur=new QLineEdit();
        afficheur->setReadOnly(true);
        afficheur->setAlignment(Qt::AlignRight);
        grille->addWidget(afficheur,ligne,colonne,1,4);

        ligne=3;

        //creation de toutes les touches et placement des touches 1 à 9
        for(int i=0; i<16;i++){
            touches[i] = new QPushButton();
            connect(touches[i], &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
            touches[i]->setText(tableDesSymboles[i]);
            if((i>0)&&(i<10)){
                grille->addWidget(touches[i],ligne,colonne);
                colonne++;
                if(colonne==3)
                {
                    colonne=0;
                    ligne--;
                }
            }
        }
        //placement de la touche 0
        grille->addWidget(touches[0],4,1);
        //placement de la touche c
        grille->addWidget(touches[10],4,0);
        //placement de la touche =
        grille->addWidget(touches[11],4,2);

        //placement des touches /,*,-,+
      ligne=4;
      for(int i=12; i<16; i++)
      {
          grille->addWidget(touches[i],ligne,3);
          ligne--;
      }
      //ajout  de layout a l'interface principale
      this->setLayout(grille);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQPushButtonClicked()
{
    QPushButton *touche;
    touche=qobject_cast<QPushButton*>(sender());
    QString val =touche->text();
    if(val == "c")
    {
        afficheur->clear();
    }
    else
    {
        if (val =="=")
        {
        QScriptEngine expression;
        afficheur->setText(expression.evaluate(afficheur->text()).toString());
    }
        else{
            afficheur->insert((val));
        }
}
}
