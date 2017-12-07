#include "apfelmaennchen.h"

using namespace std;

Apfelmaennchen::Apfelmaennchen(QWidget *parent)
    : QMainWindow(parent)
{
	setupUi(this);
	connect(calculateButton,SIGNAL(clicked()),this,SLOT(startCalculation()));
	visualizer = new Visualizer(this);

	connect(visualizer,SIGNAL(newRegionChoosed(double,double,double,double)),
			this,SLOT(setNewRegion(double,double,double,double)));
	realMin=-2;
	realMinSpinBox->setValue(-2);
	realMax=2;
	realMaxSpinBox->setValue(2);
	imagMin=-2;
	imagMinSpinBox->setValue(-2);
	imagMax=2;
	imagMaxSpinBox->setValue(2);
	visualizer->resizeArea(realMin,realMax,imagMin,imagMax);
	visualizer->newZoomEntry(realMin,imagMin,realMax,imagMax);
	this->setWindowTitle(tr("Apfelmännchen"));
}

Apfelmaennchen::~Apfelmaennchen()
{
   delete visualizer;
}

void Apfelmaennchen::setNewRegion(double xmin,double ymin,
		double xmax, double ymax)
{
	realMinSpinBox->setValue(xmin);
	realMaxSpinBox->setValue(xmax);
	imagMinSpinBox->setValue(ymin);
	imagMaxSpinBox->setValue(ymax);
	realMax=xmax;
	realMin=xmin;
	imagMax=ymax;
	imagMin=ymin;
	startCalculation();
}

void Apfelmaennchen::startCalculation()
{
	visualizer->show();
	visualizer->resizeArea(realMin,imagMin,
			realMax,imagMax);

	//QMessageBox::information(this,tr("Info"),tr("Button gedrückt"),QMessageBox::Ok);
}
