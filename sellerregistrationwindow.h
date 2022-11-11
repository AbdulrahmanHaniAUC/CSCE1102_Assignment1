#ifndef SELLERREGISTRATIONWINDOW_H
#define SELLERREGISTRATIONWINDOW_H

#include <QDialog>

#include "sellerwindow.h"

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();
    RegistrationWindow();
    RegistrationWindow(QString n, QString e);
    void set_name(QString n);
    void set_email(QString e);
    QString get_name() const;
    QString get_email() const;

private slots:
    void on_continue_pushButton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::RegistrationWindow *ui;

    SellerWindow *seller;

    QString name;
    QString email;
};

#endif // SELLERREGISTRATIONWINDOW_H
