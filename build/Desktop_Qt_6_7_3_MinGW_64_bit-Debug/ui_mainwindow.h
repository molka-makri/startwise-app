/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topMenu;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QToolButton *searchButton;
    QLabel *label_15;
    QLabel *label_14;
    QWidget *widget;
    QLabel *label_3;
    QLabel *evaluationDisplay;
    QPushButton *csv;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *consultationComboBox;
    QLabel *label_4;
    QLabel *satisfaction;
    QPushButton *afficher_arduino;
    QWidget *leftMenu;
    QLabel *Menu;
    QListWidget *listWidget;
    QListWidget *listWidget_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1258, 696);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        topMenu = new QWidget(centralwidget);
        topMenu->setObjectName("topMenu");
        topMenu->setGeometry(QRect(180, 0, 1061, 71));
        topMenu->setStyleSheet(QString::fromUtf8("#topMenu{\n"
"background-color:rgb(221, 221, 221);\n"
"border-radius:20px;\n"
"}"));
        label_12 = new QLabel(topMenu);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(700, 20, 31, 31));
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../akkar/Downloads/email.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(topMenu);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(770, 20, 31, 31));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../akkar/Downloads/notification.png")));
        label_13->setScaledContents(true);
        lineEdit_2 = new QLineEdit(topMenu);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 20, 301, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    font-size: 14px;\n"
"    padding-left: 45px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setClearButtonEnabled(false);
        searchButton = new QToolButton(topMenu);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(30, 20, 31, 31));
        searchButton->setStyleSheet(QString::fromUtf8("#searchButton{\n"
"    border: none;\n"
"    background: transparent;\n"
"    padding: 5px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../akkar/Downloads/search-interface-symbol.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchButton->setIcon(icon);
        label_15 = new QLabel(topMenu);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(890, 30, 141, 20));
        label_15->setStyleSheet(QString::fromUtf8("color:rgb(103, 103, 103)"));
        label_14 = new QLabel(topMenu);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(890, 10, 91, 20));
        label_14->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 80, 1061, 561));
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 120, 120);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 100, 251, 211));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;"));
        evaluationDisplay = new QLabel(widget);
        evaluationDisplay->setObjectName("evaluationDisplay");
        evaluationDisplay->setGeometry(QRect(870, 460, 141, 41));
        evaluationDisplay->setStyleSheet(QString::fromUtf8(""));
        csv = new QPushButton(widget);
        csv->setObjectName("csv");
        csv->setGeometry(QRect(580, 410, 151, 31));
        csv->setStyleSheet(QString::fromUtf8("background-color: #005a9e;"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(300, 10, 721, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        consultationComboBox = new QComboBox(widget);
        consultationComboBox->setObjectName("consultationComboBox");
        consultationComboBox->setGeometry(QRect(20, 50, 251, 41));
        consultationComboBox->setStyleSheet(QString::fromUtf8("/* Elegant ComboBox Stylesheet */\n"
"QComboBox {\n"
"    border: 1px solid #d5d5d5;\n"
"    border-radius: 4px;\n"
"    padding: 5px 10px;\n"
"    min-width: 6em;\n"
"    background: white;\n"
" \n"
"    font: 12px \"Segoe UI\", Arial, sans-serif;\n"
"    selection-background-color: #e0e0e0;\n"
"color: black;  /* Explicit black text */\n"
"    font: 12px \"Segoe UI\", Arial, sans-serif;\n"
"    selection-background-color: #e0e0e0;\n"
"    selection-color: black; \n"
"}\n"
"\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 330, 131, 61));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;"));
        satisfaction = new QLabel(widget);
        satisfaction->setObjectName("satisfaction");
        satisfaction->setGeometry(QRect(140, 320, 121, 81));
        afficher_arduino = new QPushButton(widget);
        afficher_arduino->setObjectName("afficher_arduino");
        afficher_arduino->setGeometry(QRect(760, 410, 151, 31));
        afficher_arduino->setStyleSheet(QString::fromUtf8("background-color: #005a9e;"));
        leftMenu = new QWidget(centralwidget);
        leftMenu->setObjectName("leftMenu");
        leftMenu->setGeometry(QRect(0, 0, 171, 651));
        leftMenu->setStyleSheet(QString::fromUtf8("#leftMenu{\n"
"background-color:rgb(221, 221, 221);\n"
"border-radius:20px;\n"
"}"));
        Menu = new QLabel(leftMenu);
        Menu->setObjectName("Menu");
        Menu->setGeometry(QRect(10, 170, 63, 20));
        QFont font;
        font.setBold(true);
        Menu->setFont(font);
        Menu->setStyleSheet(QString::fromUtf8("#Menu{\n"
"	color: rgb(16, 16, 16);\n"
"}"));
        listWidget = new QListWidget(leftMenu);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/dashboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QFont font1;
        font1.setPointSize(10);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font1);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/customer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font1);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/ressources.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font1);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/images/project.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font1);
        __qlistwidgetitem3->setIcon(icon4);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font1);
        __qlistwidgetitem4->setIcon(icon2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/images/interview.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setKerning(true);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFont(font2);
        __qlistwidgetitem5->setIcon(icon5);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 210, 181, 221));
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        listWidget->setAutoFillBackground(false);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgb(221, 221, 221); \n"
"    border-radius: 10px; \n"
"    padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    color: #555; / Couleur du texte /\n"
"    font-size: 25px;\n"
"    font-family: Arial, sans-serif;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #3498db; \n"
"    color: white;\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #2980b9; \n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    font-weight: bold; \n"
"}"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        listWidget->setTabKeyNavigation(false);
        listWidget->setViewMode(QListView::ViewMode::ListMode);
        listWidget->setModelColumn(0);
        listWidget->setUniformItemSizes(true);
        listWidget->setSortingEnabled(false);
        listWidget_3 = new QListWidget(leftMenu);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/images/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QFont font3;
        font3.setPointSize(9);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem6->setFont(font3);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/images/logout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem7->setFont(font3);
        __qlistwidgetitem7->setIcon(icon7);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(10, 490, 161, 111));
        listWidget_3->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgb(221, 221, 221); \n"
"    border-radius: 10px; \n"
"    padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    color: #555; / Couleur du texte /\n"
"    font-size: 25px;\n"
"    font-family: Arial, sans-serif;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #3498db; \n"
"    color: white;\n"
"\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #2980b9; \n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    font-weight: bold; \n"
"}"));
        label = new QLabel(leftMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 430, 71, 41));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"\n"
"color:rgb(2, 2, 2);\n"
"}"));
        label_2 = new QLabel(leftMenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-50, -60, 270, 261));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/img/images/Black_and_White_Blue_Modern_Letter_W_Logo-removebg-preview.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1258, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search Ressources", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "molka.makri@esprit.tn", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Molka Makri", nullptr));
        label_3->setText(QString());
        evaluationDisplay->setText(QString());
        csv->setText(QCoreApplication::translate("MainWindow", "actualiser", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Satisfaction :", nullptr));
        satisfaction->setText(QString());
        afficher_arduino->setText(QCoreApplication::translate("MainWindow", "afficher arduino", nullptr));
        Menu->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "ressources", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Projects", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Consultations", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listWidget_3->item(0);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "Param\303\251tres", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_3->item(1);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled1);

        label->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
