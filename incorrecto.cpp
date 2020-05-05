#include "incorrecto.h"
#include "ui_incorrecto.h"

Incorrecto::Incorrecto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Incorrecto)
{
    ui->setupUi(this);
}

Incorrecto::~Incorrecto()
{
    delete ui;
}
