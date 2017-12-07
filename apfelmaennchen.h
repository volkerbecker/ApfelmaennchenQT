#ifndef APFELMAENNCHEN_H
#define APFELMAENNCHEN_H

#include <QtGui/QMainWindow>
#include <QtGui/QMessageBox>
#include "ui_apfelmaennchen.h"
#include "Visualizer.h"

class Apfelmaennchen : public QMainWindow, public Ui_MainWindow
{
    Q_OBJECT

public:
    Apfelmaennchen(QWidget *parent = 0);
    ~Apfelmaennchen();


public slots:
	void setNewRegion(double,double,double,double);



private slots:
	void startCalculation();

protected:
	Visualizer *visualizer;

private:
	double realMin,realMax;
	double imagMax,imagMin;
};

#endif // APFELMAENNCHEN_H
