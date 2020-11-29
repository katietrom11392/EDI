/****************************************************************************
** Meta object code from reading C++ file 'controltab_vieweditteamwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../EDI/controltab_vieweditteamwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controltab_vieweditteamwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlTab_ViewEditTeamWindow_t {
    QByteArrayData data[9];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlTab_ViewEditTeamWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlTab_ViewEditTeamWindow_t qt_meta_stringdata_ControlTab_ViewEditTeamWindow = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ControlTab_ViewEditTeamWindow"
QT_MOC_LITERAL(1, 30, 30), // "on_pushButton_editMode_clicked"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 33), // "on_pushButton_saveChanges_cli..."
QT_MOC_LITERAL(4, 96, 28), // "on_pushButton_addNew_clicked"
QT_MOC_LITERAL(5, 125, 28), // "on_pushButton_remove_clicked"
QT_MOC_LITERAL(6, 154, 28), // "on_pushButton_assign_clicked"
QT_MOC_LITERAL(7, 183, 34), // "on_pushButton_changeStatus_cl..."
QT_MOC_LITERAL(8, 218, 32) // "on_pushButton_removeProj_clicked"

    },
    "ControlTab_ViewEditTeamWindow\0"
    "on_pushButton_editMode_clicked\0\0"
    "on_pushButton_saveChanges_clicked\0"
    "on_pushButton_addNew_clicked\0"
    "on_pushButton_remove_clicked\0"
    "on_pushButton_assign_clicked\0"
    "on_pushButton_changeStatus_clicked\0"
    "on_pushButton_removeProj_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlTab_ViewEditTeamWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ControlTab_ViewEditTeamWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlTab_ViewEditTeamWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_editMode_clicked(); break;
        case 1: _t->on_pushButton_saveChanges_clicked(); break;
        case 2: _t->on_pushButton_addNew_clicked(); break;
        case 3: _t->on_pushButton_remove_clicked(); break;
        case 4: _t->on_pushButton_assign_clicked(); break;
        case 5: _t->on_pushButton_changeStatus_clicked(); break;
        case 6: _t->on_pushButton_removeProj_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ControlTab_ViewEditTeamWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ControlTab_ViewEditTeamWindow.data,
    qt_meta_data_ControlTab_ViewEditTeamWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlTab_ViewEditTeamWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlTab_ViewEditTeamWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlTab_ViewEditTeamWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlTab_ViewEditTeamWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
