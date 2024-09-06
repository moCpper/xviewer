/****************************************************************************
** Meta object code from reading C++ file 'xviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../xviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XViewer_t {
    QByteArrayData data[21];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XViewer_t qt_meta_stringdata_XViewer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "XViewer"
QT_MOC_LITERAL(1, 8, 9), // "MaxWindow"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "NormalWindow"
QT_MOC_LITERAL(4, 32, 5), // "View1"
QT_MOC_LITERAL(5, 38, 5), // "View4"
QT_MOC_LITERAL(6, 44, 5), // "View9"
QT_MOC_LITERAL(7, 50, 6), // "View16"
QT_MOC_LITERAL(8, 57, 6), // "AddCam"
QT_MOC_LITERAL(9, 64, 6), // "SetCam"
QT_MOC_LITERAL(10, 71, 6), // "DelCam"
QT_MOC_LITERAL(11, 78, 11), // "StartRecord"
QT_MOC_LITERAL(12, 90, 10), // "StopRecord"
QT_MOC_LITERAL(13, 101, 7), // "Preview"
QT_MOC_LITERAL(14, 109, 8), // "Playback"
QT_MOC_LITERAL(15, 118, 12), // "SelectCamera"
QT_MOC_LITERAL(16, 131, 11), // "QModelIndex"
QT_MOC_LITERAL(17, 143, 5), // "index"
QT_MOC_LITERAL(18, 149, 10), // "SelectDate"
QT_MOC_LITERAL(19, 160, 4), // "date"
QT_MOC_LITERAL(20, 165, 9) // "PlayVideo"

    },
    "XViewer\0MaxWindow\0\0NormalWindow\0View1\0"
    "View4\0View9\0View16\0AddCam\0SetCam\0"
    "DelCam\0StartRecord\0StopRecord\0Preview\0"
    "Playback\0SelectCamera\0QModelIndex\0"
    "index\0SelectDate\0date\0PlayVideo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    1,  107,    2, 0x0a /* Public */,
      18,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QDate,   19,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void XViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MaxWindow(); break;
        case 1: _t->NormalWindow(); break;
        case 2: _t->View1(); break;
        case 3: _t->View4(); break;
        case 4: _t->View9(); break;
        case 5: _t->View16(); break;
        case 6: _t->AddCam(); break;
        case 7: _t->SetCam(); break;
        case 8: _t->DelCam(); break;
        case 9: _t->StartRecord(); break;
        case 10: _t->StopRecord(); break;
        case 11: _t->Preview(); break;
        case 12: _t->Playback(); break;
        case 13: _t->SelectCamera((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 14: _t->SelectDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 15: _t->PlayVideo((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_XViewer.data,
    qt_meta_data_XViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XViewer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
