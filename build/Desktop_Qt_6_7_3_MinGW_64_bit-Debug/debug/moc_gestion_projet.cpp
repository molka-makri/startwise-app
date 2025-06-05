/****************************************************************************
** Meta object code from reading C++ file 'gestion_projet.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gestion_projet.h"
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
#error "The header file 'gestion_projet.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSgestion_projetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSgestion_projetENDCLASS = QtMocHelpers::stringData(
    "gestion_projet",
    "refreshMap",
    "",
    "on_ajouter_clicked",
    "on_supprimer_clicked",
    "on_tableView_activated",
    "QModelIndex",
    "index",
    "on_modifier_clicked",
    "on_UploadPDF_clicked",
    "on_OuvrirPDF_clicked",
    "on_etatComboBox_changed",
    "on_rechercherButton_clicked",
    "on_rechercheLineEdit_textChanged",
    "text",
    "on_stat_clicked",
    "genererPDFProjets",
    "on_searchLocationButton_clicked",
    "on_projectNameComboBox_currentIndexChanged",
    "geocodeLocation",
    "QGeoCoordinate",
    "locationName",
    "on_sendButton_clicked",
    "on_send_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSgestion_projetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x0a,    1 /* Public */,
       3,    0,  117,    2, 0x08,    2 /* Private */,
       4,    0,  118,    2, 0x08,    3 /* Private */,
       5,    1,  119,    2, 0x08,    4 /* Private */,
       8,    0,  122,    2, 0x08,    6 /* Private */,
       9,    0,  123,    2, 0x08,    7 /* Private */,
      10,    0,  124,    2, 0x08,    8 /* Private */,
      11,    1,  125,    2, 0x08,    9 /* Private */,
      12,    0,  128,    2, 0x08,   11 /* Private */,
      13,    1,  129,    2, 0x08,   12 /* Private */,
      15,    0,  132,    2, 0x08,   14 /* Private */,
      16,    0,  133,    2, 0x08,   15 /* Private */,
      17,    0,  134,    2, 0x08,   16 /* Private */,
      18,    1,  135,    2, 0x08,   17 /* Private */,
      19,    1,  138,    2, 0x08,   19 /* Private */,
      22,    0,  141,    2, 0x08,   21 /* Private */,
      23,    0,  142,    2, 0x08,   22 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    0x80000000 | 20, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gestion_projet::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSgestion_projetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSgestion_projetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSgestion_projetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gestion_projet, std::true_type>,
        // method 'refreshMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ajouter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_supprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_modifier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_UploadPDF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_OuvrirPDF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_etatComboBox_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_rechercherButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rechercheLineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'genererPDFProjets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchLocationButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_projectNameComboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'geocodeLocation'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_sendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gestion_projet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gestion_projet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshMap(); break;
        case 1: _t->on_ajouter_clicked(); break;
        case 2: _t->on_supprimer_clicked(); break;
        case 3: _t->on_tableView_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_modifier_clicked(); break;
        case 5: _t->on_UploadPDF_clicked(); break;
        case 6: _t->on_OuvrirPDF_clicked(); break;
        case 7: _t->on_etatComboBox_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_rechercherButton_clicked(); break;
        case 9: _t->on_rechercheLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_stat_clicked(); break;
        case 11: _t->genererPDFProjets(); break;
        case 12: _t->on_searchLocationButton_clicked(); break;
        case 13: _t->on_projectNameComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: { QGeoCoordinate _r = _t->geocodeLocation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->on_sendButton_clicked(); break;
        case 16: _t->on_send_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *gestion_projet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_projet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSgestion_projetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gestion_projet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
