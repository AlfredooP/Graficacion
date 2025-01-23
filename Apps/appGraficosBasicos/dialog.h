#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QColorDialog>

#include <QMouseEvent>

#include "graficos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pitagoras_clicked();

    void on_polares_clicked();

    void on_pushButton_3_clicked();

    void on_espiral1_clicked();

    void on_espiral2_clicked();

    void on_spinFactor_valueChanged(double arg1);

    void on_spinTam_valueChanged(int arg1);

    void on_spinRadio_valueChanged(double arg1);

    void on_spinTh_valueChanged(double arg1);

    void on_animacion2_clicked();

private:
    Ui::Dialog *ui;
    QTimer *timer1;
    QTimer *timer2;
    void paintEvent(QPaintEvent *e)override;
    QColor color;
    QPainter *canvas; //Area de dibujo
    int x1, y1, x2, y2; //Extremos de la linea
    int xc, yc, radio; //Var globales circulo
    int i, tam1, tam2;
    double factor1, factor2, th;
    float r;
    bool linea, circuloPitagoras, circuloPolares, animacion1, animacion2, espiral1, espiral2;

protected:
    void mousePressEvent(QMouseEvent *event)override;
    void mouseReleaseEvent(QMouseEvent *event)override;
    void mouseMoveEvent(QMouseEvent *even)override;
};
#endif // DIALOG_H
