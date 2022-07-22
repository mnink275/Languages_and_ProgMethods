#include "Window.h"


Window::Window(QWidget* parent) : QWidget(parent)
{
    QGridLayout* grid = new QGridLayout;
    grid->addWidget(createFirstExclusiveGroup(), 0, 0);
    grid->addWidget(createSecondExclusiveGroup(), 1, 0);                
    grid->addWidget(createNonExclusiveGroup(), 0, 1);
    grid->addWidget(createPushButtonGroup(), 1, 1);
    grid->addWidget(createLoginPasswordText(), 0, 2);
    grid->addWidget(createPlainText(), 1, 2);
    grid->addWidget(createListWidget(), 2, 0);
    setLayout(grid);

    setWindowTitle(tr("Group Boxes"));
    resize(680, 350);
}

QGroupBox* Window::createFirstExclusiveGroup()
{
    QGroupBox* groupBox = new QGroupBox(tr("Exclusive Radio Buttons"));

    QRadioButton* radio1 = new QRadioButton(tr("&Radio button 1"));
    QRadioButton* radio2 = new QRadioButton(tr("R&adio button 2"));
    QRadioButton* radio3 = new QRadioButton(tr("Ra&dio button 3"));
    radio1->setChecked(true);

    QVBoxLayout* vbox = new QVBoxLayout;
    vbox->addWidget(radio1);
    vbox->addWidget(radio2);
    vbox->addWidget(radio3);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox* Window::createSecondExclusiveGroup()
{
    QGroupBox* groupBox = new QGroupBox(tr("E&xclusive Radio Buttons"));
    groupBox->setCheckable(true);
    groupBox->setChecked(false);
    QRadioButton* radio1 = new QRadioButton(tr("Rad&io button 1"));
    QRadioButton* radio2 = new QRadioButton(tr("Radi&o button 2"));
    QRadioButton* radio3 = new QRadioButton(tr("Radio &button 3"));
    radio1->setChecked(true);
    QCheckBox* checkBox = new QCheckBox(tr("Ind&ependent checkbox"));
    checkBox->setChecked(true);

    QVBoxLayout* vbox = new QVBoxLayout;
    vbox->addWidget(radio1);
    vbox->addWidget(radio2);
    vbox->addWidget(radio3);
    vbox->addWidget(checkBox);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox* Window::createNonExclusiveGroup()
{
    QGroupBox* groupBox = new QGroupBox("&Non-Exclusive Checkboxes");
    groupBox->setFlat(true);
    QCheckBox* checkBox1 = new QCheckBox("Cheackbox 1");
    checkBox1->setCheckable(true);
    QCheckBox* checkBox2 = new QCheckBox("Cheackbox 2");
    checkBox2->setChecked(true);
    checkBox2->setCheckable(true);
    QCheckBox* triState = new QCheckBox("Tri-state button");
    triState->setTristate(true);
    triState->setCheckState(Qt::PartiallyChecked);

    QVBoxLayout* vbox = new QVBoxLayout;
    vbox->addWidget(checkBox1);
    vbox->addWidget(checkBox2);
    vbox->addWidget(triState);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox* Window::createPushButtonGroup()
{
    QGroupBox* groupBox = new QGroupBox("&Non-Exclusive Checkboxes");
    groupBox->setCheckable(true);
    groupBox->setChecked(true);
    QPushButton* pushButton = new QPushButton(tr("&Normal Button"));
    QPushButton* toggleButton = new QPushButton(tr("&Toggle Button"));
    toggleButton->setCheckable(true);
    toggleButton->setChecked(true);
    QPushButton* flatButton = new QPushButton(tr("&Flat Button"));
    flatButton->setFlat(true);
    QPushButton* popupButton = new QPushButton(tr("Pop&up Button"));
    QMenu* menu = new QMenu(this);
    menu->addAction(tr("&First Item"));
    menu->addAction(tr("&Second Item"));
    menu->addAction(tr("&Third Item"));
    menu->addAction(tr("F&ourth Item"));
    popupButton->setMenu(menu);
    QVBoxLayout* vbox = new QVBoxLayout;
    vbox->addWidget(pushButton);
    vbox->addWidget(toggleButton);
    vbox->addWidget(flatButton);
    vbox->addWidget(popupButton);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QLabel* Window::createLoginPasswordText()
{
    QLabel* plblDisplay = new QLabel;

    plblDisplay->setFrameStyle(QFrame::Box | QFrame::Raised);
    plblDisplay->setLineWidth(2);

    QLabel* plblText = new QLabel("&Text:");
    QLineEdit* ptxt = new QLineEdit();
    plblText->setBuddy(ptxt);
    QObject::connect(ptxt, SIGNAL(textChanged(const QString&)),
        plblText, SLOT(setText(const QString&)));

    QLabel* plblPassword = new QLabel("&Password:");
    QLineEdit* ptxtPassword = new QLineEdit;
    plblPassword->setBuddy(ptxtPassword);
    ptxtPassword->setEchoMode(QLineEdit::Password);

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(plblText);
    pvbxLayout->addWidget(ptxt);
    pvbxLayout->addWidget(plblPassword);
    pvbxLayout->addWidget(ptxtPassword);
    plblDisplay->setLayout(pvbxLayout);
    
    return plblDisplay;
}

QTextEdit* Window::createPlainText()
{
    QTextEdit* ptxtEdit = new QTextEdit;
    ptxtEdit->setFrameShape(QFrame::Panel);
    ptxtEdit->setLineWidth(2);
    ptxtEdit->setHtml(
        "<HÒÌL>"
        "<BODY BGCOLOR=#EBBC44>"
        "<CENTER><IMG SRC=\":/toTxt/img/Buhtelka.png\"></CENTER>"
        "<H2><CENÒER>Gnome Poem</CENÒER></H2>"
        "<FONÒ COLOR=BLACK>"
        "<Ð ALIGN=\"center\">"
            "<I>"
            "Magic! Magic'<BR>"
            "Magic! Magic!<BR>"
            "Magic! Magic!<BR>"
            "..."
            "</I>"
        "</Ð>"
        "</FONÒ>"
        "</BODY>"
        "</HTML>"
    );
    ptxtEdit->resize(320, 350);

    return ptxtEdit;
}

QListWidget* Window::createListWidget()
{
    QStringList lst;
    QListWidget* plwgt = new QListWidget;
    QListWidgetItem* pitem = 0;

    lst << "Linux" << "Window" << "MacOSX" << "Android";
    foreach(QString str, lst) {
        pitem = new QListWidgetItem(str, plwgt);
    }

    return plwgt;
}