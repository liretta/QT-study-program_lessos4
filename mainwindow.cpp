#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        QMessageBox::information(this, "Authorization success", "Success!");
    else {
        QMessageBox::warning(this, "Error!", "Wrong login or password");
    }
}
