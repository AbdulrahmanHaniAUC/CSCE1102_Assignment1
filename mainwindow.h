#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "sellerregistrationwindow.h"
#include "customerregistrationwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_customer_pushButton_clicked();

    void on_seller_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    RegistrationWindow *registration;
    customerregistrationwindow *cregistration;
};



#endif // MAINWINDOW_H
