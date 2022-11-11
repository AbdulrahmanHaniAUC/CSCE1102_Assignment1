#include "sellerwindow.h"
#include "ui_sellerwindow.h"

SellerWindow::SellerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SellerWindow)
{
    ui->setupUi(this);
    Product p1("Brush","Cleaning", 50, 10 );
    Product p2("Headphones", "Electronics", 100, 20);
    Product p3("Laptop", "Electronics", 1000, 10);
    Product p4("Tea","Drinks", 10, 1000);
    Product p5("Phone","Electronics", 20000, 36);
    Product p6("Detol","Cleaning", 70, 800);

    products.push_back(p1);
    products.push_back(p2);
    products.push_back(p3);
    products.push_back(p4);
    products.push_back(p5);
    products.push_back(p6);
}

SellerWindow::~SellerWindow()
{
    delete ui;
}

void SellerWindow::on_back_pushButton_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void SellerWindow::on_addProduct_pushButton_clicked()
{
    Product p;
    p.set_name(ui->productName_lineEdit->text());
    p.set_category(ui->category_lineEdit->text());

    QString temp = ui->price_lineEdit->text();
    p.set_price(temp.toInt());

    temp = ui->quantity_lineEdit->text();
    p.set_quantity(temp.toInt());

    products.push_back(p);

    ui->category_lineEdit->clear();
    ui->price_lineEdit->clear();
    ui->productName_lineEdit->clear();
    ui->quantity_lineEdit->clear();
}

