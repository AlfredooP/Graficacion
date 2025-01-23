#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QImage escanearImagen(const QImage &in);
    //Se recibe la direccion de la imagen y se puede modificar

private slots:
    void on_BotonEscanear_clicked();

    void on_dial_valueChanged(int value);

private:
    Ui::Widget *ui;
    unsigned char rojo;
};
#endif // WIDGET_H
