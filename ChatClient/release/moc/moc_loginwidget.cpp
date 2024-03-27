/****************************************************************************
** Meta object code from reading C++ file 'loginwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loginwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginWidget_t {
    QByteArrayData data[14];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginWidget_t qt_meta_stringdata_LoginWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginWidget"
QT_MOC_LITERAL(1, 12, 12), // "signalRotate"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "on_btnLogin_clicked"
QT_MOC_LITERAL(4, 46, 12), // "SltTcpStatus"
QT_MOC_LITERAL(5, 59, 5), // "state"
QT_MOC_LITERAL(6, 65, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(7, 86, 21), // "on_btnSaveCfg_clicked"
QT_MOC_LITERAL(8, 108, 21), // "on_btnWinMenu_clicked"
QT_MOC_LITERAL(9, 130, 20), // "SltAnimationFinished"
QT_MOC_LITERAL(10, 151, 15), // "SltEditFinished"
QT_MOC_LITERAL(11, 167, 25), // "on_checkBoxPasswd_clicked"
QT_MOC_LITERAL(12, 193, 7), // "checked"
QT_MOC_LITERAL(13, 201, 28) // "on_checkBoxAutoLogin_clicked"

    },
    "LoginWidget\0signalRotate\0\0on_btnLogin_clicked\0"
    "SltTcpStatus\0state\0on_btnCancel_clicked\0"
    "on_btnSaveCfg_clicked\0on_btnWinMenu_clicked\0"
    "SltAnimationFinished\0SltEditFinished\0"
    "on_checkBoxPasswd_clicked\0checked\0"
    "on_checkBoxAutoLogin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void LoginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginWidget *_t = static_cast<LoginWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRotate(); break;
        case 1: _t->on_btnLogin_clicked(); break;
        case 2: _t->SltTcpStatus((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 3: _t->on_btnCancel_clicked(); break;
        case 4: _t->on_btnSaveCfg_clicked(); break;
        case 5: _t->on_btnWinMenu_clicked(); break;
        case 6: _t->SltAnimationFinished(); break;
        case 7: _t->SltEditFinished(); break;
        case 8: _t->on_checkBoxPasswd_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxAutoLogin_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LoginWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginWidget::signalRotate)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LoginWidget::staticMetaObject = {
    { &CustomMoveWidget::staticMetaObject, qt_meta_stringdata_LoginWidget.data,
      qt_meta_data_LoginWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginWidget.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int LoginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LoginWidget::signalRotate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
