#ifndef VOLTAGE_CONTROLS_H
#define VOLTAGE_CONTROLS_H

#include <QWidget>
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QValidator>
#include <QDoubleValidator>
#include <QString>
#include "confirmation_voltage.h"
#include <QMessageBox>
#include <QCloseEvent>
namespace Ui {
class Voltage_controls;
}


class Voltage_controls : public QWidget
{
    Q_OBJECT

public:

    QString IP1;


    explicit Voltage_controls(QWidget *parent = nullptr);
    ~Voltage_controls();    


private slots:
    void on_M1_Switch_clicked(bool checked);

    void on_M1_SetV_ch1_2_returnPressed();

    void on_M1_SetV_ch1_returnPressed();



    void on_M1_SetV_ch1_4_returnPressed();

    void on_M1_SetV_ch1_3_returnPressed();

    void on_M1_SetV_ch1_5_returnPressed();

    void on_M1_SetV_ch1_6_returnPressed();

    void on_M1_SetV_ch1_7_returnPressed();

    void on_M1_SetV_ch1_8_returnPressed();

    void on_pushButton_clicked();

    void closeEvent(QCloseEvent *event);

private:
    Ui::Voltage_controls *ui;
    QGraphicsScene *scene;
    QValidator *validator = new QDoubleValidator(0,100,2);
    confirmation_voltage *cf;
    QMessageBox *Mbox;


};

#endif // VOLTAGE_CONTROLS_H
