#include <QApplication>
#include <QLabel>
#include <QBoxLayout> //Incluye los layouts disponibles

#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QWidget ventana;
    QWidget *ventana = new QWidget;

    //Horizontal
    //QHBoxLayout *mainLayout = new QHBoxLayout(&ventana);

    QVBoxLayout *mainLayout = new QVBoxLayout(ventana);
    string cad1 = "<h1><i>ETIQUETA 1, PRACTICANDO CON </i>";
    string cad2 = "<font color=#fc00fc> QT</font</h1>";

//    QLabel *label1 = new QLabel("<h1><i>ETIQUETA 1, PRACTICANDO CON </i>"
//    "<font color=#fc00fc> QT</font</h1>");

    QLabel *label1 = new QLabel(QString::fromStdString(cad1) + QString::fromStdString(cad2));

    label1->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QLabel *label2 = new QLabel("<h2><i><b>ETIQUETA 2, DISFRUTANDO DE</b></i>"
                                "<font color=#0f0> GRAFICACION </font></h2>");

    label2->setAlignment(Qt::AlignTop | Qt::AlignRight);

    QLabel *label3 = new QLabel("Etiqueta 3");
    QLabel *label4 = new QLabel("Etiqueta 4");


    mainLayout->addWidget(label1);
    mainLayout->addWidget(label2);
    mainLayout->addWidget(label3);
    mainLayout->addWidget(label4);


    ventana->resize(400,400);
    ventana->show();

//    ventana.resize(400,400);
//    ventana.show();

    return a.exec();
}
