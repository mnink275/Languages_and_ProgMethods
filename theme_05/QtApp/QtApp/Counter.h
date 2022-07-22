#pragma once

#include <QObject>

class Counter : public QObject {
	Q_OBJECT
public:
	Counter();

public slots:
	void slotInc();

signals:
	void goodbye();
	void counterChanged(int);

private:
	int m_nValue;
};