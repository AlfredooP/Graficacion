#include <QApplication>
#include <QWidget>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //Version usando punteros
    QWidget *widget = new QWidget();
    widget->setGeometry(200,200,400,300);
    QPalette paleta(widget->palette());

    //paleta.setColor(QPalette::Window,QColor(0xff0000));
    //paleta.setColor(QPalette::Window,QColor::fromRgb(255,0,0));

    int colorBlanco = 0xffffff;
    int colorVerde = colorBlanco & 0x00ff00;
    int colorRojo = colorBlanco & 0xff0000;
    int colorAzul = colorBlanco & 0x0000ff;
    int colorAmarillo = colorBlanco & 0xffff00;
    int colorX = 0x00cfcf;

    paleta.setColor(QPalette::Window,QColor(colorAzul));

    widget->setAutoFillBackground(true);
    widget->setPalette(paleta);
    widget->show();

    return app.exec();
}
