/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "SltChangePages"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 20), // "on_btnBackup_clicked"
QT_MOC_LITERAL(5, 54, 21), // "on_btnDataUdo_clicked"
QT_MOC_LITERAL(6, 76, 19), // "on_btnLogin_clicked"
QT_MOC_LITERAL(7, 96, 18), // "on_btnExit_clicked"
QT_MOC_LITERAL(8, 115, 18), // "on_btnQuit_clicked"
QT_MOC_LITERAL(9, 134, 17), // "SltTrayIcoClicked"
QT_MOC_LITERAL(10, 152, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(11, 186, 6), // "reason"
QT_MOC_LITERAL(12, 193, 22), // "SltTrayIconMenuClicked"
QT_MOC_LITERAL(13, 216, 8), // "QAction*"
QT_MOC_LITERAL(14, 225, 6), // "action"
QT_MOC_LITERAL(15, 232, 14), // "ShowUserStatus"
QT_MOC_LITERAL(16, 247, 4), // "text"
QT_MOC_LITERAL(17, 252, 15), // "SltTableClicked"
QT_MOC_LITERAL(18, 268, 25), // "on_btnUserRefresh_clicked"
QT_MOC_LITERAL(19, 294, 24) // "on_btnUserInsert_clicked"

    },
    "MainWindow\0SltChangePages\0\0index\0"
    "on_btnBackup_clicked\0on_btnDataUdo_clicked\0"
    "on_btnLogin_clicked\0on_btnExit_clicked\0"
    "on_btnQuit_clicked\0SltTrayIcoClicked\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0SltTrayIconMenuClicked\0QAction*\0"
    "action\0ShowUserStatus\0text\0SltTableClicked\0"
    "on_btnUserRefresh_clicked\0"
    "on_btnUserInsert_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      15,    1,   88,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SltChangePages((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnBackup_clicked(); break;
        case 2: _t->on_btnDataUdo_clicked(); break;
        case 3: _t->on_btnLogin_clicked(); break;
        case 4: _t->on_btnExit_clicked(); break;
        case 5: _t->on_btnQuit_clicked(); break;
        case 6: _t->SltTrayIcoClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 7: _t->SltTrayIconMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->ShowUserStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->SltTableClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_btnUserRefresh_clicked(); break;
        case 11: _t->on_btnUserInsert_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &CustomMoveWidget::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
