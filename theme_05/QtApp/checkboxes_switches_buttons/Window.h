#pragma once

#include <QtWidgets>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget* parent = nullptr);

private:
    // Кнопки, флажки, галочки
    QGroupBox* createFirstExclusiveGroup();
    QGroupBox* createSecondExclusiveGroup();
    QGroupBox* createNonExclusiveGroup();
    QGroupBox* createPushButtonGroup();

    // Окна ввода текста
    QLabel* createLoginPasswordText();
    QTextEdit* createPlainText();

    // Cписки
    QListWidget* createListWidget();
};