/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClientENDCLASS = QtMocHelpers::stringData(
    "Client",
    "on_addClientButton_clicked",
    "",
    "on_uploadImageButton_clicked",
    "onModifyButtonClicked",
    "onDeleteButtonClicked",
    "on_deleteImageButton_clicked",
    "on_searchButton_clicked",
    "on_searchLineEdit_returnPressed",
    "on_sortComboBox_currentIndexChanged",
    "index",
    "on_sortOrderButton_clicked",
    "on_pdfLabel_doubleClicked",
    "on_uploadPdfButton_clicked",
    "onPdfPageRendered",
    "pageNumber",
    "imageSize",
    "image",
    "loadStatistics"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    0,   95,    2, 0x0a,    4 /* Public */,
       6,    0,   96,    2, 0x0a,    5 /* Public */,
       7,    0,   97,    2, 0x0a,    6 /* Public */,
       8,    0,   98,    2, 0x0a,    7 /* Public */,
       9,    1,   99,    2, 0x0a,    8 /* Public */,
      11,    0,  102,    2, 0x0a,   10 /* Public */,
      12,    0,  103,    2, 0x0a,   11 /* Public */,
      13,    0,  104,    2, 0x0a,   12 /* Public */,
      14,    3,  105,    2, 0x0a,   13 /* Public */,
      18,    0,  112,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QSize, QMetaType::QImage,   15,   16,   17,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'on_addClientButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uploadImageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModifyButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteImageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchLineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sortComboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sortOrderButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pdfLabel_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uploadPdfButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPdfPageRendered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSize, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'loadStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addClientButton_clicked(); break;
        case 1: _t->on_uploadImageButton_clicked(); break;
        case 2: _t->onModifyButtonClicked(); break;
        case 3: _t->onDeleteButtonClicked(); break;
        case 4: _t->on_deleteImageButton_clicked(); break;
        case 5: _t->on_searchButton_clicked(); break;
        case 6: _t->on_searchLineEdit_returnPressed(); break;
        case 7: _t->on_sortComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_sortOrderButton_clicked(); break;
        case 9: _t->on_pdfLabel_doubleClicked(); break;
        case 10: _t->on_uploadPdfButton_clicked(); break;
        case 11: _t->onPdfPageRendered((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[3]))); break;
        case 12: _t->loadStatistics(); break;
        default: ;
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
