#include <QtWidgets>
#include "Window.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	Window buttons;
	buttons.show();

	return app.exec();
}