/*
 * Visulizer.h
 *
 *  Created on: 03.03.2009
 *      Author: _sax_
 */
#ifndef VISUALIZER_H_
#define VISUALIZER_H_

#include <QMap>
#include <QPixmap>
#include <QWidget>
#include "RubberBand.h"
#include "zoombuttons.h"
#include <vector>

class ZoomData
{
// Constructor
public:
	ZoomData() {};
	ZoomData(const double &xmin,const double &ymin,
			const double &xmax,const double &ymax) {
		_xmin=xmin;_ymin=ymin;
		_xmax=xmax;_ymax=ymax;
	}

public:
	double & xmin() {return _xmin;}
	const double &xmin() const {return _xmin;}

	double & xmax() {return _xmax;}
	const double &xmax() const {return _xmax;}

	double & ymax() {return _ymax;}
	const double &ymax() const {return _ymax;}

	double & ymin() {return _ymin;}
	const double &ymin() const {return _ymin;}

protected:
	double _xmin,_xmax,_ymin,_ymax;
};

class Visualizer : public QWidget
{
	Q_OBJECT


public:
	Visualizer(QWidget *parent=0);
	virtual ~Visualizer();

	QSize sizeHint() const;

	void reCalculate() {refreshPixmap();}

	void newZoomEntry(const double &, const double &,
				const double &, const double &);


signals:
	void newRegionChoosed(double xmin,double ymin,double xmax,double ymax);

public slots:
	void resizeArea(const double &, const double &,
			const double &, const double &);
	void zoomIn();
	void zoomOut();

protected:
	void paintEvent(QPaintEvent *);
	void resizeEvent(QResizeEvent *);
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void mouseReleaseEvent(QMouseEvent *);
	void refreshPixmap();
	QColor ColorGradient(const double &i);
	void calculateComplexNumber(const int &,const int & ,
			double & , double & );

protected:
	QColor getPointColor(const int &x, const int &y);
	void calculateSpan() {
		spanX=maxX-minX;
		spanY=maxY-minY;
		}

private:
	double minX,maxX,minY,maxY,spanX,spanY;
	QPixmap pixmap;
	RubberBand rubberBand;
	ZoomButtons *zoomButtons;
	enum {margin=0};
	std::vector<ZoomData> zoomStack;
	std::vector<ZoomData>::iterator zoomIterator;
};




#endif /* VISULIZER_H_ */
