/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *b_iniciar;
    QLabel *menu;
    QPushButton *b_integrantes;
    QPushButton *b_reglas;
    QPushButton *b_salir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(495, 415);
        QPalette palette;
        QBrush brush(QColor(95, 97, 99, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(46, 47, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Menu->setPalette(palette);
        Menu->setCursor(QCursor(Qt::PointingHandCursor));
        Menu->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Menu->setWindowIcon(icon);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        b_iniciar = new QPushButton(centralwidget);
        b_iniciar->setObjectName(QString::fromUtf8("b_iniciar"));
        b_iniciar->setGeometry(QRect(190, 80, 91, 41));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(208, 208, 208, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(64, 65, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        QBrush brush5(QColor(164, 166, 168, 96));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        b_iniciar->setPalette(palette1);
        b_iniciar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	text-decoration: line-through;\n"
"\n"
"}"));
        menu = new QLabel(centralwidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(190, 0, 81, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        menu->setPalette(palette2);
        menu->setStyleSheet(QString::fromUtf8("font: 9pt \"Modern\";\n"
"font: 700 9pt \"Modern\";\n"
"text-decoration: underline;"));
        menu->setAlignment(Qt::AlignCenter);
        b_integrantes = new QPushButton(centralwidget);
        b_integrantes->setObjectName(QString::fromUtf8("b_integrantes"));
        b_integrantes->setGeometry(QRect(160, 140, 161, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        b_integrantes->setPalette(palette3);
        b_integrantes->setMouseTracking(true);
        b_integrantes->setFocusPolicy(Qt::ClickFocus);
        b_integrantes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	text-decoration: line-through;\n"
"\n"
"}"));
        b_reglas = new QPushButton(centralwidget);
        b_reglas->setObjectName(QString::fromUtf8("b_reglas"));
        b_reglas->setGeometry(QRect(190, 230, 91, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        b_reglas->setPalette(palette4);
        b_reglas->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	text-decoration: line-through;\n"
"\n"
"}"));
        b_salir = new QPushButton(centralwidget);
        b_salir->setObjectName(QString::fromUtf8("b_salir"));
        b_salir->setGeometry(QRect(190, 320, 91, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        b_salir->setPalette(palette5);
        b_salir->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	\n"
"	\n"
"	font: 9pt \"Modern\";\n"
"	text-decoration: line-through;\n"
"\n"
"}"));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 495, 21));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        b_iniciar->setText(QCoreApplication::translate("Menu", "Iniciar", nullptr));
        menu->setText(QCoreApplication::translate("Menu", "Menu", nullptr));
        b_integrantes->setText(QCoreApplication::translate("Menu", "Integrantes", nullptr));
        b_reglas->setText(QCoreApplication::translate("Menu", "Reglas", nullptr));
        b_salir->setText(QCoreApplication::translate("Menu", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
