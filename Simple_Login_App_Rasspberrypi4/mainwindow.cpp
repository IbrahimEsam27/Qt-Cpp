#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/R.jpeg");
    int w = ui->label_Pic->width();
    int h = ui->label_Pic->height();
    ui->label_Pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    // ui->statusbar->addPermanentWidget(ui->label_3);
    // ui->statusbar->addPermanentWidget(ui->progressBar);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString username = ui->lineEdit_Username->text(); // get the Username from The line edit
    QString password = ui->lineEdit_Password->text(); // get the Password from The line edit

    if(username == "test" && password == "test")
    {

        /*using Message box to show messages*/
        // QMessageBox::information(this,"Login","Your Username and Pasword are Correct");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();

        ui->statusbar->showMessage("The Username and Passowrd are correct");
    }
    else
    {
        // QMessageBox::warning(this,"Login","Your Username and Pasword are Wrong");
        ui->statusbar->showMessage("The Username and Passowrd are Wrong",5000); //the message and the timeout

    }
}
