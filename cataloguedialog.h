#ifndef CATALOGUEDIALOG_H
#define CATALOGUEDIALOG_H

#include <QDialog>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QSqlQuery>
#include <QFrame>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>
class CatalogueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CatalogueDialog(QWidget *parent = nullptr);

    // Method to populate the catalog with resources from the database
    void loadResources();
    void showSolutionsDialog(int resourceId, const QString &solutions);
    QString getAISolutions(const QString &description);


    void saveConversationToDatabase();
    QString getAIResponse(const QString &conversation);

private slots:
    void addMessageToChat(const QString &sender, const QString &message);
    void sendChatMessage();
    void onPanneButtonClicked(int resourceId); // Slot to handle "Signaler une panne" button
    void showPanneDialog(int resourceId);     // Show dialog for reporting panne

private:
    QWidget *catalogWidget;    // Widget containing all catalog cards
    QScrollArea *scrollArea;   // Scroll area for the catalog
    QTextEdit *m_chatDisplay;
    QLineEdit *m_chatInput;
    QPushButton *m_sendButton;
    int m_currentResourceId;
    QString m_conversationHistory;
    QVBoxLayout *m_chatLayout = nullptr; // dans CatalogueDialog.h

    QVBoxLayout *m_messagesLayout; // Pour stocker le layout des messages
};

#endif // CATALOGUEDIALOG_H
