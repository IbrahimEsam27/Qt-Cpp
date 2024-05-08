#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_buuton_photo_clicked();

    void on_button_age_clicked();

    void on_butto_passion_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
