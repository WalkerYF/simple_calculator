/****************************************************************************
** Meta object code from reading C++ file 'operator_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../calculator/operator_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'operator_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OperatorPanel_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OperatorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OperatorPanel_t qt_meta_stringdata_OperatorPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OperatorPanel"
QT_MOC_LITERAL(1, 14, 15), // "buttonBeClicked"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "OperatorPanel\0buttonBeClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OperatorPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Char,    2,

       0        // eod
};

void OperatorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OperatorPanel *_t = static_cast<OperatorPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonBeClicked((*reinterpret_cast< char(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OperatorPanel::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OperatorPanel::buttonBeClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OperatorPanel::staticMetaObject = {
    { &AbstractPanel::staticMetaObject, qt_meta_stringdata_OperatorPanel.data,
      qt_meta_data_OperatorPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OperatorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OperatorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OperatorPanel.stringdata0))
        return static_cast<void*>(const_cast< OperatorPanel*>(this));
    return AbstractPanel::qt_metacast(_clname);
}

int OperatorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OperatorPanel::buttonBeClicked(char _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
