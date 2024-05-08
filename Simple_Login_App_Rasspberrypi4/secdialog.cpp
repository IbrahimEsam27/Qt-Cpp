#include "secdialog.h"
#include "ui_secdialog.h"
#include <QString>
#include <QMessageBox>
#include <QPixmap>

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/417140731_1404562003480621_2922397203180564021_n.jpg");
    int w = ui->label_photo->width() ;
    int h = ui->label_photo->height() ;
    ui->label_photo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_photo->hide();
    ui->label_age->hide();
    ui->label_passion->hide();
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_buuton_photo_clicked()
{
    ui->label_photo->show();
}

void SecDialog::on_button_age_clicked()
{
    ui->label_age->show();
}

void SecDialog::on_butto_passion_clicked()
{
    ui->label_passion->show();
}
