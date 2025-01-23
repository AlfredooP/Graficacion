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

private:
    Ui::Dialog *ui;
    void paintEvent(QPaintEvent *e)override;
    QColor color;
    QPainter *canvas;
    Graficos *graficos;
    int ejeX[4098], ejeY[4098], paso, signo, marc;
    void generarDragon(int color);
};
#endif // DIALOG_H
