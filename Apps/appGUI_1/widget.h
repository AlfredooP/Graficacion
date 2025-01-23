#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
//    void on_boton1_clicked();

//    void on_dial_valueChanged(int value);

//    void on_horizontalSlider_valueChanged(int value);

//    void on_spinBox_valueChanged(int arg1);

//    void on_pushButton_3_clicked();

//    void on_pushButton_clicked();

//    void on_BotonPotencia_clicked();

    void on_botonFactorial_clicked();

    void on_botonSeno_clicked();

    void on_botonCoseno_clicked();

    void on_botonTangente_clicked();

    void on_botonPrimo_clicked();

    void on_botonPotencia_clicked();

    void on_botonRaiz_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
