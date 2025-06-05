/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_6;
    QGroupBox *groupBox;
    QLabel *label_7;
    QRadioButton *clair;
    QRadioButton *sombre;
    QLabel *label_8;
    QWidget *tab_3;
    QGroupBox *verificationGroup;
    QVBoxLayout *verticalLayout_verif;
    QLabel *label;
    QLineEdit *phoneNumberEdit;
    QPushButton *sendCodeButton;
    QLabel *label1;
    QLineEdit *verificationCodeEdit;
    QPushButton *verifyButton;
    QLabel *timerLabel;
    QPushButton *resendButton;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *tab_4;
    QLabel *label2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_2;
    QWidget *WidgetContents;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(1058, 551);
        mainLayout = new QVBoxLayout(SettingsDialog);
        mainLayout->setObjectName("mainLayout");
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName("tabWidget");
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
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 1031, 471));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 10, 951, 451));
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
"    font-size: 20px;\n"
"}\n"
"\n"
"QGroupBox QRadioButton::indicator {\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border: 5px solid #0078d4;\n"
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
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 100, 131, 101));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/img/images/brightnes.png);\n"
"background-color: transparent;"));
        clair = new QRadioButton(groupBox);
        clair->setObjectName("clair");
        clair->setGeometry(QRect(190, 230, 161, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clair->sizePolicy().hasHeightForWidth());
        clair->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        clair->setFont(font);
        clair->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;"));
        sombre = new QRadioButton(groupBox);
        sombre->setObjectName("sombre");
        sombre->setGeometry(QRect(550, 220, 181, 61));
        sombre->setFont(font);
        sombre->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(510, 100, 181, 101));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/img/images/moon.png);\n"
"background-color: transparent;"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verificationGroup = new QGroupBox(tab_3);
        verificationGroup->setObjectName("verificationGroup");
        verificationGroup->setGeometry(QRect(20, 20, 601, 421));
        verificationGroup->setStyleSheet(QString::fromUtf8("/* Style pour le QGroupBox */\n"
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
        verticalLayout_verif = new QVBoxLayout(verificationGroup);
        verticalLayout_verif->setObjectName("verticalLayout_verif");
        label = new QLabel(verificationGroup);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;\n"
""));

        verticalLayout_verif->addWidget(label);

        phoneNumberEdit = new QLineEdit(verificationGroup);
        phoneNumberEdit->setObjectName("phoneNumberEdit");

        verticalLayout_verif->addWidget(phoneNumberEdit);

        sendCodeButton = new QPushButton(verificationGroup);
        sendCodeButton->setObjectName("sendCodeButton");

        verticalLayout_verif->addWidget(sendCodeButton);

        label1 = new QLabel(verificationGroup);
        label1->setObjectName("label1");
        label1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;\n"
""));

        verticalLayout_verif->addWidget(label1);

        verificationCodeEdit = new QLineEdit(verificationGroup);
        verificationCodeEdit->setObjectName("verificationCodeEdit");
        verificationCodeEdit->setEnabled(false);

        verticalLayout_verif->addWidget(verificationCodeEdit);

        verifyButton = new QPushButton(verificationGroup);
        verifyButton->setObjectName("verifyButton");
        verifyButton->setEnabled(false);

        verticalLayout_verif->addWidget(verifyButton);

        timerLabel = new QLabel(verificationGroup);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;\n"
""));
        timerLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_verif->addWidget(timerLabel);

        resendButton = new QPushButton(verificationGroup);
        resendButton->setObjectName("resendButton");
        resendButton->setEnabled(false);

        verticalLayout_verif->addWidget(resendButton);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(660, 110, 261, 241));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/img/images/11220734.png);\n"
"background-color: transparent;\n"
""));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-8, 0, 1031, 471));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        label_4->raise();
        verificationGroup->raise();
        label_3->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label2 = new QLabel(tab_4);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(630, -70, 271, 241));
        label2->setStyleSheet(QString::fromUtf8("image: url(:/img/images/Black_and_White_Blue_Modern_Letter_W_Logo-removebg-preview.png);\n"
"    background-color: transparent;"));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 360, 231, 41));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 110, 431, 241));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/img/images/StartWise (1).png);\n"
"    background-color: transparent;"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1021, 481));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        WidgetContents = new QWidget(tab_4);
        WidgetContents->setObjectName("WidgetContents");
        WidgetContents->setGeometry(QRect(20, 10, 571, 451));
        WidgetContents->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border: 2px solid white;\n"
"    border-radius: 15px; /* Optional: matches the QLabel style */\n"
"}\n"
"\n"
"QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                  stop:0 #0f2027, stop:1 #0049ac); /* Deep blue gradient */\n"
"    border-radius: 15px;\n"
"    padding: 20px;\n"
"    color: white;\n"
"    font-family: 'Segoe UI', Arial, sans-serif;\n"
"    font-size: 14px;\n"
"    border: 2px solid rgba(255,255,255,0.1);\n"
"    box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);\n"
"}\n"
"\n"
"QLabel a {\n"
"    color: #82d0f8; /* Light blue */\n"
"    text-decoration: none;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QLabel a:hover {\n"
"    color: #c0eaff; /* Even lighter blue on hover */\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"QLabel h3 {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    margin-bottom: 10px;\n"
"    font-weight: bold;\n"
"    text-shadow: 0 2px 4px rgba(0,0,0,0.3);\n"
"}\n"
"\n"
"QLabel strong {\n"
"   "
                        " color: #c0eaff; /* Soft sky blue for emphasis */\n"
"    font-weight: 600;\n"
"}\n"
"background-color: transparent;"));
        tabWidget->addTab(tab_4, QString());
        label_2->raise();
        label1->raise();
        pushButton->raise();
        label_5->raise();
        WidgetContents->raise();

        mainLayout->addWidget(tabWidget);


        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Param\303\250tres", nullptr));
        label_6->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Apparence", nullptr));
        label_7->setText(QString());
        clair->setText(QCoreApplication::translate("SettingsDialog", "Clair", nullptr));
        sombre->setText(QCoreApplication::translate("SettingsDialog", "Sombre", nullptr));
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsDialog", "Apparence", nullptr));
        verificationGroup->setTitle(QCoreApplication::translate("SettingsDialog", "V\303\251rification par SMS", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Num\303\251ro de t\303\251l\303\251phone:", nullptr));
        phoneNumberEdit->setPlaceholderText(QCoreApplication::translate("SettingsDialog", "+21612345678", nullptr));
        sendCodeButton->setText(QCoreApplication::translate("SettingsDialog", "Envoyer le code de v\303\251rification", nullptr));
        label1->setText(QCoreApplication::translate("SettingsDialog", "Code de v\303\251rification:", nullptr));
        verificationCodeEdit->setPlaceholderText(QCoreApplication::translate("SettingsDialog", "Entrez le code re\303\247u par SMS", nullptr));
        verifyButton->setText(QCoreApplication::translate("SettingsDialog", "V\303\251rifier", nullptr));
        timerLabel->setText(QString());
        resendButton->setText(QCoreApplication::translate("SettingsDialog", "Renvoyer le code", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SettingsDialog", "Securit\303\251s", nullptr));
        label2->setText(QString());
        pushButton->setText(QCoreApplication::translate("SettingsDialog", "visiter notre website", nullptr));
        label_5->setText(QString());
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SettingsDialog", " A propos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
