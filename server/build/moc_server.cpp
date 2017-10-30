/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientSession_t {
    QByteArrayData data[17];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSession_t qt_meta_stringdata_ClientSession = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClientSession"
QT_MOC_LITERAL(1, 14, 17), // "get_server_config"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "char*"
QT_MOC_LITERAL(4, 39, 3), // "buf"
QT_MOC_LITERAL(5, 43, 12), // "socket_error"
QT_MOC_LITERAL(6, 56, 14), // "ClientSession*"
QT_MOC_LITERAL(7, 71, 1), // "c"
QT_MOC_LITERAL(8, 73, 4), // "test"
QT_MOC_LITERAL(9, 78, 18), // "send_rst_to_client"
QT_MOC_LITERAL(10, 97, 2), // "ba"
QT_MOC_LITERAL(11, 100, 12), // "simple_reply"
QT_MOC_LITERAL(12, 113, 12), // "welcom_reply"
QT_MOC_LITERAL(13, 126, 10), // "real_reply"
QT_MOC_LITERAL(14, 137, 12), // "displayError"
QT_MOC_LITERAL(15, 150, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(16, 179, 11) // "socketError"

    },
    "ClientSession\0get_server_config\0\0char*\0"
    "buf\0socket_error\0ClientSession*\0c\0"
    "test\0send_rst_to_client\0ba\0simple_reply\0"
    "welcom_reply\0real_reply\0displayError\0"
    "QAbstractSocket::SocketError\0socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   65,    2, 0x0a /* Public */,
       5,    0,   66,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x0a /* Public */,
      14,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void ClientSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientSession *_t = static_cast<ClientSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->get_server_config((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->socket_error((*reinterpret_cast< ClientSession*(*)>(_a[1]))); break;
        case 2: _t->test(); break;
        case 3: _t->socket_error(); break;
        case 4: _t->send_rst_to_client((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->simple_reply(); break;
        case 6: _t->welcom_reply(); break;
        case 7: _t->real_reply(); break;
        case 8: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientSession* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (ClientSession::*_t)(char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::get_server_config)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientSession::*_t)(ClientSession * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSession::socket_error)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ClientSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientSession.data,
      qt_meta_data_ClientSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSession.stringdata0))
        return static_cast<void*>(const_cast< ClientSession*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
int ClientSession::get_server_config(char * _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ClientSession::socket_error(ClientSession * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 22), // "handle_incomimg_client"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "delete_client"
QT_MOC_LITERAL(4, 45, 14), // "ClientSession*"
QT_MOC_LITERAL(5, 60, 1), // "c"
QT_MOC_LITERAL(6, 62, 15), // "output_2_client"
QT_MOC_LITERAL(7, 78, 2) // "ba"

    },
    "Server\0handle_incomimg_client\0\0"
    "delete_client\0ClientSession*\0c\0"
    "output_2_client\0ba"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_incomimg_client(); break;
        case 1: _t->delete_client((*reinterpret_cast< ClientSession*(*)>(_a[1]))); break;
        case 2: _t->output_2_client((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientSession* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata0))
        return static_cast<void*>(const_cast< Server*>(this));
    return QObject::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
