#include "inicio.h"
#include "ui_inicio.h"

Inicio::Inicio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_Usuario_textEdited(const QString &arg1)
{

}

void Inicio::on_Contrasena_textEdited(const QString &arg1)
{

}

void Inicio::on_B_Registro_clicked()
{

}

void Inicio::on_buttonBox_clicked(QAbstractButton *button)
{


}

