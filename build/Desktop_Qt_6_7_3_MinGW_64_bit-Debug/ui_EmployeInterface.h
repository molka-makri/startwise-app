/********************************************************************************
** Form generated from reading UI file 'employeinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEINTERFACE_H
#define UI_EMPLOYEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeInterface
{
public:
    QWidget *centralwidget;
    QWidget *body;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btnAjouter;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_16;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditEmail;
    QComboBox *comboBoxRole;
    QLineEdit *lineEditMotdepasse;
    QLabel *label_20;
    QPushButton *btnPrendrePhoto;
    QWidget *videoFrame;
    QPushButton *btnEnregistrerVoix;
    QPushButton *btnSauvegarder;
    QWidget *tab_7;
    QTableView *tableView;
    QPushButton *btnSupprimer;
    QPushButton *btnExporter;
    QPushButton *btnModifier;
    QPushButton *btnTriID;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *chartLayout;
    QWidget *tab_3;
    QPushButton *btnReconnaissance;
    QPushButton *btnTestExtractionVoix;
    QWidget *videoReconnaissanceFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmployeInterface)
    {
        if (EmployeInterface->objectName().isEmpty())
            EmployeInterface->setObjectName("EmployeInterface");
        EmployeInterface->resize(1290, 600);
        centralwidget = new QWidget(EmployeInterface);
        centralwidget->setObjectName("centralwidget");
        body = new QWidget(centralwidget);
        body->setObjectName("body");
        body->setGeometry(QRect(10, 10, 1031, 481));
        body->setStyleSheet(QString::fromUtf8("#body{\n"
"	background-color: rgb(154, 154, 154);\n"
"border-radius:20px;\n"
"}"));
        tabWidget = new QTabWidget(body);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1031, 481));
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
"QPushBUtton{\n"
"    background-color:#0d6efd;\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        btnAjouter = new QPushButton(tab);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(50, 370, 93, 29));
        btnAjouter->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 991, 351));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 63, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 140, 63, 20));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 90, 63, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 240, 63, 20));
        lineEditNom = new QLineEdit(groupBox);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(190, 40, 113, 26));
        lineEditPrenom = new QLineEdit(groupBox);
        lineEditPrenom->setObjectName("lineEditPrenom");
        lineEditPrenom->setGeometry(QRect(190, 90, 113, 26));
        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(190, 140, 113, 26));
        comboBoxRole = new QComboBox(groupBox);
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->setObjectName("comboBoxRole");
        comboBoxRole->setGeometry(QRect(180, 240, 131, 26));
        lineEditMotdepasse = new QLineEdit(groupBox);
        lineEditMotdepasse->setObjectName("lineEditMotdepasse");
        lineEditMotdepasse->setGeometry(QRect(190, 190, 113, 26));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 190, 101, 20));
        btnPrendrePhoto = new QPushButton(groupBox);
        btnPrendrePhoto->setObjectName("btnPrendrePhoto");
        btnPrendrePhoto->setGeometry(QRect(480, 40, 151, 29));
        videoFrame = new QWidget(groupBox);
        videoFrame->setObjectName("videoFrame");
        videoFrame->setGeometry(QRect(400, 90, 321, 171));
        btnEnregistrerVoix = new QPushButton(groupBox);
        btnEnregistrerVoix->setObjectName("btnEnregistrerVoix");
        btnEnregistrerVoix->setGeometry(QRect(790, 40, 131, 29));
        btnSauvegarder = new QPushButton(tab);
        btnSauvegarder->setObjectName("btnSauvegarder");
        btnSauvegarder->setGeometry(QRect(290, 370, 93, 29));
        btnSauvegarder->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        tabWidget->addTab(tab, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        tableView = new QTableView(tab_7);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 1011, 371));
        btnSupprimer = new QPushButton(tab_7);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(460, 380, 93, 29));
        btnSupprimer->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        btnExporter = new QPushButton(tab_7);
        btnExporter->setObjectName("btnExporter");
        btnExporter->setGeometry(QRect(680, 380, 93, 29));
        btnExporter->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        btnModifier = new QPushButton(tab_7);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(210, 380, 93, 29));
        btnModifier->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        btnTriID = new QPushButton(tab_7);
        btnTriID->setObjectName("btnTriID");
        btnTriID->setGeometry(QRect(40, 380, 93, 29));
        tabWidget->addTab(tab_7, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setEnabled(true);
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-10, -20, 1031, 451));
        chartLayout = new QVBoxLayout(verticalLayoutWidget);
        chartLayout->setObjectName("chartLayout");
        chartLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        btnReconnaissance = new QPushButton(tab_3);
        btnReconnaissance->setObjectName("btnReconnaissance");
        btnReconnaissance->setGeometry(QRect(150, 20, 251, 29));
        btnReconnaissance->setStyleSheet(QString::fromUtf8("   background-color:rgb(85, 170, 255);"));
        btnTestExtractionVoix = new QPushButton(tab_3);
        btnTestExtractionVoix->setObjectName("btnTestExtractionVoix");
        btnTestExtractionVoix->setGeometry(QRect(660, 30, 251, 29));
        videoReconnaissanceFrame = new QWidget(tab_3);
        videoReconnaissanceFrame->setObjectName("videoReconnaissanceFrame");
        videoReconnaissanceFrame->setGeometry(QRect(120, 120, 321, 171));
        tabWidget->addTab(tab_3, QString());
        EmployeInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmployeInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1290, 25));
        EmployeInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(EmployeInterface);
        statusbar->setObjectName("statusbar");
        EmployeInterface->setStatusBar(statusbar);

        retranslateUi(EmployeInterface);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EmployeInterface);
    } // setupUi

    void retranslateUi(QMainWindow *EmployeInterface)
    {
        EmployeInterface->setWindowTitle(QCoreApplication::translate("EmployeInterface", "MainWindow", nullptr));
        btnAjouter->setText(QCoreApplication::translate("EmployeInterface", "Ajouter", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EmployeInterface", "groupBoxForm", nullptr));
        label_2->setText(QCoreApplication::translate("EmployeInterface", "Nom :", nullptr));
        label_8->setText(QCoreApplication::translate("EmployeInterface", "Email :", nullptr));
        label_11->setText(QCoreApplication::translate("EmployeInterface", "Prenom :", nullptr));
        label_16->setText(QCoreApplication::translate("EmployeInterface", "Role :", nullptr));
        comboBoxRole->setItemText(0, QCoreApplication::translate("EmployeInterface", "Consultant", nullptr));
        comboBoxRole->setItemText(1, QCoreApplication::translate("EmployeInterface", "Chef de projet", nullptr));
        comboBoxRole->setItemText(2, QCoreApplication::translate("EmployeInterface", "D\303\251veloppeur", nullptr));
        comboBoxRole->setItemText(3, QCoreApplication::translate("EmployeInterface", "Administratif", nullptr));

        label_20->setText(QCoreApplication::translate("EmployeInterface", "Mot de passe :", nullptr));
        btnPrendrePhoto->setText(QCoreApplication::translate("EmployeInterface", "Prendre une photo", nullptr));
        btnEnregistrerVoix->setText(QCoreApplication::translate("EmployeInterface", "Enregistrer la voix", nullptr));
        btnSauvegarder->setText(QCoreApplication::translate("EmployeInterface", "Sauvegarder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EmployeInterface", "Gestion des employ\303\251s", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("EmployeInterface", "Supprimer", nullptr));
        btnExporter->setText(QCoreApplication::translate("EmployeInterface", "Exporter", nullptr));
        btnModifier->setText(QCoreApplication::translate("EmployeInterface", "Modifier", nullptr));
        btnTriID->setText(QCoreApplication::translate("EmployeInterface", "Trier par ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("EmployeInterface", "Liste des employ\303\251s", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EmployeInterface", "Statistiques", nullptr));
        btnReconnaissance->setText(QCoreApplication::translate("EmployeInterface", "D\303\251marrer Reconnaissance faciale", nullptr));
        btnTestExtractionVoix->setText(QCoreApplication::translate("EmployeInterface", "Tester extraction voix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("EmployeInterface", "IA et biom\303\251trie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeInterface: public Ui_EmployeInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEINTERFACE_H
