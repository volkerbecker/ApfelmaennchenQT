/****************************************************************************
** Meta object code from reading C++ file 'apfelmaennchen.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "apfelmaennchen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apfelmaennchen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Apfelmaennchen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x0a,
      62,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Apfelmaennchen[] = {
    "Apfelmaennchen\0\0,,,\0"
    "setNewRegion(double,double,double,double)\0"
    "startCalculation()\0"
};

void Apfelmaennchen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Apfelmaennchen *_t = static_cast<Apfelmaennchen *>(_o);
        switch (_id) {
        case 0: _t->setNewRegion((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->startCalculation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Apfelmaennchen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Apfelmaennchen::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Apfelmaennchen,
      qt_meta_data_Apfelmaennchen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Apfelmaennchen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Apfelmaennchen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Apfelmaennchen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Apfelmaennchen))
        return static_cast<void*>(const_cast< Apfelmaennchen*>(this));
    if (!strcmp(_clname, "Ui_MainWindow"))
        return static_cast< Ui_MainWindow*>(const_cast< Apfelmaennchen*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Apfelmaennchen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
