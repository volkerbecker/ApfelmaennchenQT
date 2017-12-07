/********************************************************************************
** Form generated from reading UI file 'zoombuttons.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOMBUTTONS_H
#define UI_ZOOMBUTTONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(74, 40);
        zoomIn = new QPushButton(Form);
        zoomIn->setObjectName(QString::fromUtf8("zoomIn"));
        zoomIn->setEnabled(false);
        zoomIn->setGeometry(QRect(7, 10, 25, 25));
        zoomIn->setCheckable(false);
        zoomOut = new QPushButton(Form);
        zoomOut->setObjectName(QString::fromUtf8("zoomOut"));
        zoomOut->setEnabled(false);
        zoomOut->setGeometry(QRect(40, 10, 25, 25));
        zoomOut->setCheckable(false);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        zoomIn->setText(QApplication::translate("Form", "+", 0, QApplication::UnicodeUTF8));
        zoomOut->setText(QApplication::translate("Form", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOMBUTTONS_H
