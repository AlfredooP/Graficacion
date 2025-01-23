#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>

#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

    string invertir(string);

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_botonTimer1_clicked();

    void on_botonDetener1_clicked();

    void on_botonTimer2_clicked();

    void on_botonDetener2_clicked();

    void moverEtiqueta1();

    void moverEtiqueta2();

    void on_dial_valueChanged(int value);

    string Invertir(string fuente);

private:
    Ui::Dialog *ui;

    QTimer *timer1, *timer2;

    int velocidad;
};
#endif // DIALOG_H
