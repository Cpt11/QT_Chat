/****************************************************************************
** Meta object code from reading C++ file 'AudioRecorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../media/AudioRecorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioRecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioRecorder_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioRecorder_t qt_meta_stringdata_AudioRecorder = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AudioRecorder"
QT_MOC_LITERAL(1, 14, 14), // "signalMaxValue"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "val"
QT_MOC_LITERAL(4, 34, 14), // "signalFinished"
QT_MOC_LITERAL(5, 49, 13), // "sltStopRecord"
QT_MOC_LITERAL(6, 63, 12), // "OnRecordPlay"
QT_MOC_LITERAL(7, 76, 13), // "OnStateChange"
QT_MOC_LITERAL(8, 90, 13), // "QAudio::State"
QT_MOC_LITERAL(9, 104, 1), // "s"
QT_MOC_LITERAL(10, 106, 10), // "OnReadMore"
QT_MOC_LITERAL(11, 117, 20), // "OnSliderValueChanged"
QT_MOC_LITERAL(12, 138, 9) // "OnTimeOut"

    },
    "AudioRecorder\0signalMaxValue\0\0val\0"
    "signalFinished\0sltStopRecord\0OnRecordPlay\0"
    "OnStateChange\0QAudio::State\0s\0OnReadMore\0"
    "OnSliderValueChanged\0OnTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioRecorder[] = {

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
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void AudioRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioRecorder *_t = static_cast<AudioRecorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalMaxValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalFinished(); break;
        case 2: _t->sltStopRecord(); break;
        case 3: _t->OnRecordPlay(); break;
        case 4: _t->OnStateChange((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 5: _t->OnReadMore(); break;
        case 6: _t->OnSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AudioRecorder::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioRecorder::signalMaxValue)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AudioRecorder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioRecorder::signalFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AudioRecorder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioRecorder.data,
      qt_meta_data_AudioRecorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioRecorder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AudioRecorder::signalMaxValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioRecorder::signalFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
