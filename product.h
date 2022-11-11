#ifndef _Product_
#define _Product_
#include<iostream>
#include<QString>
using namespace std;

class Product{
private:
    QString name;
    int price;
    QString category;
    int quantity;
public:
    Product();
    Product(QString n, QString c, int p, int q);
    void set_name(QString n);
    void set_price(int p);
    void set_category(QString c);
    void set_quantity(int q);
    int get_quantity() const;
    QString get_category() const;
    int get_price() const;
    QString get_name() const;
};

#endif // PRODUCT_H
