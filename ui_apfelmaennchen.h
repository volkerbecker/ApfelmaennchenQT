/********************************************************************************
** Form generated from reading UI file 'apfelmaennchen.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APFELMAENNCHEN_H
#define UI_APFELMAENNCHEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load;
    QAction *action_Save;
    QAction *action_Save_as;
    QAction *action_Export;
    QAction *action_Print;
    QAction *actionBerechnungsoptionen;
    QAction *action_Grafikoptionen;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *realMinSpinBox;
    QDoubleSpinBox *realMaxSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *imagMinSpinBox;
    QDoubleSpinBox *imagMaxSpinBox;
    QPushButton *calculateButton;
    QMenuBar *menubar;
    QMenu *menuGgg;
    QMenu *menuAbout;
    QMenu *menuOptionen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(481, 167);
        action_Load = new QAction(MainWindow);
        action_Load->setObjectName(QString::fromUtf8("action_Load"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Save_as = new QAction(MainWindow);
        action_Save_as->setObjectName(QString::fromUtf8("action_Save_as"));
        action_Export = new QAction(MainWindow);
        action_Export->setObjectName(QString::fromUtf8("action_Export"));
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QString::fromUtf8("action_Print"));
        actionBerechnungsoptionen = new QAction(MainWindow);
        actionBerechnungsoptionen->setObjectName(QString::fromUtf8("actionBerechnungsoptionen"));
        action_Grafikoptionen = new QAction(MainWindow);
        action_Grafikoptionen->setObjectName(QString::fromUtf8("action_Grafikoptionen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        realMinSpinBox = new QDoubleSpinBox(groupBox);
        realMinSpinBox->setObjectName(QString::fromUtf8("realMinSpinBox"));
        realMinSpinBox->setDecimals(10);
        realMinSpinBox->setMinimum(-5);
        realMinSpinBox->setMaximum(5);
        realMinSpinBox->setValue(-2);

        gridLayout->addWidget(realMinSpinBox, 1, 3, 1, 1);

        realMaxSpinBox = new QDoubleSpinBox(groupBox);
        realMaxSpinBox->setObjectName(QString::fromUtf8("realMaxSpinBox"));
        realMaxSpinBox->setDecimals(10);
        realMaxSpinBox->setMinimum(-5);
        realMaxSpinBox->setMaximum(5);
        realMaxSpinBox->setValue(2);

        gridLayout->addWidget(realMaxSpinBox, 1, 4, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        imagMinSpinBox = new QDoubleSpinBox(groupBox);
        imagMinSpinBox->setObjectName(QString::fromUtf8("imagMinSpinBox"));
        imagMinSpinBox->setDecimals(10);
        imagMinSpinBox->setMinimum(-5);
        imagMinSpinBox->setMaximum(5);
        imagMinSpinBox->setValue(-2);

        gridLayout->addWidget(imagMinSpinBox, 2, 3, 1, 1);

        imagMaxSpinBox = new QDoubleSpinBox(groupBox);
        imagMaxSpinBox->setObjectName(QString::fromUtf8("imagMaxSpinBox"));
        imagMaxSpinBox->setDecimals(10);
        imagMaxSpinBox->setMinimum(-5);
        imagMaxSpinBox->setMaximum(5);
        imagMaxSpinBox->setValue(2);

        gridLayout->addWidget(imagMaxSpinBox, 2, 4, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);


        horizontalLayout->addWidget(groupBox);

        calculateButton = new QPushButton(layoutWidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));

        horizontalLayout->addWidget(calculateButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 481, 21));
        menuGgg = new QMenu(menubar);
        menuGgg->setObjectName(QString::fromUtf8("menuGgg"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuOptionen = new QMenu(menubar);
        menuOptionen->setObjectName(QString::fromUtf8("menuOptionen"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGgg->menuAction());
        menubar->addAction(menuOptionen->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuGgg->addAction(action_Load);
        menuGgg->addAction(action_Save);
        menuGgg->addAction(action_Save_as);
        menuGgg->addAction(action_Export);
        menuGgg->addAction(action_Print);
        menuGgg->addSeparator();
        menuOptionen->addAction(actionBerechnungsoptionen);
        menuOptionen->addAction(action_Grafikoptionen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Load->setText(QApplication::translate("MainWindow", "&Load", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        action_Save_as->setText(QApplication::translate("MainWindow", "&Save as", 0, QApplication::UnicodeUTF8));
        action_Export->setText(QApplication::translate("MainWindow", "&Export", 0, QApplication::UnicodeUTF8));
        action_Print->setText(QApplication::translate("MainWindow", "&Print", 0, QApplication::UnicodeUTF8));
        actionBerechnungsoptionen->setText(QApplication::translate("MainWindow", "&Berechnungsoptionen", 0, QApplication::UnicodeUTF8));
        action_Grafikoptionen->setText(QApplication::translate("MainWindow", "&Grafikoptionen", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gebiet", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Min", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Max", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Realteil (x-Achse)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Imagin\303\244rteil (y-Achse)", 0, QApplication::UnicodeUTF8));
        calculateButton->setText(QApplication::translate("MainWindow", "&Berechnung", 0, QApplication::UnicodeUTF8));
        menuGgg->setTitle(QApplication::translate("MainWindow", "Datei", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuOptionen->setTitle(QApplication::translate("MainWindow", "Optionen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APFELMAENNCHEN_H
