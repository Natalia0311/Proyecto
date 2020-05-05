#ifndef INCORRECTO_H
#define INCORRECTO_H

#include <QWidget>

namespace Ui {
class Incorrecto;
}

class Incorrecto : public QWidget
{
    Q_OBJECT

public:
    explicit Incorrecto(QWidget *parent = 0);
    ~Incorrecto();

private:
    Ui::Incorrecto *ui;
};

#endif // INCORRECTO_H
