/********************************************************************************
** Form generated from reading UI file 'Consultationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTATIONWINDOW_H
#define UI_CONSULTATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consultationwindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_5;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *pushButton_ajouter_Consultation;
    QLineEdit *lineEdit_SUJET;
    QLineEdit *lineEdit_HEURECONSULTATION;
    QGroupBox *groupBox_4;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_17;
    QPushButton *pushButton_ajouter_2;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_SUJET_2;
    QLineEdit *lineEdit_STATUS_2;
    QLineEdit *lineEdit_HEURECONSULTATION_2;
    QComboBox *comboBox_STATUS;
    QDateEdit *dateEdit;
    QLabel *label_16;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_exporter_exel;
    QLineEdit *lineEdit_rechercge;
    QComboBox *comboBox_tri;
    QTableView *tableView;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pushButton_ajouter_4;
    QPushButton *pushButton_16;
    QLineEdit *lineEdit_SUJET_4;
    QLineEdit *lineEdit_STATUS_4;
    QLineEdit *lineEdit_HEURECONSULTATION_4;
    QPushButton *pushButton_supprimer_Consultation;
    QLineEdit *lineEdit_supprtion_modifier_Consultation;
    QPushButton *pushButton_modifier_Consultation;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *tab_2;
    QPushButton *pushButton_rapport_PDF;
    QWidget *widgetChart;
    QWidget *tab_5;
    QPushButton *pushButton_calendrier;
    QGroupBox *groupBox_calendrier;
    QWidget *tab_3;
    QGroupBox *groupBox_8;
    QTableView *tableView_priorisation;
    QPushButton *prioriserButton;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_supprimerAnnule;
    QWidget *tab_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout1;
    QPushButton *btn;
    QLabel *labelstat;
    QComboBox *consultationComboBox1;
    QLabel *satisfaction;
    QLabel *label_7;
    QPushButton *pushButton_afficher_stats;

    void setupUi(QDialog *Consultationwindow)
    {
        if (Consultationwindow->objectName().isEmpty())
            Consultationwindow->setObjectName("Consultationwindow");
        Consultationwindow->resize(1148, 654);
        tabWidget = new QTabWidget(Consultationwindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1041, 541));
        tabWidget->setTabletTracking(false);
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
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 70, 101, 31));
        label_3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 130, 41, 31));
        label_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(140, 70, 201, 31));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;\n"
"    background: transparent; /* \331\212\330\254\330\271\331\204 \330\247\331\204\330\256\331\204\331\201\331\212\330\251 \330\264\331\201\330\247\331\201\330\251 */\n"
"    border-radius: 10px; /* \331\212\330\266\331\212\331\201 \330\262\331\210\330\247\331\212\330\247 \331\205\330\263\330\252\330\257\331\212\330\261\330\251 */\n"
"    padding: 5px; /* \331\212\330\266\331\212\331\201 \331\205\330\263\330\247\331\201\330\251 \330\257\330\247\330\256\331\204\331\212\330\251 */\n"
"}\n"
""));
        plainTextEdit_2 = new QPlainTextEdit(tab);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(140, 130, 201, 31));
        dateTimeEdit = new QDateTimeEdit(tab);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(140, 200, 201, 29));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 250, 41, 31));
        label_5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 200, 91, 31));
        label_6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        plainTextEdit_3 = new QPlainTextEdit(tab);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(140, 250, 201, 31));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, -40, 1011, 511));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
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
        tabWidget_2->setTabPosition(QTabWidget::TabPosition::North);
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -10, 471, 331));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #ffffff;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
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
"/* Focus sur QLineEdit, QDateEdit, QTimeEdit */\n"
"QGroupBox QLineEdit:focus, \n"
"QGroupBox QDateEdit:focus, \n"
"QGroupBox QTimeEdit:focus {\n"
"    border-color: #0"
                        "078d4;\n"
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
"    border: 2px solid #ccc;\n"
"}\n"
"\n"
"/* Boutons dans le QGroupBox */\n"
"QGroupBox QPushButton {\n"
""
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
"QGroupBox QLabel {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
""));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 70, 41, 31));
        label_8->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 150, 151, 31));
        label_9->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 210, 61, 31));
        label_11->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        pushButton_ajouter_Consultation = new QPushButton(groupBox);
        pushButton_ajouter_Consultation->setObjectName("pushButton_ajouter_Consultation");
        pushButton_ajouter_Consultation->setGeometry(QRect(150, 270, 131, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/resours.qrc/icon/6.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_ajouter_Consultation->setIcon(icon);
        lineEdit_SUJET = new QLineEdit(groupBox);
        lineEdit_SUJET->setObjectName("lineEdit_SUJET");
        lineEdit_SUJET->setGeometry(QRect(160, 70, 201, 28));
        lineEdit_SUJET->setStyleSheet(QString::fromUtf8(" QLineEdit,\n"
"{\n"
"    background-color: #f5f5f5;\n"
"	color: black;\n"
"    border: 1px solid #ccc;\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"    font-size: 14px;\n"
"}"));
        lineEdit_HEURECONSULTATION = new QLineEdit(groupBox);
        lineEdit_HEURECONSULTATION->setObjectName("lineEdit_HEURECONSULTATION");
        lineEdit_HEURECONSULTATION->setGeometry(QRect(160, 150, 201, 28));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(330, 320, 491, 331));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #E6F0FA;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
""));
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 70, 41, 31));
        label_10->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_10->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 150, 151, 31));
        label_12->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_12->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 210, 61, 31));
        label_13->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 270, 161, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        label_17->setFont(font);
        label_17->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_17->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        pushButton_ajouter_2 = new QPushButton(groupBox_4);
        pushButton_ajouter_2->setObjectName("pushButton_ajouter_2");
        pushButton_ajouter_2->setGeometry(QRect(350, 250, 131, 41));
        pushButton_ajouter_2->setIcon(icon);
        pushButton_14 = new QPushButton(groupBox_4);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(200, 270, 121, 31));
        lineEdit_SUJET_2 = new QLineEdit(groupBox_4);
        lineEdit_SUJET_2->setObjectName("lineEdit_SUJET_2");
        lineEdit_SUJET_2->setGeometry(QRect(160, 70, 201, 28));
        lineEdit_STATUS_2 = new QLineEdit(groupBox_4);
        lineEdit_STATUS_2->setObjectName("lineEdit_STATUS_2");
        lineEdit_STATUS_2->setGeometry(QRect(160, 210, 201, 28));
        lineEdit_HEURECONSULTATION_2 = new QLineEdit(groupBox_4);
        lineEdit_HEURECONSULTATION_2->setObjectName("lineEdit_HEURECONSULTATION_2");
        lineEdit_HEURECONSULTATION_2->setGeometry(QRect(160, 150, 201, 28));
        comboBox_STATUS = new QComboBox(groupBox);
        comboBox_STATUS->addItem(QString());
        comboBox_STATUS->addItem(QString());
        comboBox_STATUS->addItem(QString());
        comboBox_STATUS->addItem(QString());
        comboBox_STATUS->setObjectName("comboBox_STATUS");
        comboBox_STATUS->setGeometry(QRect(160, 210, 201, 28));
        comboBox_STATUS->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
"\n"
""));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(160, 110, 171, 29));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(70, 110, 41, 31));
        label_16->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_16->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(470, -10, 541, 461));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #ffffff;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
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
"/* Focus sur QLineEdit, QDateEdit, QTimeEdit */\n"
"QGroupBox QLineEdit:focus, \n"
"QGroupBox QDateEdit:focus, \n"
"QGroupBox QTimeEdit:focus {\n"
"    border-color: #0"
                        "078d4;\n"
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
"    border: 2px solid #ccc;\n"
"}\n"
"\n"
"/* Boutons dans le QGroupBox */\n"
"QGroupBox QPushButton {\n"
""
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
"QGroupBox QLabel {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
""));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        pushButton_exporter_exel = new QPushButton(groupBox_2);
        pushButton_exporter_exel->setObjectName("pushButton_exporter_exel");
        pushButton_exporter_exel->setGeometry(QRect(180, 360, 161, 41));
        lineEdit_rechercge = new QLineEdit(groupBox_2);
        lineEdit_rechercge->setObjectName("lineEdit_rechercge");
        lineEdit_rechercge->setGeometry(QRect(30, 60, 261, 31));
        lineEdit_rechercge->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #E6F0FA;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
""));
        comboBox_tri = new QComboBox(groupBox_2);
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->addItem(QString());
        comboBox_tri->setObjectName("comboBox_tri");
        comboBox_tri->setGeometry(QRect(340, 60, 151, 31));
        comboBox_tri->setMouseTracking(false);
        comboBox_tri->setTabletTracking(false);
        comboBox_tri->setAcceptDrops(false);
        comboBox_tri->setAutoFillBackground(false);
        comboBox_tri->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: darkblue;\n"
"    border: 2px solid #7f7a7d;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px;\n"
"    border-left: 1px solid #7f7a7d;\n"
"    background-color: #f0f0f0;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/arrow-down.png); /* \331\212\331\205\331\203\331\206\331\203 \331\210\330\266\330\271 \330\243\331\212\331\202\331\210\331\206\330\251 \330\247\331\204\330\263\331\207\331\205 \330\247\331\204\330\256\330\247\330\265\330\251 \330\250\331\203 \331\207\331\206\330\247 */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    selection-background-color: darkblue;\n"
"    selection-color: white;\n"
"    border: 1px solid #7f7a7d;\n"
"    outline: 0;\n"
"}\n"
"\n"
""));
        comboBox_tri->setEditable(false);
        comboBox_tri->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToMinimumContentsLengthWithIcon);
        comboBox_tri->setDuplicatesEnabled(false);
        comboBox_tri->setFrame(true);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 110, 501, 231));
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: #E6F0FA; /* Fond bleu clair */\n"
"    border: 2px solid #0078D7; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px;\n"
"    gridline-color: #0078D7; /* Couleur des lignes de la grille */\n"
"    selection-background-color: #0078D7; /* Fond bleu s\303\251lection */\n"
"    selection-color: white; /* Texte blanc en s\303\251lection */\n"
"    outline: none;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #0078D7; /* Fond bleu pour les en-t\303\252tes */\n"
"    color: white; /* Texte blanc */\n"
"    padding: 5px;\n"
"    border: 1px solid #0056A6;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    background-color: white; /* Fond des \303\251l\303\251ments */\n"
"    color: #0056A6; /* Texte bleu */\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #0078D7; /* Fond bleu s\303\251lection */\n"
"    color: white; /* Texte blanc */\n"
""
                        "    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background-color: #ADD8E6; /* Bleu clair au survol */\n"
"    color: black;\n"
"}\n"
""));
        tableView->setSortingEnabled(true);
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 310, 471, 141));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #ffffff;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
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
"/* Focus sur QLineEdit, QDateEdit, QTimeEdit */\n"
"QGroupBox QLineEdit:focus, \n"
"QGroupBox QDateEdit:focus, \n"
"QGroupBox QTimeEdit:focus {\n"
"    border-color: #0"
                        "078d4;\n"
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
"    border: 2px solid #ccc;\n"
"}\n"
"\n"
"/* Boutons dans le QGroupBox */\n"
"QGroupBox QPushButton {\n"
""
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
"QGroupBox QLabel {\n"
"    color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
""));
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(330, 320, 491, 331));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #E6F0FA;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 10px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
""));
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(false);
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(70, 70, 41, 31));
        label_22->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_22->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 150, 151, 31));
        label_23->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_23->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(50, 210, 61, 31));
        label_24->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_24->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 270, 161, 31));
        label_25->setFont(font);
        label_25->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_25->setStyleSheet(QString::fromUtf8("background-color: #E6F0FA;"));
        pushButton_ajouter_4 = new QPushButton(groupBox_6);
        pushButton_ajouter_4->setObjectName("pushButton_ajouter_4");
        pushButton_ajouter_4->setGeometry(QRect(350, 250, 131, 41));
        pushButton_ajouter_4->setIcon(icon);
        pushButton_16 = new QPushButton(groupBox_6);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(200, 270, 121, 31));
        lineEdit_SUJET_4 = new QLineEdit(groupBox_6);
        lineEdit_SUJET_4->setObjectName("lineEdit_SUJET_4");
        lineEdit_SUJET_4->setGeometry(QRect(160, 70, 201, 28));
        lineEdit_STATUS_4 = new QLineEdit(groupBox_6);
        lineEdit_STATUS_4->setObjectName("lineEdit_STATUS_4");
        lineEdit_STATUS_4->setGeometry(QRect(160, 210, 201, 28));
        lineEdit_HEURECONSULTATION_4 = new QLineEdit(groupBox_6);
        lineEdit_HEURECONSULTATION_4->setObjectName("lineEdit_HEURECONSULTATION_4");
        lineEdit_HEURECONSULTATION_4->setGeometry(QRect(160, 150, 201, 28));
        pushButton_supprimer_Consultation = new QPushButton(groupBox_5);
        pushButton_supprimer_Consultation->setObjectName("pushButton_supprimer_Consultation");
        pushButton_supprimer_Consultation->setGeometry(QRect(240, 40, 91, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/resours.qrc/icon/3.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_supprimer_Consultation->setIcon(icon1);
        lineEdit_supprtion_modifier_Consultation = new QLineEdit(groupBox_5);
        lineEdit_supprtion_modifier_Consultation->setObjectName("lineEdit_supprtion_modifier_Consultation");
        lineEdit_supprtion_modifier_Consultation->setGeometry(QRect(10, 47, 201, 31));
        pushButton_modifier_Consultation = new QPushButton(groupBox_5);
        pushButton_modifier_Consultation->setObjectName("pushButton_modifier_Consultation");
        pushButton_modifier_Consultation->setGeometry(QRect(350, 40, 91, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/resours.qrc/icon/1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_modifier_Consultation->setIcon(icon2);
        tabWidget_2->addTab(tab_4, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        tabWidget_2->addTab(tab_10, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_rapport_PDF = new QPushButton(tab_2);
        pushButton_rapport_PDF->setObjectName("pushButton_rapport_PDF");
        pushButton_rapport_PDF->setGeometry(QRect(710, 170, 221, 41));
        pushButton_rapport_PDF->setAutoRepeatDelay(300);
        widgetChart = new QWidget(tab_2);
        widgetChart->setObjectName("widgetChart");
        widgetChart->setGeometry(QRect(50, 30, 611, 361));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        pushButton_calendrier = new QPushButton(tab_5);
        pushButton_calendrier->setObjectName("pushButton_calendrier");
        pushButton_calendrier->setGeometry(QRect(890, 150, 121, 41));
        groupBox_calendrier = new QGroupBox(tab_5);
        groupBox_calendrier->setObjectName("groupBox_calendrier");
        groupBox_calendrier->setGeometry(QRect(0, -10, 891, 491));
        groupBox_calendrier->setFont(font1);
        groupBox_calendrier->setStyleSheet(QString::fromUtf8("/* Style pour le QGroupBox */\n"
"QGroupBox {\n"
"    background-color: #f9f9f9;\n"
"    border: 2px solid #0078d4;\n"
"    border-radius: 8px;\n"
"    padding: 2px;\n"
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
"	    background-color: transparent;\n"
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
"/* Focus sur QLineEdit, QDa"
                        "teEdit, QTimeEdit */\n"
"QGroupBox QLineEdit:focus, \n"
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
"    background-color: transparent;\n"
"\n"
"    color: black;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator {\n"
"    width: 15px;\n"
"    height: 15px;\n"
"    border: 2px solid #0078d4;\n"
"    /* Arri\303\250re-plan gris clair */\n"
"    border-radius: 50%;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator:checked {\n"
"    background-color: #0078d4;\n"
"    border: 2px solid #0078d4;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator:"
                        "unchecked {\n"
"    background-color: #e6e6e6;\n"
"    border: 2px solid #ccc;\n"
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
"QComboBox {\n"
"    \n"
"	background-color: rgb(245, 245, 245);\n"
"    border: 1px solid rgb(150, 150, 150);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 10px"
                        ";\n"
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
"    selection-background-color: rgb(0, 122, 255);\n"
"    selection-color: white;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    margin-top: 2px;\n"
"    max-height: 300px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
""
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
"    color: white;  /* Le texte doit \303\252tre blanc */\n"
"}\n"
"\n"
""));
        groupBox_calendrier->setFlat(false);
        groupBox_calendrier->setCheckable(false);
        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(10, 10, 981, 401));
        groupBox_8->setFont(font1);
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0078D7;  /* Bordure bleue */\n"
"    border-radius: 5px;         /* Coins arrondis */\n"
"    margin-top: 10px;           /* Espace au-dessus du titre */\n"
"    background-color: #ffffff;  /* Fond bleu clair */\n"
"    padding: 5px;               /* Espace interne */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrage du titre */\n"
"    padding: 8px 10px;\n"
"    color: #0056A6;  /* Couleur du texte */\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    background: transparent;\n"
"}\n"
""));
        groupBox_8->setFlat(false);
        groupBox_8->setCheckable(false);
        tableView_priorisation = new QTableView(groupBox_8);
        tableView_priorisation->setObjectName("tableView_priorisation");
        tableView_priorisation->setGeometry(QRect(10, 60, 961, 251));
        tableView_priorisation->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: #E6F0FA; /* Fond bleu clair */\n"
"    border: 2px solid #0078D7; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px;\n"
"    gridline-color: #0078D7; /* Couleur des lignes de la grille */\n"
"    selection-background-color: #0078D7; /* Fond bleu s\303\251lection */\n"
"    selection-color: white; /* Texte blanc en s\303\251lection */\n"
"    outline: none;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #0078D7; /* Fond bleu pour les en-t\303\252tes */\n"
"    color: white; /* Texte blanc */\n"
"    padding: 5px;\n"
"    border: 1px solid #0056A6;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    background-color: white; /* Fond des \303\251l\303\251ments */\n"
"    color: #0056A6; /* Texte bleu */\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #0078D7; /* Fond bleu s\303\251lection */\n"
"    color: white; /* Texte blanc */\n"
""
                        "    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background-color: #ADD8E6; /* Bleu clair au survol */\n"
"    color: black;\n"
"}\n"
""));
        tableView_priorisation->setSortingEnabled(true);
        prioriserButton = new QPushButton(groupBox_8);
        prioriserButton->setObjectName("prioriserButton");
        prioriserButton->setGeometry(QRect(540, 340, 211, 41));
        radioButton_1 = new QRadioButton(groupBox_8);
        radioButton_1->setObjectName("radioButton_1");
        radioButton_1->setGeometry(QRect(20, 360, 181, 26));
        radioButton_1->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        radioButton_2 = new QRadioButton(groupBox_8);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 330, 131, 26));
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        radioButton_3 = new QRadioButton(groupBox_8);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setEnabled(true);
        radioButton_3->setGeometry(QRect(240, 350, 141, 26));
        radioButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        pushButton_supprimerAnnule = new QPushButton(groupBox_8);
        pushButton_supprimerAnnule->setObjectName("pushButton_supprimerAnnule");
        pushButton_supprimerAnnule->setGeometry(QRect(760, 340, 211, 41));
        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayoutWidget = new QWidget(tab_6);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(360, 20, 621, 321));
        layout1 = new QVBoxLayout(verticalLayoutWidget);
        layout1->setObjectName("layout1");
        layout1->setContentsMargins(0, 0, 0, 0);
        btn = new QPushButton(tab_6);
        btn->setObjectName("btn");
        btn->setGeometry(QRect(600, 360, 161, 41));
        labelstat = new QLabel(tab_6);
        labelstat->setObjectName("labelstat");
        labelstat->setGeometry(QRect(50, 30, 221, 261));
        labelstat->setStyleSheet(QString::fromUtf8("color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;"));
        consultationComboBox1 = new QComboBox(tab_6);
        consultationComboBox1->setObjectName("consultationComboBox1");
        consultationComboBox1->setGeometry(QRect(50, 50, 211, 28));
        consultationComboBox1->setStyleSheet(QString::fromUtf8("/* Elegant ComboBox Stylesheet */\n"
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
        satisfaction = new QLabel(tab_6);
        satisfaction->setObjectName("satisfaction");
        satisfaction->setGeometry(QRect(180, 320, 141, 111));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 350, 91, 61));
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 5px;"));
        pushButton_afficher_stats = new QPushButton(tab_6);
        pushButton_afficher_stats->setObjectName("pushButton_afficher_stats");
        pushButton_afficher_stats->setGeometry(QRect(560, 420, 251, 51));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(Consultationwindow);

        tabWidget->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Consultationwindow);
    } // setupUi

    void retranslateUi(QDialog *Consultationwindow)
    {
        Consultationwindow->setWindowTitle(QCoreApplication::translate("Consultationwindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Consultationwindow", "id consultation", nullptr));
        label_4->setText(QCoreApplication::translate("Consultationwindow", "sujet", nullptr));
        label_5->setText(QCoreApplication::translate("Consultationwindow", "statut", nullptr));
        label_6->setText(QCoreApplication::translate("Consultationwindow", "date et heure", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Consultationwindow", "ajouter un consultation", nullptr));
        label_8->setText(QCoreApplication::translate("Consultationwindow", "sujet", nullptr));
        label_9->setText(QCoreApplication::translate("Consultationwindow", "heureconsultation", nullptr));
        label_11->setText(QCoreApplication::translate("Consultationwindow", "statut", nullptr));
        pushButton_ajouter_Consultation->setText(QCoreApplication::translate("Consultationwindow", "confirm add", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Consultationwindow", "ajouter un consultation", nullptr));
        label_10->setText(QCoreApplication::translate("Consultationwindow", "sujet", nullptr));
        label_12->setText(QCoreApplication::translate("Consultationwindow", "heureconsultation", nullptr));
        label_13->setText(QCoreApplication::translate("Consultationwindow", "statut", nullptr));
        label_17->setText(QCoreApplication::translate("Consultationwindow", "documentes jointes", nullptr));
        pushButton_ajouter_2->setText(QCoreApplication::translate("Consultationwindow", "confirm add", nullptr));
        pushButton_14->setText(QString());
        comboBox_STATUS->setItemText(0, QCoreApplication::translate("Consultationwindow", "Planifie", nullptr));
        comboBox_STATUS->setItemText(1, QCoreApplication::translate("Consultationwindow", "En cours", nullptr));
        comboBox_STATUS->setItemText(2, QCoreApplication::translate("Consultationwindow", "Termine", nullptr));
        comboBox_STATUS->setItemText(3, QCoreApplication::translate("Consultationwindow", "Annule", nullptr));

        label_16->setText(QCoreApplication::translate("Consultationwindow", "date", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Consultationwindow", "Liste des consultations", nullptr));
        pushButton_exporter_exel->setText(QCoreApplication::translate("Consultationwindow", "Exporter vers Excel", nullptr));
        lineEdit_rechercge->setPlaceholderText(QCoreApplication::translate("Consultationwindow", "Search consultation", nullptr));
        comboBox_tri->setItemText(0, QCoreApplication::translate("Consultationwindow", "A\342\206\222Z ", nullptr));
        comboBox_tri->setItemText(1, QCoreApplication::translate("Consultationwindow", "Z\342\206\222A", nullptr));
        comboBox_tri->setItemText(2, QCoreApplication::translate("Consultationwindow", "Les plus r\303\251cents d'abord", nullptr));
        comboBox_tri->setItemText(3, QCoreApplication::translate("Consultationwindow", "Les plus anciens d'abord", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("Consultationwindow", "supprition et modification", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Consultationwindow", "ajouter un consultation", nullptr));
        label_22->setText(QCoreApplication::translate("Consultationwindow", "sujet", nullptr));
        label_23->setText(QCoreApplication::translate("Consultationwindow", "heureconsultation", nullptr));
        label_24->setText(QCoreApplication::translate("Consultationwindow", "statut", nullptr));
        label_25->setText(QCoreApplication::translate("Consultationwindow", "documentes jointes", nullptr));
        pushButton_ajouter_4->setText(QCoreApplication::translate("Consultationwindow", "confirm add", nullptr));
        pushButton_16->setText(QString());
        pushButton_supprimer_Consultation->setText(QString());
        pushButton_modifier_Consultation->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Consultationwindow", "Gestion des consultations", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("Consultationwindow", "export", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("Consultationwindow", "Statisque", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("Consultationwindow", "Calendrier interactif", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("Consultationwindow", "Syst\303\250me de Priorisation ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Consultationwindow", "Gestion des consultations", nullptr));
        pushButton_rapport_PDF->setText(QCoreApplication::translate("Consultationwindow", "G\303\251n\303\251rer un rapport PDF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Consultationwindow", "Statistique et export", nullptr));
        pushButton_calendrier->setText(QCoreApplication::translate("Consultationwindow", "calendrier", nullptr));
        groupBox_calendrier->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Consultationwindow", "Calendrier interactif", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Consultationwindow", "les consultation par ordre de priorit\303\251", nullptr));
        prioriserButton->setText(QCoreApplication::translate("Consultationwindow", "Calculer Priorit\303\251s ", nullptr));
        radioButton_1->setText(QCoreApplication::translate("Consultationwindow", "Department Priority", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Consultationwindow", "Client Priority", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Consultationwindow", "Priorit\303\251 mixte ", nullptr));
        pushButton_supprimerAnnule->setText(QCoreApplication::translate("Consultationwindow", "supprimerAnnule", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Consultationwindow", "syst\303\251me de priorisation_1", nullptr));
        btn->setText(QCoreApplication::translate("Consultationwindow", "actualiser", nullptr));
        labelstat->setText(QString());
        satisfaction->setText(QString());
        label_7->setText(QCoreApplication::translate("Consultationwindow", "Satisfaction :", nullptr));
        pushButton_afficher_stats->setText(QCoreApplication::translate("Consultationwindow", " afficher stat sur l'afficheur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Consultationwindow", "Evaluation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consultationwindow: public Ui_Consultationwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTATIONWINDOW_H
