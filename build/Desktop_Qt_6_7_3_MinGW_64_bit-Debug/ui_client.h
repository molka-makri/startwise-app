/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *imageLabel;
    QPushButton *uploadImageButton;
    QPushButton *deleteImageButton;
    QLineEdit *nomLineEdit;
    QLineEdit *prenomLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *adresseLineEdit;
    QLineEdit *telLineEdit;
    QPushButton *addClientButton;
    QLabel *label_2;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QPushButton *exportExel;
    QLineEdit *searchLineEdit;
    QToolButton *ddd;
    QComboBox *sortComboBox;
    QPushButton *sortOrderButton;
    QWidget *tab_2;
    QFrame *frame_2;
    QLabel *label_9;
    QLabel *label_23;
    QLabel *clientCountLabel;
    QFrame *frame_3;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_24;
    QPushButton *loadStatsButton;
    QWidget *chartContainer;
    QWidget *tab_4;
    QFrame *frame_4;
    QLabel *pdfDropZoneLabel;
    QPushButton *uploadPdfButton;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QFrame *frame_5;
    QLabel *pdfLabel;
    QLabel *label_30;
    QPushButton *effacerCvButton;
    QPushButton *verifyButton;
    QLineEdit *projectNameEdit;
    QWidget *tab_5;
    QProgressBar *compatibilityProgress;
    QLabel *clientPhotoLabel;
    QLabel *label_32;
    QListWidget *strengthsList;
    QListWidget *weaknessesList;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *clientNameLabel;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(1074, 516);
        tabWidget = new QTabWidget(Client);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1031, 481));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid #ccc;\n"
"    background-color: rgb(221, 221, 221);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: rgb(200, 200, 200);\n"
"    border: 1px solid #aaa;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #3498db;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #2980b9;\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px;\n"
"}\n"
"\n"
"\n"
""));
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8(""));
        imageLabel = new QLabel(tab);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(40, 20, 231, 191));
        imageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  border: 2px dashed ;\n"
"	border-color: rgb(85, 170, 255);\n"
"    background-color: transparent;\n"
"    image: url(:/new/image/icons/anonyme.png);\n"
"    repeat: no-repeat;\n"
"    position: center;\n"
"    size: cover; \n"
"}\n"
""));
        imageLabel->setScaledContents(true);
        uploadImageButton = new QPushButton(tab);
        uploadImageButton->setObjectName("uploadImageButton");
        uploadImageButton->setGeometry(QRect(300, 60, 161, 41));
        uploadImageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        deleteImageButton = new QPushButton(tab);
        deleteImageButton->setObjectName("deleteImageButton");
        deleteImageButton->setGeometry(QRect(300, 140, 161, 41));
        deleteImageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        nomLineEdit = new QLineEdit(tab);
        nomLineEdit->setObjectName("nomLineEdit");
        nomLineEdit->setGeometry(QRect(40, 250, 171, 41));
        nomLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        prenomLineEdit = new QLineEdit(tab);
        prenomLineEdit->setObjectName("prenomLineEdit");
        prenomLineEdit->setGeometry(QRect(240, 250, 171, 41));
        prenomLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        emailLineEdit = new QLineEdit(tab);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(40, 310, 171, 41));
        emailLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        adresseLineEdit = new QLineEdit(tab);
        adresseLineEdit->setObjectName("adresseLineEdit");
        adresseLineEdit->setGeometry(QRect(240, 310, 171, 41));
        adresseLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        telLineEdit = new QLineEdit(tab);
        telLineEdit->setObjectName("telLineEdit");
        telLineEdit->setGeometry(QRect(150, 360, 171, 41));
        telLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        addClientButton = new QPushButton(tab);
        addClientButton->setObjectName("addClientButton");
        addClientButton->setGeometry(QRect(700, 310, 161, 41));
        addClientButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 20, 401, 281));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/image/icons/client2-removebg-preview.png);"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(15, 41, 981, 361));
        tableWidget->setStyleSheet(QString::fromUtf8("/* Fond blanc pour le contenu des onglets avec bordure renforc\303\251e */\n"
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
        exportExel->setGeometry(QRect(870, 0, 121, 31));
        exportExel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        searchLineEdit = new QLineEdit(tab_3);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(20, 0, 301, 31));
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    font-size: 14px;\n"
"    padding-left: 45px;\n"
"}\n"
""));
        searchLineEdit->setDragEnabled(false);
        searchLineEdit->setClearButtonEnabled(false);
        ddd = new QToolButton(tab_3);
        ddd->setObjectName("ddd");
        ddd->setGeometry(QRect(20, 0, 31, 31));
        ddd->setStyleSheet(QString::fromUtf8("#searchButton{\n"
"    border: none;\n"
"    background: transparent;\n"
"    padding: 5px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../akkar/Downloads/search-interface-symbol.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ddd->setIcon(icon);
        sortComboBox = new QComboBox(tab_3);
        sortComboBox->setObjectName("sortComboBox");
        sortComboBox->setGeometry(QRect(370, 0, 141, 31));
        sortComboBox->setStyleSheet(QString::fromUtf8("sortComboBox {\n"
"    border: 1px solid #d0d0d0;\n"
"    border-radius: 4px;\n"
"    padding: 5px 10px;\n"
"    min-width: 100px;\n"
"    background: white;\n"
"    selection-background-color: #e0e0e0;\n"
"}\n"
"\n"
"sortComboBox:hover {\n"
"    border-color: #a0a0a0;\n"
"}\n"
"\n"
"sortComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: right center;\n"
"    width: 20px;\n"
"    border-left: 1px solid #d0d0d0;\n"
"}\n"
"\n"
"sortComboBox::down-arrow {\n"
"    image: url(:/icons/down_arrow.svg); /* Replace with your icon */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"sortComboBox QAbstractItemView {\n"
"    border: 1px solid #d0d0d0;\n"
"    selection-background-color: #3a6ea5;\n"
"    selection-color: white;\n"
"    outline: none;\n"
"    background: white;\n"
"}"));
        sortOrderButton = new QPushButton(tab_3);
        sortOrderButton->setObjectName("sortOrderButton");
        sortOrderButton->setGeometry(QRect(540, 0, 111, 31));
        sortOrderButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(710, 240, 281, 161));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"\n"
"        background-color: white;\n"
"    border-radius: 10px;\n"
"    box-shadow: 2px 2px 8px rgba(0, 0, 0, 0.1);\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 20, 121, 21));
        label_9->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: #6b7280;"));
        label_23 = new QLabel(frame_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 10, 41, 41));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../../../../akkar/Downloads/client.png")));
        label_23->setScaledContents(true);
        clientCountLabel = new QLabel(frame_2);
        clientCountLabel->setObjectName("clientCountLabel");
        clientCountLabel->setGeometry(QRect(20, 70, 251, 31));
        clientCountLabel->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;\n"
"color: #111827;"));
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(710, 10, 291, 161));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"\n"
"        background-color: white;\n"
"    border-radius: 10px;\n"
"    box-shadow: 2px 2px 8px rgba(0, 0, 0, 0.1);\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_19 = new QLabel(frame_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(60, 20, 121, 21));
        label_19->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: #6b7280;"));
        label_20 = new QLabel(frame_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(50, 70, 61, 20));
        label_20->setStyleSheet(QString::fromUtf8("font-size: 24px;\n"
"font-weight: bold;\n"
"color: #111827;"));
        label_21 = new QLabel(frame_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(120, 70, 63, 20));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(158, 0, 11);\n"
"padding-left: 10px;\n"
"background-color: rgb(255, 106, 101);"));
        label_24 = new QLabel(frame_3);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(10, 10, 41, 41));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../../../../akkar/Downloads/coeurs.png")));
        label_24->setScaledContents(true);
        loadStatsButton = new QPushButton(tab_2);
        loadStatsButton->setObjectName("loadStatsButton");
        loadStatsButton->setGeometry(QRect(790, 190, 131, 29));
        loadStatsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056B3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004085;\n"
"}"));
        chartContainer = new QWidget(tab_2);
        chartContainer->setObjectName("chartContainer");
        chartContainer->setGeometry(QRect(10, 10, 661, 401));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 10, 441, 261));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px dashed #a6a6a6;\n"
"    border-radius: 10px;\n"
"    background-color: #f8f9fb;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        pdfDropZoneLabel = new QLabel(frame_4);
        pdfDropZoneLabel->setObjectName("pdfDropZoneLabel");
        pdfDropZoneLabel->setGeometry(QRect(40, 40, 361, 161));
        pdfDropZoneLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7d7d7d;\n"
"    font-size: 14px;\n"
"padding-left: 110px;\n"
"}"));
        uploadPdfButton = new QPushButton(frame_4);
        uploadPdfButton->setObjectName("uploadPdfButton");
        uploadPdfButton->setGeometry(QRect(330, 220, 93, 29));
        uploadPdfButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007bff;\n"
"    color: white;\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;\n"
"}"));
        label_26 = new QLabel(frame_4);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(20, 230, 211, 20));
        label_26->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7d7d7d;\n"
"    font-size: 14px;\n"
"}"));
        label_27 = new QLabel(frame_4);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 10, 151, 20));
        label_27->setStyleSheet(QString::fromUtf8("font-weight: bold; "));
        label_28 = new QLabel(frame_4);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(190, 50, 61, 51));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../../../../akkar/Downloads/nuage.png")));
        label_28->setScaledContents(true);
        frame_5 = new QFrame(tab_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(660, 10, 321, 391));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        pdfLabel = new QLabel(frame_5);
        pdfLabel->setObjectName("pdfLabel");
        pdfLabel->setGeometry(QRect(30, 50, 271, 281));
        pdfLabel->setStyleSheet(QString::fromUtf8("  border: 2px dashed #a6a6a6;\n"
"    border-radius: 10px;\n"
"image: url(:/new/image/icons/pdf.png);\n"
""));
        pdfLabel->setScaledContents(true);
        label_30 = new QLabel(frame_5);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(120, 10, 91, 20));
        label_30->setStyleSheet(QString::fromUtf8("font-weight: bold; \n"
"    border: 2px dashed #a6a6a6;\n"
"    border-radius: 10px;\n"
"    background-color: #f8f9fb;"));
        effacerCvButton = new QPushButton(frame_5);
        effacerCvButton->setObjectName("effacerCvButton");
        effacerCvButton->setGeometry(QRect(110, 350, 93, 29));
        effacerCvButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 123, 255); /* Blue background */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(0, 74, 173); /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 52, 120); /* Even darker blue when pressed */\n"
"}\n"
""));
        verifyButton = new QPushButton(tab_4);
        verifyButton->setObjectName("verifyButton");
        verifyButton->setGeometry(QRect(400, 320, 201, 31));
        verifyButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 123, 255); /* Blue background */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(0, 74, 173); /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 52, 120); /* Even darker blue when pressed */\n"
"}\n"
""));
        projectNameEdit = new QLineEdit(tab_4);
        projectNameEdit->setObjectName("projectNameEdit");
        projectNameEdit->setGeometry(QRect(60, 320, 171, 41));
        projectNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #D1D1D1;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background: white;\n"
"    selection-background-color: #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007BFF;\n"
"    background-color: #F8F9FA;\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        compatibilityProgress = new QProgressBar(tab_5);
        compatibilityProgress->setObjectName("compatibilityProgress");
        compatibilityProgress->setGeometry(QRect(380, 300, 231, 31));
        compatibilityProgress->setStyleSheet(QString::fromUtf8("#compatibilityProgress {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 10px;\n"
"    background-color: #f8f9fa;\n"
"    height: 24px;\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    color: #495057;\n"
"}\n"
"\n"
"/* Green portion (strengths) */\n"
"#compatibilityProgress::chunk {\n"
"    background-color: #4CAF50;\n"
"    border-radius: 8px 0 0 8px;\n"
"    border: 1px solid #388E3C;\n"
"}\n"
"\n"
"/* Red portion (weaknesses) - requires manual calculation */\n"
"#compatibilityProgress::chunk:disabled {\n"
"    background-color: #F44336;\n"
"    border-radius: 0 8px 8px 0;\n"
"    border: 1px solid #D32F2F;\n"
"}"));
        compatibilityProgress->setValue(75);
        clientPhotoLabel = new QLabel(tab_5);
        clientPhotoLabel->setObjectName("clientPhotoLabel");
        clientPhotoLabel->setGeometry(QRect(400, 10, 181, 171));
        clientPhotoLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../akkar/Downloads/anonyme.png")));
        clientPhotoLabel->setScaledContents(true);
        label_32 = new QLabel(tab_5);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(410, 240, 161, 20));
        label_32->setStyleSheet(QString::fromUtf8("font-weight: bold; "));
        strengthsList = new QListWidget(tab_5);
        strengthsList->setObjectName("strengthsList");
        strengthsList->setGeometry(QRect(680, 210, 256, 192));
        strengthsList->setStyleSheet(QString::fromUtf8("#strengthsList {\n"
"    background-color: #f0fff4;\n"
"    border: 1px solid #c6f6d5;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"#strengthsList::item {\n"
"    background-color: #c6f6d5;\n"
"    border-radius: 4px;\n"
"    padding: 6px;\n"
"    margin: 3px;\n"
"    color: #22543d;\n"
"}"));
        weaknessesList = new QListWidget(tab_5);
        weaknessesList->setObjectName("weaknessesList");
        weaknessesList->setGeometry(QRect(70, 210, 256, 192));
        weaknessesList->setStyleSheet(QString::fromUtf8("#weaknessesList {\n"
"    background-color: #fff5f5;\n"
"    border: 1px solid #fed7d7;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"#weaknessesList::item {\n"
"    background-color: #fed7d7;\n"
"    border-radius: 4px;\n"
"    padding: 6px;\n"
"    margin: 3px;\n"
"    color: #822727;\n"
"}"));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(150, 180, 161, 20));
        label_33->setStyleSheet(QString::fromUtf8("font-weight: bold; "));
        label_34 = new QLabel(tab_5);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(760, 180, 101, 20));
        label_34->setStyleSheet(QString::fromUtf8("font-weight: bold; "));
        clientNameLabel = new QLabel(tab_5);
        clientNameLabel->setObjectName("clientNameLabel");
        clientNameLabel->setGeometry(QRect(730, 50, 231, 21));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(Client);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        imageLabel->setText(QString());
        uploadImageButton->setText(QCoreApplication::translate("Client", "Upload New", nullptr));
        deleteImageButton->setText(QCoreApplication::translate("Client", "Delete avatar", nullptr));
        nomLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "Nom", nullptr));
        prenomLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "Pr\303\251nom", nullptr));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "Email", nullptr));
        adresseLineEdit->setText(QString());
        adresseLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "Adresse", nullptr));
        telLineEdit->setText(QString());
        telLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "TEL", nullptr));
        addClientButton->setText(QCoreApplication::translate("Client", "Save", nullptr));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Client", "Ajouter des Clients", nullptr));
        exportExel->setText(QCoreApplication::translate("Client", "Export Excel", nullptr));
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("Client", "Rechercher un Client", nullptr));
        ddd->setText(QCoreApplication::translate("Client", "...", nullptr));
        sortOrderButton->setText(QCoreApplication::translate("Client", "sort", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Client", "Listes des clients", nullptr));
        label_9->setText(QCoreApplication::translate("Client", "Clients", nullptr));
        label_23->setText(QString());
        clientCountLabel->setText(QCoreApplication::translate("Client", "Nombre de clients : 0", nullptr));
        label_19->setText(QCoreApplication::translate("Client", "Fid\303\251lit\303\251", nullptr));
        label_20->setText(QCoreApplication::translate("Client", "78%", nullptr));
        label_21->setText(QCoreApplication::translate("Client", "-9%", nullptr));
        label_24->setText(QString());
        loadStatsButton->setText(QCoreApplication::translate("Client", "Load Statistics", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Client", "Statistiques", nullptr));
        pdfDropZoneLabel->setText(QCoreApplication::translate("Client", "Glissez et D\303\251posez vos Fichiers", nullptr));
        uploadPdfButton->setText(QCoreApplication::translate("Client", "T\303\251l\303\251verser", nullptr));
        label_26->setText(QCoreApplication::translate("Client", "Formats Pris en Charge : png,jpg", nullptr));
        label_27->setText(QCoreApplication::translate("Client", "T\303\251l\303\251verser un Fichier", nullptr));
        label_28->setText(QString());
        pdfLabel->setText(QString());
        label_30->setText(QCoreApplication::translate("Client", "CV Affich\303\251", nullptr));
        effacerCvButton->setText(QCoreApplication::translate("Client", "Effacer", nullptr));
        verifyButton->setText(QCoreApplication::translate("Client", "V\303\251rifier la Compatibilit\303\251", nullptr));
        projectNameEdit->setPlaceholderText(QCoreApplication::translate("Client", "Project name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Client", "Traitement d'Image", nullptr));
        clientPhotoLabel->setText(QString());
        label_32->setText(QCoreApplication::translate("Client", "Compatibilit\303\251 du Projet", nullptr));
        label_33->setText(QCoreApplication::translate("Client", "Point Faible", nullptr));
        label_34->setText(QCoreApplication::translate("Client", "comp\303\251tences", nullptr));
        clientNameLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Client", "Compatibilit\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
