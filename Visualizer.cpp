/*
 * Visulizer.cpp
 *
 *  Created on: 03.03.2009
 *      Author: _sax_
 */
#include <QtGui>
#include <cmath>
#include "Visualizer.h"
#include <iostream>
using namespace std;

Visualizer::Visualizer(QWidget *parent) : QWidget(parent)
{
	setWindowFlags(Qt::Window);
	setBackgroundRole(QPalette::Dark);
	setAutoFillBackground(true);
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	rubberBand.isShown()=false;
	zoomButtons=new ZoomButtons(this);
	zoomStack.clear();
	zoomStack.reserve(10);
	zoomIterator=zoomStack.begin();
	connect(zoomButtons,SIGNAL(sendZoomIn()),this,SLOT(zoomIn()));
	connect(zoomButtons,SIGNAL(sendZoomOut()),this,SLOT(zoomOut()));
}

Visualizer::~Visualizer() {
	// TODO Auto-generated destructor stub
}

QSize Visualizer::sizeHint() const
{
	return( QSize(800,600));
}

void Visualizer::resizeArea(const double & xmin,const double & ymin,
		const double & xmax,const double & ymax)
{
	minX=xmin;
	minY=ymin;
	maxX=xmax;
	maxY=ymax;
	calculateSpan();
	refreshPixmap();
}

void Visualizer::paintEvent(QPaintEvent *)
{
	QStylePainter painter(this);
	painter.drawPixmap(0,0,pixmap);
	zoomButtons->move(width()-zoomButtons->width()-2,2);
	if(rubberBand.isShown()) {
		QColor rubColor(0,180,0,55);
		int ruWidth=rubberBand.getXmax()-rubberBand.getXmin();
		int ruHeight=rubberBand.getYmax()-rubberBand.getYmin();
		painter.setPen(rubColor);
		painter.setBrush(rubColor);
		painter.drawRect(rubberBand.getXmin(),rubberBand.getYmin(),
				ruWidth,ruHeight);
	}
}

void Visualizer::refreshPixmap()
{
	pixmap = QPixmap(size());
	pixmap.fill(this,0,0);

	QPainter painter(&pixmap);
	painter.initFrom(this);
	for(int x=0;x<=width();x++) {
		for(int y=margin;y<=height();y++) {
			painter.setPen(getPointColor(x,y));
			painter.drawPoint(x,y);
			//repaint(x,y,1,1);
		}
	}
	update();
}


void Visualizer::resizeEvent(QResizeEvent *)
{
	refreshPixmap();
}

QColor Visualizer::getPointColor(const int &x,const int &y)
{
	//spanX=4;
	//spanY=4;
	//minX=-2;maxX=2;
	//minY=-2;maxX=2;
	double constRealPart;
	double constImagPart;
	calculateComplexNumber(x,y,constRealPart,constImagPart);
	double seriesReal=0,seriesRealNew;
	double seriesImag=0,seriesImagNew;
	double modulusSquared;
	bool res=true;
	int maxIteration=100;
	int border=10;
	int i;

	for(i=0;i<maxIteration;i++) {
		seriesRealNew=seriesReal*seriesReal-seriesImag*seriesImag+
			       constRealPart;
		seriesImagNew=2*seriesReal*seriesImag+constImagPart;
		seriesReal=seriesRealNew;
		seriesImag=seriesImagNew;
		modulusSquared=seriesImag*seriesImag+seriesReal*seriesReal;
		if(modulusSquared>border) {res=false;break;}
	}
	return ColorGradient(double(i)/double(maxIteration));
}

QColor Visualizer::ColorGradient(const double &i)
{	double v=1-i;
	return QColor(255.0*v,255.0*v*v,255.0*v*v*v*v*v);
}

void Visualizer::mousePressEvent(QMouseEvent *event)
{
	if(event->button()==Qt::LeftButton) {
		rubberBand.x1()=(event->pos().x());
		rubberBand.y1()=(event->pos().y());
		rubberBand.x2()=(event->pos().x());
		rubberBand.y2()=(event->pos().y());
		rubberBand.isShown()=true;
		update();
	}
}

void Visualizer::mouseMoveEvent(QMouseEvent *event)
{
	if (rubberBand.isShown()) {
		rubberBand.x2()=(event->pos().x());
		rubberBand.y2()=(event->pos().y());
		update();
	}
}

void Visualizer::mouseReleaseEvent(QMouseEvent *event)
{
	if(event->button() == Qt::LeftButton && rubberBand.isShown()) {
		double realMin,realMax;
		double imagMin,imagMax;

		rubberBand.isShown()=false;
		calculateComplexNumber(rubberBand.getXmin(),rubberBand.getYmax(),
				realMin,imagMin);
		calculateComplexNumber(rubberBand.getXmax(),rubberBand.getYmin(),
				realMax,imagMax);
		newZoomEntry(realMin,imagMin,realMax,imagMax);
		emit newRegionChoosed(realMin,imagMin,realMax,imagMax);
	update();
	}
}

void Visualizer::newZoomEntry(const double &realMin, const double &imagMin,
		const double &realMax, const double &imagMax)
{
	ZoomData newCoordinates(realMin,imagMin,realMax,imagMax);
	std::vector<ZoomData>::iterator iter=--zoomStack.end();
	cerr << zoomStack.size();
	while(iter!=zoomIterator && zoomStack.size()!=0){
		zoomStack.erase(iter--);
	}
	zoomStack.push_back(newCoordinates);
	cerr << zoomStack.size();
	if(zoomStack.size()>1) zoomButtons->enableZoomOut();
	zoomButtons->disableZoomIn();
	zoomIterator=--zoomStack.end();
}

void Visualizer::calculateComplexNumber(const int &x,const int &y,
		double & real, double & imag)
{
	real=spanX*double(x)/double(width())+minX;
	imag=spanY*(1-double(y)/double(height()))+minY;
}

void Visualizer::zoomIn()
{
	if(zoomIterator!=--(zoomStack.end()))
		zoomButtons->enableZoomOut();
		++zoomIterator;
		emit newRegionChoosed(zoomIterator->xmin(),
					zoomIterator->ymin(),zoomIterator->xmax(),
					zoomIterator->ymax());
		if(zoomIterator==--zoomStack.end()) {
			zoomButtons->disableZoomIn();
		}
}

void Visualizer::zoomOut()
{
	if(zoomIterator!=zoomStack.begin()) {
		zoomButtons->enableZoomIn();
		--zoomIterator;
		emit newRegionChoosed(zoomIterator->xmin(),
				zoomIterator->ymin(),zoomIterator->xmax(),
				zoomIterator->ymax());
		if(zoomIterator==zoomStack.begin()) {
			zoomButtons->disableZoomOut();
		}
	}
}

