#ifndef INTEGRANTES_H
#define INTEGRANTES_H

#include <QDialog>

namespace Ui {
class Integrantes;
}

class Integrantes : public QDialog
{
    Q_OBJECT

public:
    explicit Integrantes(QWidget *parent = nullptr);
    ~Integrantes();

private slots:
    void on_b_volverI_clicked();

private:
    Ui::Integrantes *ui;
};

#endif // INTEGRANTES_H
