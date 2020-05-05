#ifndef REGISTRO_H
#define REGISTRO_H

#include <QWidget>

namespace Ui {
class Registro;
}

class Registro : public QWidget
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = 0);
    ~Registro();

private slots:
    void on_ID_textEdited(const QString &arg1);

    void on_Usuario_textEdited(const QString &arg1);

    void on_Contrasena_textEdited(const QString &arg1);

    void on_N_contrasena_textEdited(const QString &arg1);

    void on_buttonBox_clicked(QAbstractButton *button);

    void on_buttonBox_accepted();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
