#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{

}

void MainWindow::on_checkBox_clicked()
{
     if(ui->checkBox->isChecked()){
        ui->textEdit->append("windows cocher");
     }else
          ui->textEdit->append("windows decocher");
}


void MainWindow::on_checkBox_2_clicked()
{
    if(ui->checkBox->isChecked()){
       ui->textEdit->append("OS x lion cocher");
    }else
         ui->textEdit->append("os x lion  decocher");
}

void MainWindow::on_checkBox_3_clicked()
{
    if(ui->checkBox->isChecked()){
       ui->textEdit->append("lunix cocher");
    }else
         ui->textEdit->append("lunix  decocher");
}

void MainWindow::on_radioButton_clicked()
{
    if(ui->checkBox->isChecked()){
            ui->textEdit->append("windows cocher");
         }else
              ui->textEdit->append("windows decocher");
}
