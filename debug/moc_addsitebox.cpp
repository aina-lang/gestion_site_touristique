/****************************************************************************
** Meta object code from reading C++ file 'addsitebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../siteAdmin/addsitebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addsitebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addSiteBox_t {
    QByteArrayData data[9];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addSiteBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addSiteBox_t qt_meta_stringdata_addSiteBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "addSiteBox"
QT_MOC_LITERAL(1, 11, 22), // "on_addSiteBox_accepted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 28), // "on_confirmAddSiteBtn_clicked"
QT_MOC_LITERAL(4, 64, 26), // "on_nomSiteEdit_textChanged"
QT_MOC_LITERAL(5, 91, 4), // "arg1"
QT_MOC_LITERAL(6, 96, 27), // "on_lieuSiteEdit_textChanged"
QT_MOC_LITERAL(7, 124, 28), // "on_tarifSiteEdit_textChanged"
QT_MOC_LITERAL(8, 153, 16) // "on_Reset_clicked"

    },
    "addSiteBox\0on_addSiteBox_accepted\0\0"
    "on_confirmAddSiteBtn_clicked\0"
    "on_nomSiteEdit_textChanged\0arg1\0"
    "on_lieuSiteEdit_textChanged\0"
    "on_tarifSiteEdit_textChanged\0"
    "on_Reset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addSiteBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void addSiteBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addSiteBox *_t = static_cast<addSiteBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->on_confirmAddSiteBtn_clicked(); break;
        case 2: _t->on_nomSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lieuSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_tarifSiteEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Reset_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject addSiteBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addSiteBox.data,
      qt_meta_data_addSiteBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addSiteBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addSiteBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addSiteBox.stringdata0))
        return static_cast<void*>(const_cast< addSiteBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int addSiteBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
