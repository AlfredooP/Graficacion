#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTimer>
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QPainter>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *evento);
private slots:
    void dragon(int limite, QPainter *);
    void henon(QPainter *);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    void paintEvent(QPaintEvent *e);
    void generarDragon(QPainter *canvas);
    void extranioConfinador(QPainter *canvas);
    int ejeX[4098], ejeY[4098], signo, paso;
    int li, ls; //Para indicar los limites de la animacion
    int maxX, maxY;
    double escalaX, escalaY, despX, despY;
    bool band;
};
#endif // MAINWINDOW_H
