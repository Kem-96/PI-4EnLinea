/********************************************************************************
** Form generated from reading UI file 'integrantes.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRANTES_H
#define UI_INTEGRANTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Integrantes
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *b_volverI;

    void setupUi(QDialog *Integrantes)
    {
        if (Integrantes->objectName().isEmpty())
            Integrantes->setObjectName(QString::fromUtf8("Integrantes"));
        Integrantes->resize(495, 415);
        QPalette palette;
        QBrush brush(QColor(95, 97, 99, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(46, 47, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(68, 68, 68, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Integrantes->setPalette(palette);
        Integrantes->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Integrantes->setWindowIcon(icon);
        label = new QLabel(Integrantes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 401, 91));
        label->setMinimumSize(QSize(401, 91));
        label->setStyleSheet(QString::fromUtf8("font: 5pt \"Modern\";\n"
"color: rgb(255, 255, 255)\n"
""));
        label_2 = new QLabel(Integrantes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 130, 361, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 5pt \"Modern\";\n"
"color: rgb(255, 255, 255)\n"
""));
        label_3 = new QLabel(Integrantes);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 200, 341, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Modern\";\n"
"color: rgb(255, 255, 255)\n"
""));
        label_4 = new QLabel(Integrantes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 280, 401, 71));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"Modern\";\n"
"color: rgb(255, 255, 255)\n"
""));
        b_volverI = new QPushButton(Integrantes);
        b_volverI->setObjectName(QString::fromUtf8("b_volverI"));
        b_volverI->setGeometry(QRect(0, 370, 80, 41));
        b_volverI->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: solid rgb(132, 57, 82);\n"
"	border: 5 px solid rgb(93, 40, 57);\n"
"	padding: 5 px;\n"
"	\n"
"	color:rgb(255, 255, 255);\n"
"	font: 9pt \"Modern\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color:rgb(255, 255, 255);\n"
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

        retranslateUi(Integrantes);

        QMetaObject::connectSlotsByName(Integrantes);
    } // setupUi

    void retranslateUi(QDialog *Integrantes)
    {
        Integrantes->setWindowTitle(QCoreApplication::translate("Integrantes", "Integrantes", nullptr));
        label->setText(QCoreApplication::translate("Integrantes", "Rodrigo Mendoza  (C04813)", nullptr));
        label_2->setText(QCoreApplication::translate("Integrantes", "Nathan Murillo (B95506)", nullptr));
        label_3->setText(QCoreApplication::translate("Integrantes", "Isaac Vargas (C01895)", nullptr));
        label_4->setText(QCoreApplication::translate("Integrantes", "Kembly Paniagua (B95822)", nullptr));
        b_volverI->setText(QCoreApplication::translate("Integrantes", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Integrantes: public Ui_Integrantes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRANTES_H
