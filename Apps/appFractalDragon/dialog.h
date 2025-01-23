#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <QtGui>
#include <QtCore>
#include <QColor>
#include <QPainter>
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

private:
    Ui::Dialog *ui;
    QPainter *canvas;
    Graficos *graficos;
    int ejeX[4098], ejeY[4098], paso, signo, marc;
    void generarDragon(int color);
    void paintEvent(QPaintEvent *e)override;

};
#endif // DIALOG_H
