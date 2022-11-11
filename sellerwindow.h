#ifndef SELLERWINDOW_H
#define SELLERWINDOW_H

#include <QDialog>

#include "product.h"

namespace Ui {
class SellerWindow;
}

class SellerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SellerWindow(QWidget *parent = nullptr);
    ~SellerWindow();
    vector<Product> products;
    void add_Products(int quantity, int price, QString name, QString category);

private slots:
    void on_back_pushButton_clicked();

    void on_addProduct_pushButton_clicked();

private:
    Ui::SellerWindow *ui;
};

#endif // SELLERWINDOW_H
