#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_b_integrantes_clicked();

    void on_b_reglas_clicked();

    void on_b_salir_clicked();

private:
    Ui::Menu *ui;
};
#endif // MENU_H