#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QtGui>
#include <QtCore>

#include <string>
using namespace std;

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

    void moverEtiquetaH();

    void moverEtiquetaV();

    void moverEtiquetaH_Widget();

    void moverEtiquetaV_Widget();

    void on_pushButton_4_clicked();


private:
    Ui::Dialog *ui;
    QTimer *timer1;
    QTimer *timer2;
};
#endif // DIALOG_H
