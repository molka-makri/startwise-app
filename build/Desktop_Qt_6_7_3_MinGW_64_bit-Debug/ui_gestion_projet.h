/********************************************************************************
** Form generated from reading UI file 'gestion_projet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_PROJET_H
#define UI_GESTION_PROJET_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_projet
{
public:
    QWidget *body;
    QTabWidget *tabWidget_3;
    QWidget *tab_9;
    QTextBrowser *textBrowser_7;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QPushButton *ajouter;
    QPushButton *modifier;
    QPushButton *supprimer;
    QLineEdit *name;
    QLineEdit *description;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QCheckBox *etat_5;
    QCheckBox *etat_6;
    QDateEdit *dated;
    QDateEdit *datef;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QTableView *tableView;
    QPushButton *UploadPDF;
    QPushButton *OuvrirPDF;
    QComboBox *etatComboBox;
    QPushButton *btnExportPDF;
    QLineEdit *rechercheLineEdit;
    QPushButton *rechercherButton;
    QLabel *label_33;
    QLineEdit *localisation;
    QLabel *label_17;
    QLineEdit *localisation_2;
    QPushButton *ajouter_2;
    QPushButton *supprimer_2;
    QWidget *tab_10;
    QTextBrowser *textBrowser_8;
    QWidget *widget_3;
    QPushButton *stat;
    QLabel *label_34;
    QLabel *label_35;
    QWidget *tab_11;
    QComboBox *projectNameComboBox_3;
    QLabel *locationLabel;
    QQuickWidget *mapWidget;
    QWidget *tab_12;
    QTextBrowser *textBrowser_9;
    QTextEdit *chatDisplay;
    QLineEdit *messageInput;
    QPushButton *send;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *statusLabel;
    QLabel *statusLabel_2;

    void setupUi(QDialog *gestion_projet)
    {
        if (gestion_projet->objectName().isEmpty())
            gestion_projet->setObjectName("gestion_projet");
        gestion_projet->resize(1036, 505);
        body = new QWidget(gestion_projet);
        body->setObjectName("body");
        body->setGeometry(QRect(0, 10, 1031, 481));
        body->setStyleSheet(QString::fromUtf8("#body{\n"
"	background-color: rgb(154, 154, 154);\n"
"border-radius:20px;\n"
"}"));
        tabWidget_3 = new QTabWidget(body);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setGeometry(QRect(0, 0, 1031, 481));
        tabWidget_3->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
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
""));
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        textBrowser_7 = new QTextBrowser(tab_9);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(0, 0, 2000, 600));
        textEdit_5 = new QTextEdit(tab_9);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(20, 50, 461, 371));
        textEdit_5->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
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
""));
        textEdit_6 = new QTextEdit(tab_9);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(470, 50, 551, 371));
        ajouter = new QPushButton(tab_9);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(330, 440, 111, 41));
        ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);"));
        modifier = new QPushButton(tab_9);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(770, 370, 111, 41));
        modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);\n"
"border-color: rgb(0, 0, 0);"));
        supprimer = new QPushButton(tab_9);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(1060, 400, 91, 41));
        supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);"));
        name = new QLineEdit(tab_9);
        name->setObjectName("name");
        name->setGeometry(QRect(30, 120, 301, 31));
        description = new QLineEdit(tab_9);
        description->setObjectName("description");
        description->setGeometry(QRect(30, 190, 411, 71));
        label_26 = new QLabel(tab_9);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(110, 60, 271, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville Old Face\";"));
        label_27 = new QLabel(tab_9);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(30, 90, 101, 16));
        label_28 = new QLabel(tab_9);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(30, 160, 101, 16));
        label_29 = new QLabel(tab_9);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(30, 280, 101, 16));
        etat_5 = new QCheckBox(tab_9);
        etat_5->setObjectName("etat_5");
        etat_5->setGeometry(QRect(140, 280, 75, 20));
        etat_6 = new QCheckBox(tab_9);
        etat_6->setObjectName("etat_6");
        etat_6->setGeometry(QRect(270, 280, 141, 20));
        dated = new QDateEdit(tab_9);
        dated->setObjectName("dated");
        dated->setGeometry(QRect(120, 310, 110, 31));
        datef = new QDateEdit(tab_9);
        datef->setObjectName("datef");
        datef->setGeometry(QRect(320, 310, 110, 31));
        label_30 = new QLabel(tab_9);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(30, 320, 81, 16));
        label_31 = new QLabel(tab_9);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(250, 320, 81, 16));
        label_32 = new QLabel(tab_9);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(630, 50, 281, 51));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville Old Face\";"));
        tableView = new QTableView(tab_9);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(490, 100, 511, 261));
        QPalette palette;
        QBrush brush(QColor(44, 62, 80, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(245, 247, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(44, 62, 80, 128));
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
        tableView->setPalette(palette);
        tableView->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
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
""));
        UploadPDF = new QPushButton(tab_9);
        UploadPDF->setObjectName("UploadPDF");
        UploadPDF->setGeometry(QRect(340, 120, 101, 31));
        UploadPDF->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        OuvrirPDF = new QPushButton(tab_9);
        OuvrirPDF->setObjectName("OuvrirPDF");
        OuvrirPDF->setGeometry(QRect(490, 69, 101, 31));
        OuvrirPDF->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        etatComboBox = new QComboBox(tab_9);
        etatComboBox->addItem(QString());
        etatComboBox->addItem(QString());
        etatComboBox->addItem(QString());
        etatComboBox->setObjectName("etatComboBox");
        etatComboBox->setGeometry(QRect(930, 60, 62, 31));
        btnExportPDF = new QPushButton(tab_9);
        btnExportPDF->setObjectName("btnExportPDF");
        btnExportPDF->setGeometry(QRect(490, 360, 91, 31));
        btnExportPDF->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        rechercheLineEdit = new QLineEdit(tab_9);
        rechercheLineEdit->setObjectName("rechercheLineEdit");
        rechercheLineEdit->setGeometry(QRect(40, 10, 531, 31));
        rechercherButton = new QPushButton(tab_9);
        rechercherButton->setObjectName("rechercherButton");
        rechercherButton->setGeometry(QRect(620, 10, 91, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(163, 153, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        rechercherButton->setPalette(palette1);
        rechercherButton->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);"));
        label_33 = new QLabel(tab_9);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(30, 450, 101, 16));
        localisation = new QLineEdit(tab_9);
        localisation->setObjectName("localisation");
        localisation->setGeometry(QRect(120, 450, 191, 31));
        label_17 = new QLabel(tab_9);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 370, 101, 16));
        localisation_2 = new QLineEdit(tab_9);
        localisation_2->setObjectName("localisation_2");
        localisation_2->setGeometry(QRect(120, 370, 191, 31));
        ajouter_2 = new QPushButton(tab_9);
        ajouter_2->setObjectName("ajouter_2");
        ajouter_2->setGeometry(QRect(340, 370, 111, 41));
        ajouter_2->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);"));
        supprimer_2 = new QPushButton(tab_9);
        supprimer_2->setObjectName("supprimer_2");
        supprimer_2->setGeometry(QRect(890, 370, 111, 41));
        supprimer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(163, 153, 159);"));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        textBrowser_8 = new QTextBrowser(tab_10);
        textBrowser_8->setObjectName("textBrowser_8");
        textBrowser_8->setGeometry(QRect(0, 0, 1201, 441));
        widget_3 = new QWidget(tab_10);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(30, 20, 991, 411));
        stat = new QPushButton(widget_3);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(790, 160, 161, 61));
        stat->setStyleSheet(QString::fromUtf8("        background-color: #1f618d;\n"
""));
        label_34 = new QLabel(widget_3);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(20, 10, 741, 391));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/new/image/icons/gens-d-affaires-d-blancs-avec-le-graphique-de-statistique-49936928.png")));
        label_34->setScaledContents(true);
        label_35 = new QLabel(tab_10);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(-190, -170, 211, 291));
        label_35->setStyleSheet(QString::fromUtf8("image: url(:/image/icons/Black_and_White_Blue_Modern_Letter_W_Logo-removebg-preview.png);"));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/:/icons/icons/Black_and_White_Blue_Modern_Letter_W_Logo-removebg-preview.png")));
        label_35->setScaledContents(true);
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        projectNameComboBox_3 = new QComboBox(tab_11);
        projectNameComboBox_3->setObjectName("projectNameComboBox_3");
        projectNameComboBox_3->setGeometry(QRect(770, 40, 221, 41));
        projectNameComboBox_3->setStyleSheet(QString::fromUtf8(" QComboBox {\n"
"        background-color: #f0f0f0;\n"
"        border: 1px solid #888;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"        font-size: 14px;\n"
"    }\n"
"\n"
"    QComboBox:hover {\n"
"        border: 1px solid #555;\n"
"    }\n"
"\n"
"    QComboBox::drop-down {\n"
"        subcontrol-origin: padding;\n"
"        subcontrol-position: top right;\n"
"        width: 25px;\n"
"        border-left: 1px solid #888;\n"
"        background-color: #dcdcdc;\n"
"    }\n"
"\n"
"    QComboBox::down-arrow {\n"
"        image: url(:/icons/down-arrow.png);  // Optional custom icon\n"
"        width: 10px;\n"
"        height: 10px;\n"
"    }\n"
"\n"
"    QComboBox QAbstractItemView {\n"
"        background-color: white;\n"
"        selection-background-color: #e0e0e0;\n"
"        border: 1px solid #aaa;\n"
"    }"));
        locationLabel = new QLabel(tab_11);
        locationLabel->setObjectName("locationLabel");
        locationLabel->setGeometry(QRect(760, 380, 211, 31));
        locationLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        color: #333333;\n"
"        background-color: #f9f9f9;\n"
"        border: 1px solid #cccccc;\n"
"        border-radius: 8px;\n"
"        padding: 6px 12px;\n"
"        font-size: 12px;\n"
"    }"));
        mapWidget = new QQuickWidget(tab_11);
        mapWidget->setObjectName("mapWidget");
        mapWidget->setGeometry(QRect(29, 29, 721, 381));
        mapWidget->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        textBrowser_9 = new QTextBrowser(tab_12);
        textBrowser_9->setObjectName("textBrowser_9");
        textBrowser_9->setGeometry(QRect(0, 0, 1041, 441));
        chatDisplay = new QTextEdit(tab_12);
        chatDisplay->setObjectName("chatDisplay");
        chatDisplay->setGeometry(QRect(380, 20, 621, 351));
        chatDisplay->setStyleSheet(QString::fromUtf8(" background-color: #f5f5f5;\n"
"         border: 1px solid #ddd;\n"
"          border-radius: 5px;\n"
"         padding: 8px;"));
        messageInput = new QLineEdit(tab_12);
        messageInput->setObjectName("messageInput");
        messageInput->setGeometry(QRect(380, 380, 521, 31));
        messageInput->setStyleSheet(QString::fromUtf8("border: 1px solid #ddd;\n"
"           border-radius: 5px;\n"
"        padding: 8px;"));
        send = new QPushButton(tab_12);
        send->setObjectName("send");
        send->setGeometry(QRect(920, 380, 81, 31));
        send->setStyleSheet(QString::fromUtf8("background-color: #4CAF50;\n"
"           color: white;\n"
"           border: none;\n"
"           border-radius: 5px;\n"
"          padding: 8px 16px;"));
        label_36 = new QLabel(tab_12);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(30, 50, 271, 251));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/new/image/icons/interview.png")));
        label_36->setScaledContents(true);
        label_37 = new QLabel(tab_12);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(70, 290, 221, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush4(QColor(85, 85, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_37->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setItalic(true);
        label_37->setFont(font1);
        statusLabel = new QLabel(tab_12);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(20, 460, 191, 21));
        statusLabel_2 = new QLabel(tab_12);
        statusLabel_2->setObjectName("statusLabel_2");
        statusLabel_2->setGeometry(QRect(10, 390, 191, 21));
        tabWidget_3->addTab(tab_12, QString());

        retranslateUi(gestion_projet);

        tabWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(gestion_projet);
    } // setupUi

    void retranslateUi(QDialog *gestion_projet)
    {
        gestion_projet->setWindowTitle(QCoreApplication::translate("gestion_projet", "Dialog", nullptr));
        ajouter->setText(QCoreApplication::translate("gestion_projet", "Ajouter", nullptr));
        modifier->setText(QCoreApplication::translate("gestion_projet", "Modifier", nullptr));
        supprimer->setText(QCoreApplication::translate("gestion_projet", "Supprimer", nullptr));
        label_26->setText(QCoreApplication::translate("gestion_projet", "NOUVEAU PROJET", nullptr));
        label_27->setText(QCoreApplication::translate("gestion_projet", "NOM", nullptr));
        label_28->setText(QCoreApplication::translate("gestion_projet", "DESCRIPTION", nullptr));
        label_29->setText(QCoreApplication::translate("gestion_projet", "ETAT", nullptr));
        etat_5->setText(QCoreApplication::translate("gestion_projet", "Trait\303\251", nullptr));
        etat_6->setText(QCoreApplication::translate("gestion_projet", "En cours de traitement", nullptr));
        label_30->setText(QCoreApplication::translate("gestion_projet", "Date de d\303\251but", nullptr));
        label_31->setText(QCoreApplication::translate("gestion_projet", "Date de Fin", nullptr));
        label_32->setText(QCoreApplication::translate("gestion_projet", "LISTE DES  PROJETS", nullptr));
        UploadPDF->setText(QCoreApplication::translate("gestion_projet", "Upload PDF", nullptr));
        OuvrirPDF->setText(QCoreApplication::translate("gestion_projet", "Ouvrir PDF", nullptr));
        etatComboBox->setItemText(0, QCoreApplication::translate("gestion_projet", "Tous", nullptr));
        etatComboBox->setItemText(1, QCoreApplication::translate("gestion_projet", "DESC", nullptr));
        etatComboBox->setItemText(2, QCoreApplication::translate("gestion_projet", "ASC", nullptr));

        btnExportPDF->setText(QCoreApplication::translate("gestion_projet", "Imprimer ", nullptr));
        rechercherButton->setText(QCoreApplication::translate("gestion_projet", "rechercher", nullptr));
        label_33->setText(QCoreApplication::translate("gestion_projet", "Localisation", nullptr));
        label_17->setText(QCoreApplication::translate("gestion_projet", "Localisation", nullptr));
        ajouter_2->setText(QCoreApplication::translate("gestion_projet", "Ajouter", nullptr));
        supprimer_2->setText(QCoreApplication::translate("gestion_projet", "Supprimer", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QCoreApplication::translate("gestion_projet", "Gestion des Projets", nullptr));
        stat->setText(QCoreApplication::translate("gestion_projet", "Afficher  Statistiques", nullptr));
        label_34->setText(QString());
        label_35->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QCoreApplication::translate("gestion_projet", "Statistiques", nullptr));
        locationLabel->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QCoreApplication::translate("gestion_projet", "G\303\251olocalisation", nullptr));
        send->setText(QCoreApplication::translate("gestion_projet", "Envoyer", nullptr));
        label_36->setText(QString());
        label_37->setText(QCoreApplication::translate("gestion_projet", "STARTCHAT", nullptr));
        statusLabel->setText(QCoreApplication::translate("gestion_projet", "TextLabel", nullptr));
        statusLabel_2->setText(QCoreApplication::translate("gestion_projet", "TextLabel", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QCoreApplication::translate("gestion_projet", "Chatbot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_projet: public Ui_gestion_projet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_PROJET_H
