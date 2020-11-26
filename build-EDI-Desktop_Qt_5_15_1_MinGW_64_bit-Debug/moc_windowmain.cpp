/****************************************************************************
** Meta object code from reading C++ file 'windowmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../EDI/windowmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowMain_t {
    QByteArrayData data[19];
    char stringdata0[517];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowMain_t qt_meta_stringdata_WindowMain = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WindowMain"
QT_MOC_LITERAL(1, 11, 40), // "on_pushButton_vieweditemploye..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(4, 81, 5), // "index"
QT_MOC_LITERAL(5, 87, 28), // "on_pushButton_LogOut_clicked"
QT_MOC_LITERAL(6, 116, 36), // "on_pushButton_SearchEmployee_..."
QT_MOC_LITERAL(7, 153, 27), // "on_pushButton_Reset_clicked"
QT_MOC_LITERAL(8, 181, 32), // "on_pushButton_SearchTeam_clicked"
QT_MOC_LITERAL(9, 214, 31), // "on_pushButton_TeamReset_clicked"
QT_MOC_LITERAL(10, 246, 29), // "on_pushButton_newTeam_clicked"
QT_MOC_LITERAL(11, 276, 34), // "on_pushButton_viewEditTeam_cl..."
QT_MOC_LITERAL(12, 311, 32), // "on_pushButton_noEmployee_clicked"
QT_MOC_LITERAL(13, 344, 36), // "on_pushButton_noTeamSelected_..."
QT_MOC_LITERAL(14, 381, 33), // "on_pushButton_SearchField_cli..."
QT_MOC_LITERAL(15, 415, 32), // "on_pushButton_tooManyEmp_clicked"
QT_MOC_LITERAL(16, 448, 34), // "on_pushButton_tooManyTeams_cl..."
QT_MOC_LITERAL(17, 483, 28), // "on_calendarWidget1_2_clicked"
QT_MOC_LITERAL(18, 512, 4) // "date"

    },
    "WindowMain\0on_pushButton_vieweditemployee_2_clicked\0"
    "\0on_tabWidget_currentChanged\0index\0"
    "on_pushButton_LogOut_clicked\0"
    "on_pushButton_SearchEmployee_clicked\0"
    "on_pushButton_Reset_clicked\0"
    "on_pushButton_SearchTeam_clicked\0"
    "on_pushButton_TeamReset_clicked\0"
    "on_pushButton_newTeam_clicked\0"
    "on_pushButton_viewEditTeam_clicked\0"
    "on_pushButton_noEmployee_clicked\0"
    "on_pushButton_noTeamSelected_clicked\0"
    "on_pushButton_SearchField_clicked\0"
    "on_pushButton_tooManyEmp_clicked\0"
    "on_pushButton_tooManyTeams_clicked\0"
    "on_calendarWidget1_2_clicked\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    1,   90,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
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
    QMetaType::Void, QMetaType::QDate,   18,

       0        // eod
};

void WindowMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_vieweditemployee_2_clicked(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_LogOut_clicked(); break;
        case 3: _t->on_pushButton_SearchEmployee_clicked(); break;
        case 4: _t->on_pushButton_Reset_clicked(); break;
        case 5: _t->on_pushButton_SearchTeam_clicked(); break;
        case 6: _t->on_pushButton_TeamReset_clicked(); break;
        case 7: _t->on_pushButton_newTeam_clicked(); break;
        case 8: _t->on_pushButton_viewEditTeam_clicked(); break;
        case 9: _t->on_pushButton_noEmployee_clicked(); break;
        case 10: _t->on_pushButton_noTeamSelected_clicked(); break;
        case 11: _t->on_pushButton_SearchField_clicked(); break;
        case 12: _t->on_pushButton_tooManyEmp_clicked(); break;
        case 13: _t->on_pushButton_tooManyTeams_clicked(); break;
        case 14: _t->on_calendarWidget1_2_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WindowMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WindowMain.data,
    qt_meta_data_WindowMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowMain.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WindowMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
