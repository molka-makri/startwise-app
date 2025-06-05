/********************************************************************************
** Form generated from reading UI file 'ressources.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESSOURCES_H
#define UI_RESSOURCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Res
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGroupBox *groupBox;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditCout;
    QLineEdit *lineEditQuantite;
    QDateTimeEdit *dateEditAcquisition;
    QLabel *label;
    QRadioButton *radioButtonEnPanne;
    QRadioButton *radioButtonEnmarche;
    QPushButton *btnAjouter;
    QComboBox *comboBoxType;
    QLineEdit *lineEditID;
    QLabel *label_24;
    QLineEdit *labelImage;
    QPushButton *btnImage;
    QLabel *label_25;
    QLabel *labelErrorID;
    QLabel *labelErrorNom;
    QLabel *labelErrorImage;
    QLabel *labelErrorQuantite;
    QLabel *labelErrorCout;
    QLabel *labelErrorType;
    QWidget *tab_3;
    QTableWidget *tableViewRessources;
    QPushButton *exportExel;
    QLineEdit *lineEditRecherche;
    QPushButton *btnRecherche;
    QPushButton *btnResetRecherche;
    QWidget *tab_2;
    QWidget *widgetChart;
    QPushButton *btnExportPDF;
    QLabel *label_7;
    QPushButton *lire;
    QWidget *pdf_generer;
    QWidget *tab_5;
    QGroupBox *groupBox_4;
    QComboBox *comboVoix;
    QPushButton *btnReprendre;
    QComboBox *comboMoteur;
    QPushButton *btnPause;
    QPushButton *btnParler;
    QComboBox *comboLangue;
    QTextEdit *textEdit_3;
    QPushButton *btnArreter;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_20;
    QSlider *sliderVitesse;
    QSlider *horizontalSlider_6;
    QSlider *sliderVolume;
    QWidget *tab_6;
    QPushButton *btnDetect;
    QLabel *label_10;
    QLabel *label_9;
    QPushButton *btnWebcamOpen;
    QLabel *label_8;
    QLabel *label_11;
    QPushButton *btnUpload;
    QLabel *labelImageDisplay;
    QPushButton *recordphone;

    void setupUi(QDialog *Res)
    {
        if (Res->objectName().isEmpty())
            Res->setObjectName("Res");
        Res->resize(1148, 654);
        tabWidget = new QTabWidget(Res);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1041, 531));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    background-color: rgb(255, 255, 255); /* Fond blanc */\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"QTabBar::tab {\n"
"    background: rgb(200, 200, 200); /* Couleur de fond des onglets */\n"
"    border: 1px solid #aaa;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #3498db;  /* Couleur de fond quand l'onglet est s\303\251lectionn\303\251 */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #2980b9; /* Couleur de fond quand l'onglet est survol\303\251 */\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    cursor: pointer;\n"
""
                        "}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #005a9e;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003d6a;\n"
"}\n"
"QWidget {\n"
"    \n"
"    color:  rgb(255, 255, 255);\n"
"    font-size: 16px;\n"
"    font-family: \"Segoe UI\", Arial, sans-serif;\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        widget = new QWidget(tab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1021, 471));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-10, 0, 1031, 471));
        groupBox->setStyleSheet(QString::fromUtf8("/* Style pour le QGroupBox */\n"
"QGroupBox {\n"
"    background-color: #f9f9f9;\n"
"    border: 2px solid #0078d4;\n"
"    border-radius: 8px;\n"
"    padding: 15px;\n"
"    margin: 10px;\n"
"}\n"
"\n"
"/* Titre du QGroupBox */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #0078d4;\n"
"}\n"
"\n"
"/* Labels \303\240 l'int\303\251rieur du QGroupBox */\n"
"QGroupBox QLabel {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"/* Textes d'entr\303\251es \303\240 l'int\303\251rieur du QGroupBox */\n"
"QGroupBox QLineEdit,\n"
"QGroupBox QDateEdit, \n"
"QGroupBox QTimeEdit {\n"
"    background-color: #f5f5f5;\n"
"	color: black;\n"
"    border: 1px solid #ccc;\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* Focus sur QLineEdit, QDateEdit, QTimeEdit */\n"
"QGroupBox QLin"
                        "eEdit:focus, \n"
"QGroupBox QDateEdit:focus, \n"
"QGroupBox QTimeEdit:focus {\n"
"    border-color: #0078d4;\n"
"    background-color: #e6f0ff;\n"
"}\n"
"\n"
"/* Placeholders dans les champs de texte */\n"
"QGroupBox QLineEdit::placeholder, \n"
"QGroupBox QDateEdit::placeholder, \n"
"QGroupBox QTimeEdit::placeholder {\n"
"    color: black; /* D\303\251finit la couleur des placeholders \303\240 noir */\n"
"    font-style: italic;\n"
"}\n"
"\n"
"/* Boutons radio dans le QGroupBox */\n"
"QGroupBox QRadioButton {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator {\n"
"    width: 15px;\n"
"    height: 15px;\n"
"    border: 2px solid #0078d4;\n"
"    background-color: #e6e6e6;  /* Arri\303\250re-plan gris clair */\n"
"    border-radius: 50%;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator:checked {\n"
"    background-color: #0078d4;\n"
"    border: 2px solid #0078d4;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator:unchecked {\n"
"    background-color: #e6e6e6;\n"
"    "
                        "border: 2px solid #ccc;\n"
"}\n"
"\n"
"/* Boutons dans le QGroupBox */\n"
"QGroupBox QPushButton {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QGroupBox QPushButton:hover {\n"
"    background-color: #005a9e;\n"
"}\n"
"\n"
"QGroupBox QPushButton:pressed {\n"
"    background-color: #003d6a;\n"
"}\n"
"\n"
"/* Progress Bar dans le QGroupBox */\n"
"QGroupBox QProgressBar {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"    background-color: #f5f5f5;\n"
"    color: black;\n"
"}\n"
"\n"
"QGroupBox QProgressBar::chunk {\n"
"    background-color: #0078d4;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        lineEditNom = new QLineEdit(groupBox);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(690, 60, 161, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(245, 245, 245, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(95, 95, 95, 255));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        lineEditNom->setPalette(palette);
        lineEditNom->setStyleSheet(QString::fromUtf8(""));
        lineEditCout = new QLineEdit(groupBox);
        lineEditCout->setObjectName("lineEditCout");
        lineEditCout->setGeometry(QRect(450, 240, 161, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(74, 74, 74, 255));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lineEditCout->setPalette(palette1);
        lineEditQuantite = new QLineEdit(groupBox);
        lineEditQuantite->setObjectName("lineEditQuantite");
        lineEditQuantite->setGeometry(QRect(690, 170, 161, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lineEditQuantite->setPalette(palette2);
        dateEditAcquisition = new QDateTimeEdit(groupBox);
        dateEditAcquisition->setObjectName("dateEditAcquisition");
        dateEditAcquisition->setGeometry(QRect(590, 310, 261, 31));
        dateEditAcquisition->setStyleSheet(QString::fromUtf8("QDateTimeEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #1E3A8A; /* Bleu roi */\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #1E3A8A;\n"
"}\n"
"\n"
"QDateTimeEdit:focus {\n"
"    border: 2px solid #2541B2; /* Bleu plus clair au focus */\n"
"}\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(660, 250, 63, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        radioButtonEnPanne = new QRadioButton(groupBox);
        radioButtonEnPanne->setObjectName("radioButtonEnPanne");
        radioButtonEnPanne->setGeometry(QRect(740, 270, 112, 26));
        radioButtonEnPanne->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"QRadioButton {\n"
"    font-size: 14px;\n"
"    color: #1E3A8A; /* Bleu roi */\n"
"    spacing: 8px; /* Espace entre le cercle et le texte */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;\n"
"    border: 2px solid #1E3A8A; /* Bordure bleu roi */\n"
"    background: white;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #2541B2; /* Bleu plus clair au survol */\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background: #1E3A8A; /* Fond bleu roi quand s\303\251lectionn\303\251 */\n"
"    border: 2px solid #1E3A8A;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked::before {\n"
"    content: \"\";\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border-radius: 5px;\n"
"    background: white; /* Point blanc au centre */\n"
"    position: absolute;\n"
"    left: 50%;\n"
"    top: 50%;\n"
"    transform: translate(-50%, -50%);\n"
"}\n"
""));
        radioButtonEnmarche = new QRadioButton(groupBox);
        radioButtonEnmarche->setObjectName("radioButtonEnmarche");
        radioButtonEnmarche->setGeometry(QRect(740, 230, 112, 26));
        radioButtonEnmarche->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        btnAjouter = new QPushButton(groupBox);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(140, 340, 191, 51));
        btnAjouter->setStyleSheet(QString::fromUtf8(""));
        comboBoxType = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/images/search-interface-symbol.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBoxType->addItem(icon, QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setGeometry(QRect(450, 170, 161, 41));
        QPalette palette3;
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(51, 51, 51, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        comboBoxType->setPalette(palette3);
        comboBoxType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    \n"
"	background-color: rgb(245, 245, 245);\n"
"    border: 1px solid rgb(150, 150, 150);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 10px;\n"
"    color: #333;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    transition: all 0.3s ease-in-out;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/black_arrow.svg);  /* Assurez-vous que l'ic\303\264ne est noire */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid rgb(0, 122, 255);\n"
"    background-color: rgb(240, 240, 240);\n"
"    box-shadow: 0 2px 6px rgba(0, 122, 255, 0.3);\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid rgb(0, 122, 255);\n"
"    background-color: rgb(255, 255, 255);\n"
"    box-shadow: 0 0 8px rgba(0, 122, 255, 0.5);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(245, 245, 245);\n"
"    border: 1px solid rgb(200, 200, 200);\n"
"    color: #333;\n"
"    selection-background-color: rgb(0, 122"
                        ", 255);\n"
"    selection-color: white;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    margin-top: 2px;\n"
"    max-height: 300px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    padding: 8px;\n"
"    color: #555;\n"
"    font-size: 14px;\n"
"    transition: background-color 0.2s ease;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    background-color: rgb(0, 122, 255);\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: rgb(0, 122, 255);  /* Survol des \303\251l\303\251ments */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Ajout de la couleur pour l'\303\251l\303\251ment s\303\251lectionn\303\251 */\n"
"QComboBox::item:selected {\n"
"    background-color: rgb(0, 122, 255);  /* Assurez-vous que la couleur de fond de l'\303\251l\303\251ment s\303\251lectionn\303\251 est bien bleue */\n"
"    color: whi"
                        "te;  /* Le texte doit \303\252tre blanc */\n"
"}\n"
""));
        lineEditID = new QLineEdit(groupBox);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(450, 60, 161, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        lineEditID->setPalette(palette4);
        lineEditID->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(groupBox);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(450, 320, 141, 20));
        label_24->setStyleSheet(QString::fromUtf8("    background-color: transparent;\n"
""));
        labelImage = new QLineEdit(groupBox);
        labelImage->setObjectName("labelImage");
        labelImage->setGeometry(QRect(450, 120, 281, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        labelImage->setPalette(palette5);
        labelImage->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #1E3A8A; /* Bleu roi */\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2541B2; /* Effet de focus */\n"
"    background-color: #E0E7FF; /* Bleu clair */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #999; /* Texte gris clair */\n"
"    font-style: italic;\n"
"}\n"
""));
        btnImage = new QPushButton(groupBox);
        btnImage->setObjectName("btnImage");
        btnImage->setGeometry(QRect(740, 120, 111, 31));
        btnImage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(0, 120, 212);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #162D6A; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2541B2; /* Bleu plus clair au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #162D6A; /* Effet de clic */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #A5B4FC;\n"
"    border-color: #818CF8;\n"
"    color: #EEEEEE;\n"
"}\n"
""));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(80, 60, 301, 201));
        label_25->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pc.png);\n"
"background-color: transparent;"));
        labelErrorID = new QLabel(groupBox);
        labelErrorID->setObjectName("labelErrorID");
        labelErrorID->setGeometry(QRect(450, 100, 161, 16));
        labelErrorID->setStyleSheet(QString::fromUtf8("  background: transparent;"));
        labelErrorNom = new QLabel(groupBox);
        labelErrorNom->setObjectName("labelErrorNom");
        labelErrorNom->setGeometry(QRect(690, 100, 191, 16));
        labelErrorNom->setStyleSheet(QString::fromUtf8("  background: transparent;"));
        labelErrorImage = new QLabel(groupBox);
        labelErrorImage->setObjectName("labelErrorImage");
        labelErrorImage->setEnabled(true);
        labelErrorImage->setGeometry(QRect(450, 150, 281, 16));
        labelErrorImage->setStyleSheet(QString::fromUtf8("  background: transparent;\n"
"color: red; \n"
"font-size: 10px; \n"
"visibility: hidden;"));
        labelErrorImage->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        labelErrorQuantite = new QLabel(groupBox);
        labelErrorQuantite->setObjectName("labelErrorQuantite");
        labelErrorQuantite->setGeometry(QRect(690, 210, 181, 16));
        labelErrorQuantite->setStyleSheet(QString::fromUtf8("  background: transparent;"));
        labelErrorCout = new QLabel(groupBox);
        labelErrorCout->setObjectName("labelErrorCout");
        labelErrorCout->setGeometry(QRect(450, 280, 191, 16));
        labelErrorCout->setStyleSheet(QString::fromUtf8("  background: transparent;"));
        labelErrorType = new QLabel(groupBox);
        labelErrorType->setObjectName("labelErrorType");
        labelErrorType->setGeometry(QRect(450, 210, 171, 16));
        labelErrorType->setStyleSheet(QString::fromUtf8("  background: transparent;"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableViewRessources = new QTableWidget(tab_3);
        tableViewRessources->setObjectName("tableViewRessources");
        tableViewRessources->setGeometry(QRect(0, 60, 1011, 401));
        tableViewRessources->setStyleSheet(QString::fromUtf8("/* Fond blanc pour le contenu des onglets avec bordure renforc\303\251e */\n"
"QTabWidget::pane {\n"
"    background-color: rgb(255, 255, 255); /* Fond blanc */\n"
"    border: 2px solid #888;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    margin-top: 5px; /* Espacement entre les onglets et le contenu */\n"
"}\n"
"\n"
"/* Style des onglets */\n"
"QTabBar::tab {\n"
"    background: rgb(230, 230, 230); /* Couleur de fond des onglets (gris clair) */\n"
"    border: 2px solid #666;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    font-weight: bold; /* Titres en gras */\n"
"    margin-right: 4px; /* Espacement entre les onglets */\n"
"    transition: background 0.3s ease; /* Transition fluide */\n"
"}\n"
"\n"
"/* Style des onglets s\303\251lectionn\303\251s */\n"
"QTabBar::tab:selected {\n"
"    background: #0078d4;  /* Couleur de fond quand l'onglet est s\303\251lectionn\303\251 */\n"
"    color: white;\n"
"    fon"
                        "t-weight: bold;\n"
"    border-bottom: 3px solid #0078d4; /* Ligne en bas pour l'onglet actif */\n"
"}\n"
"\n"
"/* Style des onglets au survol */\n"
"QTabBar::tab:hover {\n"
"    background: #005a9e; /* Couleur de fond quand l'onglet est survol\303\251 */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Style des onglets non s\303\251lectionn\303\251s */\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px;\n"
"}\n"
"\n"
"/* Style g\303\251n\303\251ral du widget */\n"
"QWidget {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: #333333;\n"
"    font-size: 16px;\n"
"    font-family: \"Segoe UI\", Arial, sans-serif;\n"
"}\n"
"\n"
"/* Style pour les tableaux */\n"
"QTableWidget {\n"
"    border: 2px solid #888;\n"
"    gridline-color: #666;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: 1px solid #666;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* Style pour les boutons plus visibles */\n"
"QPushButton {\n"
"    background-colo"
                        "r: #0078d4;\n"
"    color: white;\n"
"    padding: 12px 24px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #005a9e;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    cursor: pointer;\n"
"    transition: background 0.3s ease, box-shadow 0.3s ease;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #005a9e;\n"
"    box-shadow: 0px 6px 8px rgba(0, 0, 0, 0.25);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003d6a;\n"
"    box-shadow: 0px 2px 4px rgba(0, 0, 0, 0.2);\n"
"}\n"
"QPushButton#btnSupprimer {\n"
"    background-color: #d32f2f;\n"
"    border: 2px solid #b71c1c;\n"
"}\n"
"\n"
"QPushButton#btnSupprimer:hover {\n"
"    background-color: #b71c1c;\n"
"}\n"
"\n"
"/* Style pour les ic\303\264nes des boutons Modifier et Supprimer */\n"
"QPushButton#btnModifier {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton#btnModifier:hover {\n"
"    background-color: rgba(0, 0, 0, 0.1);\n"
""
                        "}\n"
"\n"
"QPushButton#btnSupprimer {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton#btnSupprimer:hover {\n"
"    background-color: rgba(255, 0, 0, 0.1);\n"
"}\n"
"\n"
"/* Style pour les champs de saisie avec bordure */\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #888;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4;\n"
"    outline: none;\n"
"}\n"
"\n"
"/* Style pour les cases \303\240 cocher */\n"
"QCheckBox {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #888;\n"
"    border-radius: 3px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #0078d4;\n"
"    border: 2px solid #0078d4;\n"
"}\n"
"\n"
"/* Styl"
                        "e pour les menus */\n"
"QMenuBar {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background-color: transparent;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #888;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 8px 24px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"}"));
        exportExel = new QPushButton(tab_3);
        exportExel->setObjectName("exportExel");
        exportExel->setGeometry(QRect(10, 10, 161, 41));
        lineEditRecherche = new QLineEdit(tab_3);
        lineEditRecherche->setObjectName("lineEditRecherche");
        lineEditRecherche->setGeometry(QRect(640, 10, 221, 41));
        lineEditRecherche->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px;\n"
"color: black;\n"
"    padding: 5px 10px;\n"
"    font-size: 14px;\n"
"    padding-left: 45px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        btnRecherche = new QPushButton(tab_3);
        btnRecherche->setObjectName("btnRecherche");
        btnRecherche->setGeometry(QRect(870, 10, 51, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        btnRecherche->setFont(font);
        btnRecherche->setStyleSheet(QString::fromUtf8("image: url(:/img/images/search-interface-symbol.png);"));
        btnResetRecherche = new QPushButton(tab_3);
        btnResetRecherche->setObjectName("btnResetRecherche");
        btnResetRecherche->setGeometry(QRect(920, 0, 61, 61));
        btnResetRecherche->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    image: url(:/img/images/reset.png);\n"
"    background: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    border: none; /* Supprime la bordure */\n"
"    \n"
"}\n"
""));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        widgetChart = new QWidget(tab_2);
        widgetChart->setObjectName("widgetChart");
        widgetChart->setGeometry(QRect(40, 20, 531, 411));
        widgetChart->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btnExportPDF = new QPushButton(tab_2);
        btnExportPDF->setObjectName("btnExportPDF");
        btnExportPDF->setGeometry(QRect(630, 390, 131, 51));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 1001, 451));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lire = new QPushButton(tab_2);
        lire->setObjectName("lire");
        lire->setGeometry(QRect(790, 390, 111, 51));
        pdf_generer = new QWidget(tab_2);
        pdf_generer->setObjectName("pdf_generer");
        pdf_generer->setGeometry(QRect(600, 20, 371, 361));
        tabWidget->addTab(tab_2, QString());
        label_7->raise();
        widgetChart->raise();
        btnExportPDF->raise();
        lire->raise();
        pdf_generer->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 10, 1001, 451));
        groupBox_4->setStyleSheet(QString::fromUtf8("/* \360\237\216\257 QGroupBox - Conteneur avec un style \303\251l\303\251gant et clair */\n"
"QGroupBox {\n"
"    background-color:rgb(255, 255, 255); /* Fond clair */\n"
"    border: 2px solid #0078D7; /* Bleu moderne */\n"
"    border-radius: 10px;\n"
"    margin-top: 20px; /* D\303\251calage pour le titre */\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px 10px;\n"
"    background-color: #0078D7;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* \360\237\217\267\357\270\217 QLabel (Texte en noir) */\n"
"QLabel {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \360\237\223\235 QTextEdit */\n"
"QTextEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #0078D7;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: black;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border-color: #005A9E;\n"
"}\n"
"\n"
"/* \360\237\216\233\357\270"
                        "\217 QComboBox */\n"
"QComboBox {\n"
"    background-color: white;\n"
"    border: 2px solid #0078D7;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    color: black;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #005A9E;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    background: #0078D7; /* Bleu clair, ou une autre couleur */\n"
"    border-radius: 4px;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Option pour am\303\251liorer l'apparence de la fl\303\250che */\n"
"QComboBox::down-arrow {\n"
"     /* Si tu veux une fl\303\250che personnalis\303\251e */\n"
"	image: url(:/img/images/bottom-right_10024180.png);\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #0078D7;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* \360\237\224\230 QPushButton */\n"
"QPushButton {\n"
"    background"
                        "-color: #0078D7;\n"
"    border-radius: 8px;\n"
"    padding: 8px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #005A9E;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004080;\n"
"}\n"
"\n"
"/* \360\237\216\232\357\270\217 QSlider */\n"
"/* \360\237\216\232\357\270\217 QSlider - Barre de progression claire et \303\251l\303\251gante */\n"
"QSlider::groove:horizontal {\n"
"    background: #ddd; /* Gris clair pour la barre */\n"
"    height: 6px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #0078D7; /* Bleu moderne */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border-radius: 8px;\n"
"    margin: -5px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #005A9E; /* Bleu plus fonc\303\251 au survol */\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    /*background: #0078D7;  Couleur de remplissage */\n"
"    border-radius: 3px;\n"
""
                        "}\n"
"\n"
"/* \360\237\216\250 QLabel - Texte en noir avec fond transparent */\n"
"QLabel {\n"
"    background-color: transparent;  /* Supprime le fond gris */\n"
"    color: black; /* Texte noir pour une bonne lisibilit\303\251 */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
""));
        comboVoix = new QComboBox(groupBox_4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/femme.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboVoix->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/homme.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboVoix->addItem(icon2, QString());
        comboVoix->setObjectName("comboVoix");
        comboVoix->setGeometry(QRect(210, 390, 251, 31));
        btnReprendre = new QPushButton(groupBox_4);
        btnReprendre->setObjectName("btnReprendre");
        btnReprendre->setGeometry(QRect(520, 210, 121, 41));
        comboMoteur = new QComboBox(groupBox_4);
        comboMoteur->addItem(QString());
        comboMoteur->addItem(QString());
        comboMoteur->addItem(QString());
        comboMoteur->setObjectName("comboMoteur");
        comboMoteur->setGeometry(QRect(210, 290, 251, 31));
        comboMoteur->setStyleSheet(QString::fromUtf8(""));
        btnPause = new QPushButton(groupBox_4);
        btnPause->setObjectName("btnPause");
        btnPause->setGeometry(QRect(380, 210, 121, 41));
        btnParler = new QPushButton(groupBox_4);
        btnParler->setObjectName("btnParler");
        btnParler->setGeometry(QRect(240, 210, 121, 41));
        comboLangue = new QComboBox(groupBox_4);
        comboLangue->addItem(QString());
        comboLangue->addItem(QString());
        comboLangue->setObjectName("comboLangue");
        comboLangue->setGeometry(QRect(210, 340, 251, 31));
        textEdit_3 = new QTextEdit(groupBox_4);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(150, 50, 731, 141));
        textEdit_3->setFont(font);
        btnArreter = new QPushButton(groupBox_4);
        btnArreter->setObjectName("btnArreter");
        btnArreter->setGeometry(QRect(670, 210, 121, 41));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(120, 290, 91, 20));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(120, 400, 91, 20));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(120, 350, 91, 20));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(530, 340, 91, 20));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(530, 300, 91, 20));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(530, 380, 91, 20));
        sliderVitesse = new QSlider(groupBox_4);
        sliderVitesse->setObjectName("sliderVitesse");
        sliderVitesse->setGeometry(QRect(620, 380, 311, 21));
        sliderVitesse->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        sliderVitesse->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_6 = new QSlider(groupBox_4);
        horizontalSlider_6->setObjectName("horizontalSlider_6");
        horizontalSlider_6->setGeometry(QRect(620, 340, 311, 21));
        horizontalSlider_6->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        horizontalSlider_6->setOrientation(Qt::Orientation::Horizontal);
        sliderVolume = new QSlider(groupBox_4);
        sliderVolume->setObjectName("sliderVolume");
        sliderVolume->setGeometry(QRect(620, 300, 311, 21));
        sliderVolume->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        sliderVolume->setOrientation(Qt::Orientation::Horizontal);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        btnDetect = new QPushButton(tab_6);
        btnDetect->setObjectName("btnDetect");
        btnDetect->setGeometry(QRect(1020, 200, 101, 51));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(-10, 0, 1031, 471));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab_6);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(230, -10, 501, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(true);
        font1.setItalic(true);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #2E3A59; /* Bleu fonc\303\251 moderne */\n"
"    padding: 10px;\n"
"    border: none;\n"
"    text-align: center;\n"
"    background: transparent;\n"
"    text-transform: uppercase;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: #4A90E2; /* Bleu plus clair au survol */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #A0A0A0; /* Gris pour un \303\251tat d\303\251sactiv\303\251 */\n"
"}\n"
""));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9->setMargin(0);
        btnWebcamOpen = new QPushButton(tab_6);
        btnWebcamOpen->setObjectName("btnWebcamOpen");
        btnWebcamOpen->setGeometry(QRect(200, 80, 121, 41));
        btnWebcamOpen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
"    background-color: #4A90E2; /* Bleu moderne */\n"
"    border: 2px solid #4A90E2;\n"
"    border-radius: 8px;\n"
"    padding: 8px 15px;\n"
"    transition: background-color 0.3s ease-in-out;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #357ABD; /* Bleu plus fonc\303\251 au survol */\n"
"    border: 2px solid #357ABD;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E5E9E; /* Bleu encore plus fonc\303\251 lorsqu'on clique */\n"
"    border: 2px solid #2E5E9E;\n"
"    padding-top: 10px; /* Effet d'enfoncement */\n"
"    padding-bottom: 6px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #A0A0A0; /* Gris d\303\251sactiv\303\251 */\n"
"    border: 2px solid #A0A0A0;\n"
"    color: #E0E0E0;\n"
"}\n"
""));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 80, 181, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setWeight(QFont::DemiBold);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    color: #555; /* Gris fonc\303\251 pour une bonne lisibilit\303\251 */\n"
"    padding: 5px;\n"
"    border: none;\n"
"    text-align: left;\n"
"    background: transparent;\n"
"    letter-spacing: 1px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: #4A90E2; /* Bleu moderne au survol */\n"
"}\n"
"\n"
"QLabel:disabled {\n"
"    color: #A0A0A0; /* Gris clair si d\303\251sactiv\303\251 */\n"
"}\n"
""));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 130, 551, 331));
        label_11->setStyleSheet(QString::fromUtf8("background-color: black"));
        btnUpload = new QPushButton(tab_6);
        btnUpload->setObjectName("btnUpload");
        btnUpload->setGeometry(QRect(730, 70, 151, 41));
        btnUpload->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
"    background-color: #4A90E2; /* Bleu moderne */\n"
"    border: 2px solid #4A90E2;\n"
"    border-radius: 8px;\n"
"    padding: 8px 15px;\n"
"    transition: background-color 0.3s ease-in-out;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #357ABD; /* Bleu plus fonc\303\251 au survol */\n"
"    border: 2px solid #357ABD;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E5E9E; /* Bleu encore plus fonc\303\251 lorsqu'on clique */\n"
"    border: 2px solid #2E5E9E;\n"
"    padding-top: 10px; /* Effet d'enfoncement */\n"
"    padding-bottom: 6px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #A0A0A0; /* Gris d\303\251sactiv\303\251 */\n"
"    border: 2px solid #A0A0A0;\n"
"    color: #E0E0E0;\n"
"}\n"
""));
        labelImageDisplay = new QLabel(tab_6);
        labelImageDisplay->setObjectName("labelImageDisplay");
        labelImageDisplay->setGeometry(QRect(630, 130, 371, 321));
        recordphone = new QPushButton(tab_6);
        recordphone->setObjectName("recordphone");
        recordphone->setGeometry(QRect(330, 80, 181, 41));
        recordphone->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
"    background-color: #4A90E2; /* Bleu moderne */\n"
"    border: 2px solid #4A90E2;\n"
"    border-radius: 8px;\n"
"    padding: 8px 15px;\n"
"    transition: background-color 0.3s ease-in-out;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #357ABD; /* Bleu plus fonc\303\251 au survol */\n"
"    border: 2px solid #357ABD;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E5E9E; /* Bleu encore plus fonc\303\251 lorsqu'on clique */\n"
"    border: 2px solid #2E5E9E;\n"
"    padding-top: 10px; /* Effet d'enfoncement */\n"
"    padding-bottom: 6px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #A0A0A0; /* Gris d\303\251sactiv\303\251 */\n"
"    border: 2px solid #A0A0A0;\n"
"    color: #E0E0E0;\n"
"}\n"
""));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(Res);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Res);
    } // setupUi

    void retranslateUi(QDialog *Res)
    {
        Res->setWindowTitle(QCoreApplication::translate("Res", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Res", "Ajouter un ressources", nullptr));
        lineEditNom->setPlaceholderText(QCoreApplication::translate("Res", "Nom", nullptr));
        lineEditCout->setPlaceholderText(QCoreApplication::translate("Res", "cout", nullptr));
        lineEditQuantite->setPlaceholderText(QCoreApplication::translate("Res", "Quantit\303\251s", nullptr));
        label->setText(QCoreApplication::translate("Res", "Status :", nullptr));
        radioButtonEnPanne->setText(QCoreApplication::translate("Res", "En panne", nullptr));
        radioButtonEnmarche->setText(QCoreApplication::translate("Res", "En marche", nullptr));
        btnAjouter->setText(QCoreApplication::translate("Res", "Ajouter", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("Res", "\303\211quipements informatiques", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("Res", "mobilier bureautique", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("Res", "Fournitures de bureau", nullptr));

        comboBoxType->setPlaceholderText(QCoreApplication::translate("Res", "Type", nullptr));
        lineEditID->setPlaceholderText(QCoreApplication::translate("Res", "ID", nullptr));
        label_24->setText(QCoreApplication::translate("Res", "Date d'aquisition :", nullptr));
        labelImage->setPlaceholderText(QCoreApplication::translate("Res", "image url", nullptr));
        btnImage->setText(QCoreApplication::translate("Res", "Parcourir...", nullptr));
        label_25->setText(QString());
        labelErrorID->setText(QString());
        labelErrorNom->setText(QString());
        labelErrorImage->setText(QString());
        labelErrorQuantite->setText(QString());
        labelErrorCout->setText(QString());
        labelErrorType->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Res", "Gestion des Ressources", nullptr));
        exportExel->setText(QCoreApplication::translate("Res", "Exporter exel", nullptr));
        btnRecherche->setText(QString());
        btnResetRecherche->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Res", "Liste des ressources", nullptr));
        btnExportPDF->setText(QCoreApplication::translate("Res", "Exporter pdf", nullptr));
        label_7->setText(QCoreApplication::translate("Res", "TextLabel", nullptr));
        lire->setText(QCoreApplication::translate("Res", "lire", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Res", "Statisque et Export", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Res", "synthese vocale", nullptr));
        comboVoix->setItemText(0, QCoreApplication::translate("Res", "femme", nullptr));
        comboVoix->setItemText(1, QCoreApplication::translate("Res", "homme", nullptr));

        btnReprendre->setText(QCoreApplication::translate("Res", "Reprendre", nullptr));
        comboMoteur->setItemText(0, QCoreApplication::translate("Res", "eSpeak", nullptr));
        comboMoteur->setItemText(1, QCoreApplication::translate("Res", "Microsoft David", nullptr));
        comboMoteur->setItemText(2, QCoreApplication::translate("Res", "Flite", nullptr));

        btnPause->setText(QCoreApplication::translate("Res", " Pause", nullptr));
        btnParler->setText(QCoreApplication::translate("Res", "Parler", nullptr));
        comboLangue->setItemText(0, QCoreApplication::translate("Res", "Francais", nullptr));
        comboLangue->setItemText(1, QCoreApplication::translate("Res", "Anglais", nullptr));

        textEdit_3->setPlaceholderText(QCoreApplication::translate("Res", "Text ici....", nullptr));
        btnArreter->setText(QCoreApplication::translate("Res", "Arr\303\252ter", nullptr));
        label_12->setText(QCoreApplication::translate("Res", "Moteur", nullptr));
        label_17->setText(QCoreApplication::translate("Res", "Voix", nullptr));
        label_13->setText(QCoreApplication::translate("Res", "Langue", nullptr));
        label_19->setText(QCoreApplication::translate("Res", "Tonalit\303\251", nullptr));
        label_18->setText(QCoreApplication::translate("Res", "Volume", nullptr));
        label_20->setText(QCoreApplication::translate("Res", "Vitesse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Res", "synthese vocale", nullptr));
        btnDetect->setText(QCoreApplication::translate("Res", "D\303\251tecter", nullptr));
        label_10->setText(QString());
        label_9->setText(QCoreApplication::translate("Res", "D\303\251tecteur d'Objets en Temps R\303\251el", nullptr));
        btnWebcamOpen->setText(QCoreApplication::translate("Res", "D\303\211MARRER", nullptr));
        label_8->setText(QCoreApplication::translate("Res", "D\303\251mo en direct :", nullptr));
        label_11->setText(QString());
        btnUpload->setText(QCoreApplication::translate("Res", "T\303\251lecharger", nullptr));
        labelImageDisplay->setText(QString());
        recordphone->setText(QCoreApplication::translate("Res", "Record from phone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Res", "Reconnaissance d'Objets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Res: public Ui_Res {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESSOURCES_H
