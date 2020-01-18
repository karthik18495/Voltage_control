#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voltage_controls.h"
#include <QCloseEvent>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->ignore();
    if(QMessageBox::Yes == QMessageBox::question(this,"Close Confirmation","Exit the program?",QMessageBox::Yes | QMessageBox::No))
    {
        event->accept();
    }
}

void MainWindow::on_actionVoltage_Control_triggered()
{

    MPODC = new Voltage_controls;
    ui->statusbar->setEnabled(false);
    ui->menubar->setEnabled(false);
    ui->toolBar->setEnabled(false);
    MPODC->show();

}
