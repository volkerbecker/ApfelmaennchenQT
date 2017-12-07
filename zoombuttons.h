#ifndef ZOOMBUTTONS_H
#define ZOOMBUTTONS_H

#include <QtGui/QWidget>
#include "ui_zoombuttons.h"
#include <iostream>

class ZoomButtons : public QWidget, public Ui_Form
{
    Q_OBJECT

signals:
    void sendZoomOut();
    void sendZoomIn();

private slots:
	void on_zoomIn_clicked() {emit sendZoomIn();}
	void on_zoomOut_clicked() {emit sendZoomOut();}

public:
    ZoomButtons(QWidget *parent = 0);

    void enableZoomOut() {zoomOut->setEnabled(true);}

    void enableZoomIn() {zoomIn->setEnabled(true);}
    void disableZoomOut() {zoomOut->setEnabled(false);}
    void disableZoomIn() {zoomIn->setEnabled(false);}
};

#endif // ZOOMBUTTONS_H
