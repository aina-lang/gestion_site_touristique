/****************************************************************************
** Meta object code from reading C++ file 'updatevisiteurbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../siteAdmin/updatevisiteurbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatevisiteurbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_updateVisiteurBox_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_updateVisiteurBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_updateVisiteurBox_t qt_meta_stringdata_updateVisiteurBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "updateVisiteurBox"
QT_MOC_LITERAL(1, 18, 31), // "on_confirmUpdateSiteBtn_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 30), // "on_nomVisiteurEdit_textChanged"
QT_MOC_LITERAL(4, 82, 4), // "arg1"
QT_MOC_LITERAL(5, 87, 34), // "on_adresseVisiteurEdit_textCh..."
QT_MOC_LITERAL(6, 122, 25) // "on_provenance_textChanged"

    },
    "updateVisiteurBox\0on_confirmUpdateSiteBtn_clicked\0"
    "\0on_nomVisiteurEdit_textChanged\0arg1\0"
    "on_adresseVisiteurEdit_textChanged\0"
    "on_provenance_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_updateVisiteurBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void updateVisiteurBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        updateVisiteurBox *_t = static_cast<updateVisiteurBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_confirmUpdateSiteBtn_clicked(); break;
        case 1: _t->on_nomVisiteurEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_adresseVisiteurEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_provenance_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject updateVisiteurBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_updateVisiteurBox.data,
      qt_meta_data_updateVisiteurBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *updateVisiteurBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *updateVisiteurBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_updateVisiteurBox.stringdata0))
        return static_cast<void*>(const_cast< updateVisiteurBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int updateVisiteurBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE