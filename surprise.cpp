#include "surprise.h"
#include "ui_surprise.h"
#include <QPixmap>

Surprise::Surprise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Surprise)
{
    ui->setupUi(this);
}

Surprise::~Surprise()
{
    delete ui;
}

void Surprise::on_giantButton_clicked()
{
    QPixmap img(":/celebrate.jpg");
    ui->image->setPixmap((img.scaled(ui->image->width(),ui->image->height(),Qt::KeepAspectRatio)));
}
