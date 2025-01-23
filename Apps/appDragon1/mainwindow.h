#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include "graficos.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    void paintEvent(QPaintEvent *e) override;

    void dragon();// en esta app. seria el main de las copias
    void generarDragon(QPainter *Canvas);
    int EjeX[4098], EjeY[4098], Paso;
    int signo;


    Graficos *graficos;



};

#endif // MAINWINDOW_H
