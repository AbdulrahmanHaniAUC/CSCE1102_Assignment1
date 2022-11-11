#include "customerregistrationwindow.h"
#include "ui_customerregistrationwindow.h"

customerregistrationwindow::customerregistrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerregistrationwindow)
{
    ui->setupUi(this);
    name=" ";
    address=" ";
    phoneNum=" ";
    email=" ";
}

customerregistrationwindow::~customerregistrationwindow()
{
    delete ui;
}

customerregistrationwindow::customerregistrationwindow(QString n, QString a, QString pN, QString e){
    name = n;
    address = a;
    phoneNum = pN;
    email = e;
}

void customerregistrationwindow::set_name(QString n){name=n;}
void customerregistrationwindow::set_address(QString a){address=a;}
void customerregistrationwindow::set_phoneNum(QString p){phoneNum=p;}

QString customerregistrationwindow::get_name() const {return name;}
QString customerregistrationwindow::get_address() const {return address;}
QString customerregistrationwindow::get_phoneNum() const {return phoneNum;}

void customerregistrationwindow::on_back_pushButton_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void customerregistrationwindow::on_continue_pushButton_clicked()
{
    name = ui->name_lineEdit->text();
    email = ui->email_lineEdit->text();
    address = ui->address_lineEdit->text();
    phoneNum = ui->number_lineEdit->text();

    hide();
    customer = new CustomerWindow(this);
    customer->show();
}

