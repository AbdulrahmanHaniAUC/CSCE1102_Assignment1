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

void MainWindow::on_customer_pushButton_clicked()
{
    hide();
    cregistration = new customerregistrationwindow(this);
    cregistration->show();
}


void MainWindow::on_seller_pushButton_clicked()
{
    hide();
    registration = new RegistrationWindow(this);
    registration->show();
}

