/****************************************************************************
** Meta object code from reading C++ file 'updatesitebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../siteAdmin/updatesitebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatesitebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_updateSiteBox_t {
    QByteArrayData data[7];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_updateSiteBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_updateSiteBox_t qt_meta_stringdata_updateSiteBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "updateSiteBox"
QT_MOC_LITERAL(1, 14, 28), // "on_confirmAddSiteBtn_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "on_nomSiteEdit_textChanged"
QT_MOC_LITERAL(4, 71, 4), // "arg1"
QT_MOC_LITERAL(5, 76, 27), // "on_lieuSiteEdit_textChanged"
QT_MOC_LITERAL(6, 104, 28) // "on_tarifSiteEdit_textChanged"

    },
    "updateSiteBox\0on_confirmAddSiteBtn_clicked\0"
    "\0on_nomSiteEdit_textChanged\0arg1\0"
    "on_lieuSiteEdit_textChanged\0"
    "on_tarifSiteEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_updateSiteBox[] = {

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

void updateSiteBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        updateSiteBox *_t = static_cast<updateSiteBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_confirmAddSiteBtn_clicked(); break;
        case 1: _t->on_nomSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lieuSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_tarifSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject updateSiteBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_updateSiteBox.data,
      qt_meta_data_updateSiteBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *updateSiteBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *updateSiteBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_updateSiteBox.stringdata0))
        return static_cast<void*>(const_cast< updateSiteBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int updateSiteBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
