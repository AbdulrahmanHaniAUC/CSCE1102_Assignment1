#include "sellerregistrationwindow.h"
#include "ui_registrationwindow.h"

RegistrationWindow::RegistrationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationWindow)
{
    name=" ";
    email=" ";
    ui->setupUi(this);
}

RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}

RegistrationWindow::RegistrationWindow(QString n, QString e)
{
    name = n;
    email = e;
}

void RegistrationWindow::set_name(QString n) {name=n;}
void RegistrationWindow::set_email(QString e) {email=e;}

QString RegistrationWindow::get_name() const {return name;}
QString RegistrationWindow::get_email() const {return email;}

void RegistrationWindow::on_continue_pushButton_clicked()
{
    name = ui->name_lineEdit->text();
    email = ui->email_lineEdit->text();

    hide();
    seller = new SellerWindow(this);
    seller->show();
}


void RegistrationWindow::on_back_pushButton_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

