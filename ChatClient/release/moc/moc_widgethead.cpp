/****************************************************************************
** Meta object code from reading C++ file 'widgethead.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../uipage/widgethead.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgethead.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetHead_t {
    QByteArrayData data[13];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetHead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetHead_t qt_meta_stringdata_WidgetHead = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WidgetHead"
QT_MOC_LITERAL(1, 11, 15), // "signalCutHeadOk"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "signalUpdateUserHead"
QT_MOC_LITERAL(4, 49, 6), // "userId"
QT_MOC_LITERAL(5, 56, 7), // "strHead"
QT_MOC_LITERAL(6, 64, 18), // "SltPictureCutClose"
QT_MOC_LITERAL(7, 83, 19), // "SltChangeNewPixHead"
QT_MOC_LITERAL(8, 103, 14), // "SltBeginToSend"
QT_MOC_LITERAL(9, 118, 20), // "SltConnectedToServer"
QT_MOC_LITERAL(10, 139, 13), // "SltSendFileOk"
QT_MOC_LITERAL(11, 153, 13), // "SltFileRecvOk"
QT_MOC_LITERAL(12, 167, 8) // "filePath"

    },
    "WidgetHead\0signalCutHeadOk\0\0"
    "signalUpdateUserHead\0userId\0strHead\0"
    "SltPictureCutClose\0SltChangeNewPixHead\0"
    "SltBeginToSend\0SltConnectedToServer\0"
    "SltSendFileOk\0SltFileRecvOk\0filePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetHead[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    2,   12,

       0        // eod
};

void WidgetHead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetHead *_t = static_cast<WidgetHead *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCutHeadOk(); break;
        case 1: _t->signalUpdateUserHead((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->SltPictureCutClose(); break;
        case 3: _t->SltChangeNewPixHead(); break;
        case 4: _t->SltBeginToSend(); break;
        case 5: _t->SltConnectedToServer(); break;
        case 6: _t->SltSendFileOk(); break;
        case 7: _t->SltFileRecvOk((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WidgetHead::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetHead::signalCutHeadOk)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WidgetHead::*_t)(const int & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetHead::signalUpdateUserHead)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WidgetHead::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetHead.data,
      qt_meta_data_WidgetHead,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WidgetHead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetHead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetHead.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetHead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WidgetHead::signalCutHeadOk()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WidgetHead::signalUpdateUserHead(const int & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
