#include "customerwindow.h"
#include "ui_customerwindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerWindow)
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

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_search_pushButton_clicked()
{
    ui->search_textEdit->clear();

    QString name = ui->productName_lineEdit->text();
    QString category = ui->category_lineEdit->text();


    for(vector<Product>::iterator it= products.begin(); it != products.end(); it++){
        if((*it).get_name()==name)
            ui->search_textEdit->append((*it).get_name());
        if((*it).get_category()==category)
           ui->search_textEdit->append((*it).get_name());
    }

    ui->productName_lineEdit->clear();
    ui->category_lineEdit->clear();
}


void CustomerWindow::on_addtocart_pushButton_clicked()
{
    QString name = ui->productName_lineEdit_2->text();
    int quantity = ui->quantity_lineEdit->text().toInt();
    int price = 0;

    for(vector<Product>::iterator it=products.begin();it!=products.end();it++){
        if((*it).get_name() == name && (quantity > (*it).get_quantity() || quantity <= 0))
            ui->cart_textEdit->setText("This Quantity is not Avaliable.");
        else if ((*it).get_name()==name && quantity <= (*it).get_quantity()) {
            ui->cart_textEdit->append(name);
            price = (*it).get_price();
        }
    }

    Product p(name, " ", price, quantity);
    cart.push_back(p);

    ui->productName_lineEdit_2->clear();
    ui->quantity_lineEdit->clear();
}


void CustomerWindow::on_back_pushButton_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void CustomerWindow::on_confirmPurchase_pushButton_clicked()
{
    int totalp = 0;

    for(vector<Product>::iterator it = cart.begin(); it != cart.end(); it++){
        totalp = totalp + (((*it).get_price()) * ((*it).get_quantity()));
    }

    ui->reciept_textEdit->setText("Total Price: " + QString::number(totalp));
}

