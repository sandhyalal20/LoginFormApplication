#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QTimer>
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


void MainWindow::on_pushButton_clicked()
{
  QString username = ui->lineEdit_username->text();
  QString password = ui->lineEdit_password->text();
if(username == "User"&&password=="123")
{
   QMessageBox::information(this,"Login","Username and Password are Correct");
   QTimer::singleShot(5000, this, [this] () { ui->label_3->setText(""); });
   loop = new secDialog(this);
   loop->show();
}
else
{
    QMessageBox::warning(this,"Login","Username and Password are incorrect");
    QTimer::singleShot(5000, this, [this] () { ui->label_3->setText(""); });
}
}
