#include <QtWidgets>
#include <QDebug>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	
	QWidget wgt;

	// RadioButtons
	QGroupBox gbx("&Colors");
	QRadioButton* pradRed = new QRadioButton("&Red");
	QRadioButton* pradGreen = new QRadioButton("&Green");
	QRadioButton* pradBlue = new QRadioButton("&Blue");
	pradRed->setChecked(true);



	// Check Boxs
	QCheckBox* pchkNormal = new QCheckBox("&Normal Check Box");
	pchkNormal->setChecked(true);
	QCheckBox* pchkTristate = new QCheckBox("&Tristate Check Box");
	pchkTristate->setTristate(true);
	pchkTristate->setCheckState(Qt::PartiallyChecked);

	// Buttons
	QPushButton* pcmdNormal = new QPushButton("&Normal Button");
	QPushButton* pcmdToggle = new QPushButton("&Toggle Button");
	pcmdToggle->setCheckable(true);
	pcmdToggle->setChecked(true);
	QPushButton* pcmdFlat = new QPushButton("&Toggle Button");
	pcmdFlat->setFlat(true);
	QPixmap pix(":/img/img/Buhtelka.png");
	QPushButton* pcmdPix = new QPushButton("&Pixmap Button");
	pcmdPix->setIcon(pix);
	pcmdPix->setIconSize(pix.size());

	// Layout
	QVBoxLayout* pvbxLayout = new QVBoxLayout;
	pvbxLayout->addWidget(pchkNormal);
	pvbxLayout->addWidget(pchkTristate);

	pvbxLayout->addWidget(pcmdNormal);
	pvbxLayout->addWidget(pcmdToggle);
	pvbxLayout->addWidget(pcmdFlat);
	pvbxLayout->addWidget(pcmdPix);

	QVBoxLayout* pvbxLayout2 = new QVBoxLayout;

	pvbxLayout2->addWidget(pradRed);
	pvbxLayout2->addWidget(pradBlue);
	pvbxLayout2->addWidget(pradGreen);

	gbx.setLayout(pvbxLayout2);
	wgt.setLayout(pvbxLayout);
	wgt.setLayout(gbx);
	wgt.show();

	return app.exec();
}