/****************************************************************************
** Meta object code from reading C++ file 'uartreceiver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/model/uartreceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uartreceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UARTReceiver_t {
    const uint offsetsAndSize[24];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_UARTReceiver_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_UARTReceiver_t qt_meta_stringdata_UARTReceiver = {
    {
QT_MOC_LITERAL(0, 12), // "UARTReceiver"
QT_MOC_LITERAL(13, 22), // "controlCommandReceived"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 7), // "command"
QT_MOC_LITERAL(45, 14), // "numberReceived"
QT_MOC_LITERAL(60, 6), // "number"
QT_MOC_LITERAL(67, 13), // "errorOccurred"
QT_MOC_LITERAL(81, 5), // "error"
QT_MOC_LITERAL(87, 15), // "handleReadyRead"
QT_MOC_LITERAL(103, 11), // "handleError"
QT_MOC_LITERAL(115, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(144, 19) // "processBufferedData"

    },
    "UARTReceiver\0controlCommandReceived\0"
    "\0command\0numberReceived\0number\0"
    "errorOccurred\0error\0handleReadyRead\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "processBufferedData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UARTReceiver[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       6,    1,   56,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   59,    2, 0x08,    7 /* Private */,
       9,    1,   60,    2, 0x08,    8 /* Private */,
      11,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void,

       0        // eod
};

void UARTReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UARTReceiver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->controlCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->numberReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->handleReadyRead(); break;
        case 4: _t->handleError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 5: _t->processBufferedData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UARTReceiver::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UARTReceiver::controlCommandReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UARTReceiver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UARTReceiver::numberReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UARTReceiver::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UARTReceiver::errorOccurred)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject UARTReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UARTReceiver.offsetsAndSize,
    qt_meta_data_UARTReceiver,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_UARTReceiver_t
, QtPrivate::TypeAndForceComplete<UARTReceiver, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *UARTReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UARTReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UARTReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UARTReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UARTReceiver::controlCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UARTReceiver::numberReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UARTReceiver::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
