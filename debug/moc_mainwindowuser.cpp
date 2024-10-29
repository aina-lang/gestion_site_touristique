/****************************************************************************
** Meta object code from reading C++ file 'mainwindowuser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../userAdmin/mainwindowuser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowuser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainwindowUser_t {
    QByteArrayData data[16];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainwindowUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainwindowUser_t qt_meta_stringdata_MainwindowUser = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainwindowUser"
QT_MOC_LITERAL(1, 15, 34), // "on_toSiteAdministrationBtn_cl..."
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 24), // "on_updateUserBtn_clicked"
QT_MOC_LITERAL(4, 76, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(5, 97, 5), // "index"
QT_MOC_LITERAL(6, 103, 21), // "on_addUserBtn_clicked"
QT_MOC_LITERAL(7, 125, 28), // "on_confirmAddUserBtn_clicked"
QT_MOC_LITERAL(8, 154, 21), // "on_restoreBtn_clicked"
QT_MOC_LITERAL(9, 176, 24), // "on_deleteUserBtn_clicked"
QT_MOC_LITERAL(10, 201, 29), // "on_searchUserEdit_textChanged"
QT_MOC_LITERAL(11, 231, 4), // "arg1"
QT_MOC_LITERAL(12, 236, 20), // "on_logoutBtn_clicked"
QT_MOC_LITERAL(13, 257, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 279, 23), // "on_modifUserBtn_clicked"
QT_MOC_LITERAL(15, 303, 27) // "on_toSiteGestionBtn_clicked"

    },
    "MainwindowUser\0on_toSiteAdministrationBtn_clicked\0"
    "\0on_updateUserBtn_clicked\0"
    "on_tableView_clicked\0index\0"
    "on_addUserBtn_clicked\0"
    "on_confirmAddUserBtn_clicked\0"
    "on_restoreBtn_clicked\0on_deleteUserBtn_clicked\0"
    "on_searchUserEdit_textChanged\0arg1\0"
    "on_logoutBtn_clicked\0on_pushButton_clicked\0"
    "on_modifUserBtn_clicked\0"
    "on_toSiteGestionBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainwindowUser[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainwindowUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainwindowUser *_t = static_cast<MainwindowUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_addUserBtn_clicked(); break;
        case 4: _t->on_confirmAddUserBtn_clicked(); break;
        case 5: _t->on_restoreBtn_clicked(); break;
        case 6: _t->on_deleteUserBtn_clicked(); break;
        case 7: _t->on_searchUserEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_logoutBtn_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_modifUserBtn_clicked(); break;
        case 11: _t->on_toSiteGestionBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainwindowUser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainwindowUser.data,
      qt_meta_data_MainwindowUser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainwindowUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainwindowUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainwindowUser.stringdata0))
        return static_cast<void*>(const_cast< MainwindowUser*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainwindowUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
