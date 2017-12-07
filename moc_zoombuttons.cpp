/****************************************************************************
** Meta object code from reading C++ file 'zoombuttons.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zoombuttons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoombuttons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZoomButtons[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      27,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   12,   12,   12, 0x08,
      60,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZoomButtons[] = {
    "ZoomButtons\0\0sendZoomOut()\0sendZoomIn()\0"
    "on_zoomIn_clicked()\0on_zoomOut_clicked()\0"
};

void ZoomButtons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomButtons *_t = static_cast<ZoomButtons *>(_o);
        switch (_id) {
        case 0: _t->sendZoomOut(); break;
        case 1: _t->sendZoomIn(); break;
        case 2: _t->on_zoomIn_clicked(); break;
        case 3: _t->on_zoomOut_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZoomButtons::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZoomButtons::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ZoomButtons,
      qt_meta_data_ZoomButtons, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoomButtons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoomButtons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoomButtons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomButtons))
        return static_cast<void*>(const_cast< ZoomButtons*>(this));
    if (!strcmp(_clname, "Ui_Form"))
        return static_cast< Ui_Form*>(const_cast< ZoomButtons*>(this));
    return QWidget::qt_metacast(_clname);
}

int ZoomButtons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ZoomButtons::sendZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ZoomButtons::sendZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
