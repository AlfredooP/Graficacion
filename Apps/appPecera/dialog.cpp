#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(moverPez1()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    timer->start(50);
}


void Dialog::on_pushButton_2_clicked()
{
    timer->stop();
}


void Dialog::on_pushButton_3_clicked()
{
 close();
}

void Dialog::moverPez1()
{
    static int x = 0;
    static bool band = true;

    int y = ui->label_2->geometry().y();

    ui->label_2->setStyleSheet("image: url(:/img/pez.png)");

    if(band)
    {
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        x += 10;

        if(ui->label_2->geometry().x() > (ui->label->width() - ui->label_2->width()))
        {
            band = false;
            ui->label_2->setStyleSheet("image: url(:/img/pezInv.png)");
        }
    }
    if(!band)
    {
        x -= 10;
        ui->label_2->setStyleSheet("image: url(:/img/pezInv.png)");
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        if(x == 0)
        {
            band = true;
            ui->label_2->setStyleSheet("image: url(:/img/pez.png)");
        }
    }

}

