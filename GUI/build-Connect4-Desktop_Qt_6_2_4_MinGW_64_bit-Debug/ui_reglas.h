/********************************************************************************
** Form generated from reading UI file 'reglas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLAS_H
#define UI_REGLAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Reglas
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *b_volverR;

    void setupUi(QDialog *Reglas)
    {
        if (Reglas->objectName().isEmpty())
            Reglas->setObjectName(QString::fromUtf8("Reglas"));
        Reglas->resize(618, 415);
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
        Reglas->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern")});
        font.setPointSize(14);
        Reglas->setFont(font);
        Reglas->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Reglas->setWindowIcon(icon);
        label = new QLabel(Reglas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 161, 51));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Modern\";\n"
"font: 20pt \"Modern\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255)"));
        label_2 = new QLabel(Reglas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 241, 51));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Trebuchet MS\";"));
        label_3 = new QLabel(Reglas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 1101, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Trebuchet MS\";"));
        label_4 = new QLabel(Reglas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 190, 831, 51));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Trebuchet MS\";"));
        label_5 = new QLabel(Reglas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 260, 921, 51));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Trebuchet MS\";"));
        label_6 = new QLabel(Reglas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 330, 1141, 51));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Trebuchet MS\";"));
        b_volverR = new QPushButton(Reglas);
        b_volverR->setObjectName(QString::fromUtf8("b_volverR"));
        b_volverR->setGeometry(QRect(-10, 370, 80, 41));
        b_volverR->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        retranslateUi(Reglas);

        QMetaObject::connectSlotsByName(Reglas);
    } // setupUi

    void retranslateUi(QDialog *Reglas)
    {
        Reglas->setWindowTitle(QCoreApplication::translate("Reglas", "Reglas", nullptr));
        label->setText(QCoreApplication::translate("Reglas", "Reglas", nullptr));
        label_2->setText(QCoreApplication::translate("Reglas", "1. 2 Jugadores.", nullptr));
        label_3->setText(QCoreApplication::translate("Reglas", "2. Se deben colocar fichas hasta que el tablero se llene o un jugador gane.", nullptr));
        label_4->setText(QCoreApplication::translate("Reglas", "3. Se gana al colocar 4 fichas en linea.", nullptr));
        label_5->setText(QCoreApplication::translate("Reglas", "4. Las lineas pueden ser verticales, horizontales o en diagonal.", nullptr));
        label_6->setText(QCoreApplication::translate("Reglas", "5. El turno de los jugadores se alterna. Se puede colocar una ficha por turno.", nullptr));
        b_volverR->setText(QCoreApplication::translate("Reglas", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reglas: public Ui_Reglas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLAS_H
