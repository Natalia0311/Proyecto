#ifndef INICIO_H
#define INICIO_H

#include <QWidget>

namespace Ui {
class Inicio;
}

class Inicio : public QWidget
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_Usuario_textEdited(const QString &arg1);

    void on_Contrasena_textEdited(const QString &arg1);

    void on_B_Registro_clicked();

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
