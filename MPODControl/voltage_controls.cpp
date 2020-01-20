#include "voltage_controls.h"
#include "ui_voltage_controls.h"
#include <QGraphicsScene>
#include <QDebug>
#include <QString>
#include <QGraphicsItem>
#include "confirmation_voltage.h"
#include <QValidator>
#include <QDoubleValidator>
Voltage_controls::Voltage_controls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Voltage_controls)
{
    ui->setupUi(this);
    IP1 = "1.0.9.3.4.5";
    ui->M1_IP->setText(IP1);
    scene = new QGraphicsScene(this);

    ui->M1_Power_view->setScene(scene);
    ui->M1_Power_view->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1->setScene(scene);
    ui->M1_On_Off_Ch1->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_2->setScene(scene);
    ui->M1_On_Off_Ch1_2->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_3->setScene(scene);
    ui->M1_On_Off_Ch1_3->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_4->setScene(scene);
    ui->M1_On_Off_Ch1_4->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_5->setScene(scene);
    ui->M1_On_Off_Ch1_5->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_6->setScene(scene);
    ui->M1_On_Off_Ch1_6->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_7->setScene(scene);
    ui->M1_On_Off_Ch1_7->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));

    ui->M1_On_Off_Ch1_8->setScene(scene);
    ui->M1_On_Off_Ch1_8->setBackgroundBrush(QBrush(Qt::yellow,Qt::SolidPattern));


    ui->M1_SetV_ch1->setValidator(validator);
    ui->M1_SetV_ch1_2->setValidator(validator);
    ui->M1_SetV_ch1_3->setValidator(validator);
    ui->M1_SetV_ch1_4->setValidator(validator);
    ui->M1_SetV_ch1_5->setValidator(validator);
    ui->M1_SetV_ch1_6->setValidator(validator);
    ui->M1_SetV_ch1_7->setValidator(validator);
    ui->M1_SetV_ch1_8->setValidator(validator);

}
Voltage_controls::~Voltage_controls()
{
    delete ui;
}

void Voltage_controls::closeEvent(QCloseEvent *event)
{
    event->ignore();
    Mbox = new QMessageBox;
    if(QMessageBox::Yes == QMessageBox::question(this,"Close Confirmation","Are you sure you want to exit voltage controls?",QMessageBox::Yes | QMessageBox::No))
    {
        event->accept();
    }
}

void Voltage_controls::on_M1_Switch_clicked(bool checked)
{

    if(checked)
    {
        ui->M1_Switch->setText("Switch On Power");
        ui->M1_Power_view->setScene(scene);
        ui->M1_Power_view->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    else
    {
        ui->M1_Switch->setText("Switch Off Power");
        ui->M1_Power_view->setScene(scene);
        ui->M1_Power_view->setBackgroundBrush(QBrush(Qt::green,Qt::SolidPattern));
        checked=true;
    }
}


void Voltage_controls::on_M1_SetV_ch1_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1->text().toFloat());
    cf->exec();
    if(cf->result())
    {
        ui->M1_LCD_M_ch1->display(ui->M1_SetV_ch1->text().toFloat());
        ui->M1_On_Off_Ch1->setScene(scene);
        ui->M1_On_Off_Ch1->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}


void Voltage_controls::on_M1_SetV_ch1_2_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_2->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_2->display(ui->M1_SetV_ch1_2->text().toFloat());
        ui->M1_On_Off_Ch1_2->setScene(scene);
        ui->M1_On_Off_Ch1_2->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);

}

void Voltage_controls::on_M1_SetV_ch1_3_returnPressed()
{
    ui->Module1->setDisabled(true);
\
    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_3->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_3->display(ui->M1_SetV_ch1_3->text().toFloat());
        ui->M1_On_Off_Ch1_3->setScene(scene);
        ui->M1_On_Off_Ch1_3->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}

void Voltage_controls::on_M1_SetV_ch1_4_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_4->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_4->display(ui->M1_SetV_ch1_4->text().toFloat());
        ui->M1_On_Off_Ch1_4->setScene(scene);
        ui->M1_On_Off_Ch1_4->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);


}

void Voltage_controls::on_M1_SetV_ch1_5_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_5->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_5->display(ui->M1_SetV_ch1_5->text().toFloat());
        ui->M1_On_Off_Ch1_5->setScene(scene);
        ui->M1_On_Off_Ch1_5->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}

void Voltage_controls::on_M1_SetV_ch1_6_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_6->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_6->display(ui->M1_SetV_ch1_6->text().toFloat());
        ui->M1_On_Off_Ch1_6->setScene(scene);
        ui->M1_On_Off_Ch1_6->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}

void Voltage_controls::on_M1_SetV_ch1_7_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_7->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_7->display(ui->M1_SetV_ch1_7->text().toFloat());
        ui->M1_On_Off_Ch1_7->setScene(scene);
        ui->M1_On_Off_Ch1_7->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}

void Voltage_controls::on_M1_SetV_ch1_8_returnPressed()
{
    ui->Module1->setDisabled(true);

    cf = new confirmation_voltage;
    cf->displaylcd(ui->M1_SetV_ch1_8->text().toFloat());
    cf->exec();
    if(cf->result())
    {

        ui->M1_LCD_M_ch1_8->display(ui->M1_SetV_ch1_8->text().toFloat());
        ui->M1_On_Off_Ch1_8->setScene(scene);
        ui->M1_On_Off_Ch1_8->setBackgroundBrush(QBrush(Qt::red,Qt::SolidPattern));
    }
    ui->Module1->setDisabled(false);
}

void Voltage_controls::on_pushButton_clicked()
{

}
