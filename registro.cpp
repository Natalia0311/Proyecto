#include "registro.h"
#include "ui_registro.h"

Registro::Registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_ID_textEdited(const QString &arg1)
{

}

void Registro::on_Usuario_textEdited(const QString &arg1)
{

}

void Registro::on_Contrasena_textEdited(const QString &arg1)
{

}

void Registro::on_N_contrasena_textEdited(const QString &arg1)
{

}

void Registro::on_buttonBox_clicked(QAbstractButton *button)
{

}
