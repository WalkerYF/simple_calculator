/****************************************************************************
** Meta object code from reading C++ file 'input_line_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../simple_calculator/calculator/input_line_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_line_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputLineEdit_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputLineEdit_t qt_meta_stringdata_InputLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InputLineEdit"
QT_MOC_LITERAL(1, 14, 15), // "finishedCompute"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "addItem"
QT_MOC_LITERAL(4, 39, 10), // "deleteItem"
QT_MOC_LITERAL(5, 50, 13) // "computeResult"

    },
    "InputLineEdit\0finishedCompute\0\0addItem\0"
    "deleteItem\0computeResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputLineEdit *_t = static_cast<InputLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishedCompute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->deleteItem(); break;
        case 3: _t->computeResult(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputLineEdit::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputLineEdit::finishedCompute)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InputLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_InputLineEdit.data,
      qt_meta_data_InputLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputLineEdit.stringdata0))
        return static_cast<void*>(const_cast< InputLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int InputLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void InputLineEdit::finishedCompute(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
