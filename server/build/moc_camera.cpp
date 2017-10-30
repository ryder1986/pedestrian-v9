/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 14), // "restart_source"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "output"
QT_MOC_LITERAL(4, 30, 2), // "ba"
QT_MOC_LITERAL(5, 33, 7), // "Camera*"
QT_MOC_LITERAL(6, 41, 4), // "addr"
QT_MOC_LITERAL(7, 46, 14), // "handler_output"
QT_MOC_LITERAL(8, 61, 21), // "tick_check_frame_rate"
QT_MOC_LITERAL(9, 83, 13), // "restart_video"
QT_MOC_LITERAL(10, 97, 4) // "work"

    },
    "Camera\0restart_source\0\0output\0ba\0"
    "Camera*\0addr\0handler_output\0"
    "tick_check_frame_rate\0restart_video\0"
    "work"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restart_source(); break;
        case 1: _t->output((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< Camera*(*)>(_a[2]))); break;
        case 2: _t->handler_output((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->tick_check_frame_rate(); break;
        case 4: _t->restart_video(); break;
        case 5: { bool _r = _t->work();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Camera* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Camera::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Camera::restart_source)) {
                *result = 0;
            }
        }
        {
            typedef void (Camera::*_t)(QByteArray , Camera * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Camera::output)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Camera::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Camera.data,
      qt_meta_data_Camera,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(const_cast< Camera*>(this));
    return QThread::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Camera::restart_source()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Camera::output(QByteArray _t1, Camera * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CameraManager_t {
    QByteArrayData data[20];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraManager_t qt_meta_stringdata_CameraManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CameraManager"
QT_MOC_LITERAL(1, 14, 15), // "output_2_client"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "ba"
QT_MOC_LITERAL(4, 34, 13), // "camera_output"
QT_MOC_LITERAL(5, 48, 7), // "Camera*"
QT_MOC_LITERAL(6, 56, 1), // "c"
QT_MOC_LITERAL(7, 58, 10), // "add_camera"
QT_MOC_LITERAL(8, 69, 3), // "buf"
QT_MOC_LITERAL(9, 73, 19), // "add_camera_internal"
QT_MOC_LITERAL(10, 93, 5), // "index"
QT_MOC_LITERAL(11, 99, 19), // "del_camera_internal"
QT_MOC_LITERAL(12, 119, 2), // "ip"
QT_MOC_LITERAL(13, 122, 10), // "del_camera"
QT_MOC_LITERAL(14, 133, 6), // "cam_no"
QT_MOC_LITERAL(15, 140, 13), // "modify_camera"
QT_MOC_LITERAL(16, 154, 10), // "get_config"
QT_MOC_LITERAL(17, 165, 5), // "char*"
QT_MOC_LITERAL(18, 171, 1), // "i"
QT_MOC_LITERAL(19, 173, 8) // "get_size"

    },
    "CameraManager\0output_2_client\0\0ba\0"
    "camera_output\0Camera*\0c\0add_camera\0"
    "buf\0add_camera_internal\0index\0"
    "del_camera_internal\0ip\0del_camera\0"
    "cam_no\0modify_camera\0get_config\0char*\0"
    "i\0get_size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   82,    2, 0x0a /* Public */,
       7,    1,   87,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x0a /* Public */,
       7,    1,   97,    2, 0x0a /* Public */,
      13,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      16,    1,  106,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      16,    1,  110,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 5,    3,    6,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Int, 0x80000000 | 17,    6,
    QMetaType::QString,
    QMetaType::QByteArray, QMetaType::Int,   18,
    QMetaType::Int,

       0        // eod
};

void CameraManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraManager *_t = static_cast<CameraManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->output_2_client((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->camera_output((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< Camera*(*)>(_a[2]))); break;
        case 2: _t->add_camera((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->add_camera_internal(); break;
        case 4: _t->add_camera_internal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->del_camera_internal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->add_camera((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->del_camera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->modify_camera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { int _r = _t->get_config((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->get_config();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QByteArray _r = _t->get_config((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->get_size();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Camera* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CameraManager::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraManager::output_2_client)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CameraManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CameraManager.data,
      qt_meta_data_CameraManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraManager.stringdata0))
        return static_cast<void*>(const_cast< CameraManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CameraManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CameraManager::output_2_client(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
