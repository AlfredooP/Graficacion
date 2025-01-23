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

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void moverPez1();

private:
    Ui::Dialog *ui;
    QTimer *timer;
};
#endif // DIALOG_H
