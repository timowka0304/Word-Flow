/****************************************************************************
** Meta object code from reading C++ file 'allmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Word-Flow/allmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AllMenu_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AllMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AllMenu_t qt_meta_stringdata_AllMenu = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AllMenu"
QT_MOC_LITERAL(1, 8, 8), // "MainMenu"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 27), // "on_menu_back_Button_clicked"
QT_MOC_LITERAL(4, 46, 26), // "on_dic_show_Button_clicked"
QT_MOC_LITERAL(5, 73, 26), // "on_hide_dic_Button_clicked"
QT_MOC_LITERAL(6, 100, 27) // "on_lets_test_Button_clicked"

    },
    "AllMenu\0MainMenu\0\0on_menu_back_Button_clicked\0"
    "on_dic_show_Button_clicked\0"
    "on_hide_dic_Button_clicked\0"
    "on_lets_test_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AllMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AllMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AllMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainMenu(); break;
        case 1: _t->on_menu_back_Button_clicked(); break;
        case 2: _t->on_dic_show_Button_clicked(); break;
        case 3: _t->on_hide_dic_Button_clicked(); break;
        case 4: _t->on_lets_test_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AllMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllMenu::MainMenu)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AllMenu::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AllMenu.data,
    qt_meta_data_AllMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AllMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AllMenu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AllMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AllMenu::MainMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
