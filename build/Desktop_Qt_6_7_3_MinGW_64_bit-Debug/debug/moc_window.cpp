/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindowENDCLASS = QtMocHelpers::stringData(
    "Window",
    "localeChanged",
    "",
    "index",
    "firstDayChanged",
    "selectionModeChanged",
    "horizontalHeaderChanged",
    "verticalHeaderChanged",
    "selectedDateChanged",
    "minimumDateChanged",
    "date",
    "maximumDateChanged",
    "weekendFormatChanged",
    "reformatHeaders",
    "reformatCalendarPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       4,    1,   83,    2, 0x08,    3 /* Private */,
       5,    1,   86,    2, 0x08,    5 /* Private */,
       6,    1,   89,    2, 0x08,    7 /* Private */,
       7,    1,   92,    2, 0x08,    9 /* Private */,
       8,    0,   95,    2, 0x08,   11 /* Private */,
       9,    1,   96,    2, 0x08,   12 /* Private */,
      11,    1,   99,    2, 0x08,   14 /* Private */,
      12,    0,  102,    2, 0x08,   16 /* Private */,
      13,    0,  103,    2, 0x08,   17 /* Private */,
      14,    0,  104,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   10,
    QMetaType::Void, QMetaType::QDate,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Window, std::true_type>,
        // method 'localeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'firstDayChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectionModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'horizontalHeaderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'verticalHeaderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectedDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimumDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'maximumDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'weekendFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reformatHeaders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reformatCalendarPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->firstDayChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->selectionModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->horizontalHeaderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->verticalHeaderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->selectedDateChanged(); break;
        case 6: _t->minimumDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 7: _t->maximumDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 8: _t->weekendFormatChanged(); break;
        case 9: _t->reformatHeaders(); break;
        case 10: _t->reformatCalendarPage(); break;
        default: ;
        }
    }
}

const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
