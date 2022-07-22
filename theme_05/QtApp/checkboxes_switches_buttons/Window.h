#pragma once

#include <QtWidgets>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget* parent = nullptr);

private:
    QGroupBox* createFirstExclusiveGroup();
    QGroupBox* createSecondExclusiveGroup();
    QGroupBox* createNonExclusiveGroup();
    QGroupBox* createPushButtonGroup();
};