/****************************************************************************
** Meta object code from reading C++ file 'picturecutdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pictureedit/picturecutdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturecutdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureCutDialog_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureCutDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureCutDialog_t qt_meta_stringdata_PictureCutDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PictureCutDialog"
QT_MOC_LITERAL(1, 17, 15), // "signalCutHeadOk"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "signalClose"
QT_MOC_LITERAL(4, 46, 14), // "SltCutDlgMoved"
QT_MOC_LITERAL(5, 61, 4), // "rect"
QT_MOC_LITERAL(6, 66, 18), // "on_btnLoad_clicked"
QT_MOC_LITERAL(7, 85, 18) // "on_btnSave_clicked"

    },
    "PictureCutDialog\0signalCutHeadOk\0\0"
    "signalClose\0SltCutDlgMoved\0rect\0"
    "on_btnLoad_clicked\0on_btnSave_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureCutDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PictureCutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureCutDialog *_t = static_cast<PictureCutDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCutHeadOk(); break;
        case 1: _t->signalClose(); break;
        case 2: _t->SltCutDlgMoved((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 3: _t->on_btnLoad_clicked(); break;
        case 4: _t->on_btnSave_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PictureCutDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureCutDialog::signalCutHeadOk)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PictureCutDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureCutDialog::signalClose)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PictureCutDialog::staticMetaObject = {
    { &CustomMoveWidget::staticMetaObject, qt_meta_stringdata_PictureCutDialog.data,
      qt_meta_data_PictureCutDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PictureCutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureCutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureCutDialog.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int PictureCutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PictureCutDialog::signalCutHeadOk()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PictureCutDialog::signalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
