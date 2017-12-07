/*
 * RubberBand.h
 *
 *  Created on: 07.03.2009
 *      Author: _sax_
 */

#ifndef RUBBERBAND_H_
#define RUBBERBAND_H_

class RubberBand
{
public:
	int &x1() {return _x1;}
	int &x2() {return _x2;}
	int &y1() {return _y1;}
	int &y2() {return _y2;}
	const int &x1() const {return _x1;}
	const int &x2() const {return _x2;}
	const int &y1() const {return _y1;}
	const int &y2() const {return _y2;}

	const int & getXmin() const {return _x1<=_x2 ? _x1 : _x2;}
	const int & getXmax() const {return _x1>_x2 ? _x1 : _x2;}
	const int & getYmin() const {return _y1<=_y2 ? _y1 : _y2;}
	const int & getYmax() const {return _y1>_y2 ? _y1 : _y2;}


	bool &isShown() {return _isShown;}
	const bool &isShown() const {return _isShown;}
private:
	int _x1,_y1,_x2,_y2;
	bool _isShown;
};

#endif /* RUBBERBAND_H_ */
