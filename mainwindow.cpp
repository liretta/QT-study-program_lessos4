#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic(":/new/prefix1/pic/01.jpg");

    //this code capture the image - NOT worked?
    //int h = ui->image2->height();
   // int w = ui->image2->width();
   // ui->image2->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    ui->image2->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->Login->text();
    QString password = ui->Pass->text();

    if(login == "Login" && password == "Password")
       {
         ui->statusBar->showMessage("Authorization succes!");
        QMessageBox::information(this, "Authorization success", "Success!");

       }
    else
    {
         ui->statusBar->showMessage("Wrong login or password!");
        QMessageBox::warning(this, "Error!", "Wrong login or password");

    }
}
