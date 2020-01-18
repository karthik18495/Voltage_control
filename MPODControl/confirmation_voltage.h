#ifndef CONFIRMATION_VOLTAGE_H
#define CONFIRMATION_VOLTAGE_H

#include <QDialog>
#include <QFloat16>
namespace Ui {
class confirmation_voltage;
}

class confirmation_voltage : public QDialog
{
    Q_OBJECT

public:
    explicit confirmation_voltage(QWidget *parent = nullptr);
    ~confirmation_voltage();

public slots:
    void displaylcd(qfloat16 a);
private:
    Ui::confirmation_voltage *ui;
};

#endif // CONFIRMATION_VOLTAGE_H
