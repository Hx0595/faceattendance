/****************************************************************************
** Meta object code from reading C++ file 'attendancewin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../faceattendance/AttendanceServer/attendancewin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attendancewin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttendanceWin_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttendanceWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttendanceWin_t qt_meta_stringdata_AttendanceWin = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AttendanceWin"
QT_MOC_LITERAL(1, 14, 5), // "query"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "cv::Mat&"
QT_MOC_LITERAL(4, 30, 5), // "image"
QT_MOC_LITERAL(5, 36, 13), // "accept_client"
QT_MOC_LITERAL(6, 50, 9), // "read_data"
QT_MOC_LITERAL(7, 60, 11), // "recv_faceid"
QT_MOC_LITERAL(8, 72, 7), // "int64_t"
QT_MOC_LITERAL(9, 80, 6) // "faceid"

    },
    "AttendanceWin\0query\0\0cv::Mat&\0image\0"
    "accept_client\0read_data\0recv_faceid\0"
    "int64_t\0faceid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttendanceWin[] = {

 // content:
       8,       // revision
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
       5,    0,   37,    2, 0x09 /* Protected */,
       6,    0,   38,    2, 0x09 /* Protected */,
       7,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void AttendanceWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttendanceWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->query((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->accept_client(); break;
        case 2: _t->read_data(); break;
        case 3: _t->recv_faceid((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AttendanceWin::*)(cv::Mat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AttendanceWin::query)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AttendanceWin::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_AttendanceWin.data,
    qt_meta_data_AttendanceWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttendanceWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttendanceWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttendanceWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AttendanceWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void AttendanceWin::query(cv::Mat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
