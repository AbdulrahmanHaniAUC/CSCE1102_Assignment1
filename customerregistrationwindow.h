#ifndef CUSTOMERREGISTRATIONWINDOW_H
#define CUSTOMERREGISTRATIONWINDOW_H

#include <QDialog>

#include "customerwindow.h"

namespace Ui {
class customerregistrationwindow;
}

class customerregistrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit customerregistrationwindow(QWidget *parent = nullptr);
    ~customerregistrationwindow();

    customerregistrationwindow(QString n, QString a, QString pN, QString e);
    void set_name(QString n);
    void set_address(QString a);
    void set_phoneNum(QString p);
    void set_email(QString e);
    QString get_name() const;
    QString get_address() const;
    QString get_phoneNum() const;
    QString get_email() const;

private slots:
    void on_back_pushButton_clicked();

    void on_continue_pushButton_clicked();

private:
    Ui::customerregistrationwindow *ui;

    CustomerWindow *customer;

    QString name;
    QString address;
    QString phoneNum;
    QString email;
};

#endif // CUSTOMERREGISTRATIONWINDOW_H
