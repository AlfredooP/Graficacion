#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QtWidgets>
#include <QColorDialog>

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

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Dialog *ui;
    QColor colorSeleccionado;
    QPainter *canvas;
    Graficos *graficos;
    int ejeX[4098], ejeY[4098], paso, signo, marc;
    void paintEvent(QPaintEvent *e)override;
    void generarDragon(int color);
    void generarArabesco(int color);
    void extranioConfinador();
    int maxX, maxY;
    double escalaX, escalaY, despX, despY;
};
#endif // DIALOG_H
