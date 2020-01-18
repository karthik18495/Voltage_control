#include "confirmation_voltage.h"
#include "ui_confirmation_voltage.h"
#include <QFloat16>
confirmation_voltage::confirmation_voltage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmation_voltage)
{
    ui->setupUi(this);
}

confirmation_voltage::~confirmation_voltage()
{
    delete ui;
}
void confirmation_voltage::displaylcd(qfloat16 a)
{
    ui->confirmation_volt->display(a);
}
