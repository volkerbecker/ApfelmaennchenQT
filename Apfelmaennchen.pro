TEMPLATE = app
TARGET = Apfelmaennchen
QT += core \
    gui
HEADERS += zoombuttons.h \
    RubberBand.h \
    Visualizer.h \
    apfelmaennchen.h
SOURCES += zoombuttons.cpp \
    Visualizer.cpp \
    main.cpp \
    apfelmaennchen.cpp
FORMS += zoombuttons.ui \
    apfelmaennchen.ui
