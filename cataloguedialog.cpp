#include "cataloguedialog.h"
#include <QSqlQuery>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPixmap>
#include <QMessageBox>
#include <QDialog>
#include <QTextEdit>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QEventLoop>
#include <QJsonArray>
#include <QProcessEnvironment>
#include <QTimer>
#include <QScrollBar>
CatalogueDialog::CatalogueDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Catalogue des Ressources");
    resize(1000, 600); // Set a default size

    // Apply the same stylesheet
    setStyleSheet(R"(
    /* Style général de la fenêtre */
    CatalogueDialog {
        background-color: #f0f4f8;  /* Fond bleu très clair */
        font-family: "Segoe UI", sans-serif;
        font-size: 14px;
    }

    /* Style des labels */
    QLabel {
        color: #2c3e50;  /* Texte bleu foncé */
        font-weight: bold;
        background-color: transparent;  /* Arrière-plan transparent */
    }

    /* Style des champs de saisie */
    QLineEdit, QComboBox, QDateEdit {
        background-color: #ffffff;  /* Fond blanc */
        border: 1px solid #bdc3c7;  /* Bordure grise */
        border-radius: 5px;  /* Coins arrondis */
        padding: 8px;
        font-size: 14px;
        color: #34495e;  /* Texte bleu foncé */
    }

    QLineEdit:focus, QComboBox:focus, QDateEdit:focus {
        border: 1px solid #3498db;  /* Bordure bleue lorsqu'en focus */
        outline: none;
    }

    /* Style des boutons radio */
    QRadioButton {
        color: #2c3e50;  /* Texte bleu foncé */
        font-weight: normal;
        background-color: transparent;  /* Arrière-plan transparent */
    }

    QRadioButton::indicator {
        width: 16px;
        height: 16px;
        border: 1px solid #bdc3c7;  /* Bordure grise */
        border-radius: 8px;  /* Cercle */
    }

    QRadioButton::indicator:checked {
        background-color: #3498db;  /* Fond bleu lorsqu'activé */
        border: 1px solid #3498db;
    }

    /* Style des boutons */
    QPushButton {
        background-color: #3498db;  /* Fond bleu */
        color: #ffffff;  /* Texte blanc */
        border: none;
        border-radius: 5px;  /* Coins arrondis */
        padding: 10px 20px;
        font-size: 14px;
        font-weight: bold;
        transition: background-color 0.3s ease;  /* Transition fluide */
    }

    QPushButton:hover {
        background-color: #2980b9;  /* Fond bleu plus foncé au survol */
    }

    QPushButton:pressed {
        background-color: #1c5980;  /* Fond bleu encore plus foncé lors du clic */
    }

    /* Style spécifique pour le bouton "Décliner" */
    QPushButton[text="Décliner"] {
        background-color: #e74c3c;  /* Fond rouge */
    }

    QPushButton[text="Décliner"]:hover {
        background-color: #c0392b;  /* Fond rouge plus foncé au survol */
    }

    QPushButton[text="Décliner"]:pressed {
        background-color: #96281b;  /* Fond rouge encore plus foncé lors du clic */
    }

    /* Style du calendrier dans QDateEdit */
    QCalendarWidget {
        background-color: #ffffff;  /* Fond blanc */
        border: 1px solid #bdc3c7;  /* Bordure grise */
        border-radius: 5px;  /* Coins arrondis */
    }

    QCalendarWidget QToolButton {
        background-color: #3498db;  /* Fond bleu */
        color: #ffffff;  /* Texte blanc */
        border-radius: 5px;  /* Coins arrondis */
        padding: 5px;
    }

    QCalendarWidget QToolButton:hover {
        background-color: #2980b9;  /* Fond bleu plus foncé au survol */
    }

    QCalendarWidget QMenu {
        background-color: #ffffff;  /* Fond blanc */
        border: 1px solid #bdc3c7;  /* Bordure grise */
    }

    QCalendarWidget QSpinBox {
        background-color: #ffffff;  /* Fond blanc */
        border: 1px solid #bdc3c7;  /* Bordure grise */
        border-radius: 5px;  /* Coins arrondis */
        padding: 5px;
    }

    QCalendarWidget QAbstractItemView {
        background-color: #ffffff;  /* Fond blanc */
        color: #2c3e50;  /* Texte bleu foncé */
        selection-background-color: #3498db;  /* Fond bleu pour la sélection */
        selection-color: #ffffff;  /* Texte blanc pour la sélection */
    }
    )");

    // Create the scroll area and catalog widget
    scrollArea = new QScrollArea(this);
    catalogWidget = new QWidget();
    scrollArea->setWidget(catalogWidget);
    scrollArea->setWidgetResizable(true);

    // Main layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);

    setLayout(mainLayout);

}

void CatalogueDialog::loadResources()
{
    // Clear the existing layout (if any)
    QLayout *existingLayout = catalogWidget->layout();
    if (existingLayout) {
        delete existingLayout;
    }

    // New layout for the catalog widget
    QVBoxLayout *mainLayout = new QVBoxLayout(catalogWidget);
    QHBoxLayout *currentRowLayout = nullptr;

    QSqlQuery query("SELECT ID, NOM, TYPE, QUANTITE, IMAGE, STATUS FROM ressources");
    int itemCount = 0;

    while (query.next()) {
        if (itemCount % 3 == 0) {
            currentRowLayout = new QHBoxLayout();
            currentRowLayout->setSpacing(20);
            mainLayout->addLayout(currentRowLayout);
        }

        int id = query.value(0).toInt();
        QString nom = query.value(1).toString();
        QString type = query.value(2).toString();
        int quantite = query.value(3).toInt();
        QByteArray imageData = query.value(4).toByteArray();
        QString status = query.value(5).toString();

        // Create the card for the resource
        QFrame *card = new QFrame();
        card->setFixedSize(300, 400);
        card->setFrameShape(QFrame::StyledPanel);
        card->setStyleSheet("QFrame { background-color: white; border-radius: 10px; }"
                            "QLabel { font-size: 14px; }"
                            "QPushButton { border-radius: 5px; padding: 5px; }");

        QVBoxLayout *cardLayout = new QVBoxLayout(card);

        // Image
        QLabel *imageLabel = new QLabel();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            pixmap = pixmap.scaled(280, 200, Qt::KeepAspectRatio);
            imageLabel->setPixmap(pixmap);
        } else {
            imageLabel->setText("Pas d'image");
            imageLabel->setAlignment(Qt::AlignCenter);
        }
        imageLabel->setFixedHeight(200);

        // Information labels
        QLabel *nameLabel = new QLabel("Nom: " + nom);
        QLabel *typeLabel = new QLabel("Type: " + type);
        QLabel *qtyLabel = new QLabel("Quantité: " + QString::number(quantite));
        QLabel *statusLabel = new QLabel("Statut: " + status);

        // Button to report panne
        QPushButton *panneButton = new QPushButton("Signaler une panne");
        panneButton->setVisible(status == "En Panne");
        connect(panneButton, &QPushButton::clicked, [this, id]() { showPanneDialog(id); });

        // Add elements to the card
        cardLayout->addWidget(imageLabel);
        cardLayout->addWidget(nameLabel);
        cardLayout->addWidget(typeLabel);
        cardLayout->addWidget(qtyLabel);
        cardLayout->addWidget(statusLabel);
        cardLayout->addWidget(panneButton);

        currentRowLayout->addWidget(card);
        itemCount++;
    }
}
void CatalogueDialog::showPanneDialog(int resourceId)
{
    QDialog *chatDialog = new QDialog(this);
    chatDialog->setWindowTitle(QString("Discussion technique - Ressource ID: %1").arg(resourceId));
    chatDialog->resize(600, 500);
    chatDialog->setStyleSheet(this->styleSheet()); // Hérite du style principal

    // Main container widget and layout
    QWidget *mainWidget = new QWidget();
    QVBoxLayout *mainLayout = new QVBoxLayout(mainWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    // Scroll area for messages
    QScrollArea *scrollArea = new QScrollArea();
    scrollArea->setWidgetResizable(true);

    // Container for messages
    QWidget *messagesContainer = new QWidget();
    m_messagesLayout = new QVBoxLayout(messagesContainer); // Stocker le layout comme membre de classe
    m_messagesLayout->setAlignment(Qt::AlignTop);
    m_messagesLayout->setContentsMargins(10, 10, 10, 10);
    m_messagesLayout->setSpacing(10);

    scrollArea->setWidget(messagesContainer);

    // Input area
    QWidget *inputWidget = new QWidget();
    QHBoxLayout *inputLayout = new QHBoxLayout(inputWidget);
    inputLayout->setContentsMargins(10, 10, 10, 10);

    m_chatInput = new QLineEdit();
    m_chatInput->setPlaceholderText("Décrivez la panne ou posez une question...");
    QPushButton *sendButton = new QPushButton("Envoyer");

    inputLayout->addWidget(m_chatInput, 1);
    inputLayout->addWidget(sendButton);

    // Assemblage
    mainLayout->addWidget(scrollArea, 1);
    mainLayout->addWidget(inputWidget);

    // Set main widget to dialog
    QVBoxLayout *dialogLayout = new QVBoxLayout(chatDialog);
    dialogLayout->addWidget(mainWidget);
    dialogLayout->setContentsMargins(0, 0, 0, 0);

    // Connexions
    connect(sendButton, &QPushButton::clicked, this, &CatalogueDialog::sendChatMessage);
    connect(m_chatInput, &QLineEdit::returnPressed, this, &CatalogueDialog::sendChatMessage);

    // Initialisation
    m_currentResourceId = resourceId;
    m_conversationHistory = QString("Discussion concernant la ressource ID: %1\n").arg(resourceId);

    // Message initial
    addMessageToChat("Système", "Veuillez décrire la panne que vous rencontrez. Je vais vous aider à la résoudre.");

    chatDialog->exec();
}
void CatalogueDialog::sendChatMessage()
{
    QString userMessage = m_chatInput->text().trimmed();
    if (userMessage.isEmpty()) return;

    // Ajouter le message de l'utilisateur au chat
    addMessageToChat("Vous", userMessage);
    m_conversationHistory += QString("\nUtilisateur: %1").arg(userMessage);

    m_chatInput->clear();

    // Envoyer à l'IA et obtenir la réponse
    QString aiResponse = getAIResponse(m_conversationHistory);

    // Ajouter la réponse au chat
    addMessageToChat("Assistant Technique", aiResponse);
    m_conversationHistory += QString("\nAssistant: %1").arg(aiResponse);

    // Enregistrer la conversation dans la base de données
    saveConversationToDatabase();
}
void CatalogueDialog::addMessageToChat(const QString &sender, const QString &message)
{
    // Créer un widget pour le message
    QWidget *messageWidget = new QWidget();
    QHBoxLayout *messageLayout = new QHBoxLayout(messageWidget);
    messageLayout->setContentsMargins(0, 0, 0, 0);

    // Créer un label pour le message
    QLabel *messageLabel = new QLabel(message);
    messageLabel->setWordWrap(true);
    messageLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
    messageLabel->setMaximumWidth(400); // Largeur maximale pour les messages

    // Appliquer le style selon l'expéditeur
    if (sender == "Vous") {
        messageLabel->setStyleSheet(
            "background-color: #d1f7c4;"
            "color: #000000;"
            "border-radius: 8px;"
            "padding: 10px;"
            "margin-left: 50px;" // Marge à gauche pour les messages utilisateur
            );
        messageLayout->addStretch();
        messageLayout->addWidget(messageLabel);
    } else {
        messageLabel->setStyleSheet(
            "background-color: #f0f0f0;"
            "color: #000000;"
            "border-radius: 8px;"
            "padding: 10px;"
            "margin-right: 50px;" // Marge à droite pour les autres messages
            );
        messageLayout->addWidget(messageLabel);
        messageLayout->addStretch();
    }

    // Ajouter le widget message au layout
    m_messagesLayout->addWidget(messageWidget);

    // Faire défiler vers le bas automatiquement
    QScrollArea *scrollArea = qobject_cast<QScrollArea*>(messageWidget->parentWidget()->parentWidget());
    if (scrollArea) {
        QTimer::singleShot(100, [scrollArea]() {
            scrollArea->verticalScrollBar()->setValue(scrollArea->verticalScrollBar()->maximum());
        });
    }
}
void CatalogueDialog::saveConversationToDatabase()
{
    QSqlQuery query;
    query.prepare("UPDATE ressources SET PANNE_DESCRIPTION = :conv WHERE ID = :id");
    query.bindValue(":conv", m_conversationHistory);
    query.bindValue(":id", m_currentResourceId);
    query.exec();
}

QString CatalogueDialog::getAIResponse(const QString &conversation)
{
    QNetworkAccessManager manager;
    QUrl url("https://generativelanguage.googleapis.com/v1beta/models/gemini-2.0-flash:generateContent?key=AIzaSyADBWgQBN7Wfkf8QXN_0HjeVVG-bqChBus");

    QJsonObject contentPart;
    contentPart["text"] = QString("Vous êtes un assistant technique expert. Répondez en français de manière concise et technique.\n"
                                  "Contexte: %1").arg(conversation);

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject payload{
        {"contents", QJsonArray{
                         QJsonObject{
                             {"parts", QJsonArray{
                                           QJsonObject{{"text", contentPart["text"]}}
                                       }}
                         }
                     }}
    };

    QNetworkReply *reply = manager.post(request, QJsonDocument(payload).toJson());

    QEventLoop loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError) {
        return "Désolé, je ne peux pas répondre pour le moment. Veuillez réessayer plus tard.";
    }

    QJsonDocument response = QJsonDocument::fromJson(reply->readAll());
    reply->deleteLater();

    return response["candidates"].toArray().first()["content"]["parts"].toArray().first()["text"].toString();
}
void CatalogueDialog::showSolutionsDialog(int resourceId, const QString &solutions)
{
    QDialog solutionsDialog(this);
    solutionsDialog.setWindowTitle("Solutions proposées pour la ressource ID: " + QString::number(resourceId));
    solutionsDialog.setFixedSize(500, 400);

    // Apply the same stylesheet as CatalogueDialog with slight customization
    solutionsDialog.setStyleSheet(this->styleSheet() + R"(
        QLabel#titleLabel {
            font-weight: bold;
            font-size: 18px;
            color: #2c3e50; /* Darker blue for the title */
            margin-bottom: 10px;
        }
    QLabel {
        color: #2c3e50;  /* Texte bleu foncé */
        font-weight: bold;
        background-color: transparent;  /* Arrière-plan transparent */
    }


        QTextEdit {
            background-color: #ffffff; /* White background for the text area */
            border: 1px solid #bdc3c7; /* Light grey border */
            border-radius: 5px;
            padding: 8px;
            font-size: 14px;
            color: #000000; /* Black text */
        }

        QPushButton {
            background-color: #3498db; /* Blue background */
            color: #ffffff; /* White text */
            border: none;
            border-radius: 5px;
            padding: 10px 20px;
            font-size: 14px;
            font-weight: bold;
        }

        QPushButton:hover {
            background-color: #2980b9; /* Darker blue on hover */
        }

        QPushButton:pressed {
            background-color: #1c5980; /* Even darker blue when pressed */
        }
    )");

    // Layout for the dialog
    QVBoxLayout *layout = new QVBoxLayout(&solutionsDialog);

    // Title
    QLabel *title = new QLabel("Solutions proposées par l'IA:");
    title->setObjectName("titleLabel"); // Use the custom style defined above

    // Solutions text area
    QTextEdit *solutionsEdit = new QTextEdit();
    solutionsEdit->setPlainText(solutions);
    solutionsEdit->setReadOnly(true);

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer");

    // Add components to the layout
    layout->addWidget(title);
    layout->addWidget(solutionsEdit);
    layout->addWidget(closeButton);

    // Connect the close button to close the dialog
    connect(closeButton, &QPushButton::clicked, &solutionsDialog, &QDialog::accept);

    // Execute the dialog
    solutionsDialog.exec();
}
void CatalogueDialog::onPanneButtonClicked(int resourceId)
{
    // Call the existing showPanneDialog method to handle the panne report
    showPanneDialog(resourceId);
}
