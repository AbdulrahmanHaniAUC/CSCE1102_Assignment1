#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>
#include <iostream>
#include <vector>

#include "product.h"
#include "sellerwindow.h"

namespace Ui {
class CustomerWindow;
}

class CustomerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerWindow(QWidget *parent = nullptr);
    ~CustomerWindow();
    vector<Product> products;

private slots:
    void on_search_pushButton_clicked();

    void on_addtocart_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_confirmPurchase_pushButton_clicked();

private:
    Ui::CustomerWindow *ui;
    vector<Product> cart;
};

#endif // CUSTOMERWINDOW_H
