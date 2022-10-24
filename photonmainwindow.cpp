#include <iostream>

#include <QListWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QCheckBox>
#include <QFileDialog>

#include "photonmainwindow.h"

PhotonMainWindow::~PhotonMainWindow()
{
}

PhotonMainWindow::PhotonMainWindow(QWidget *parent) : QWidget(parent),
    imdf_file_choices_(0), status_label_(0), renderer_(0)
{
    QString str = QDir::currentPath();
    std::cout << str.toStdString() << std::endl;
    selected_imdf_dir_ = QDir(QDir::currentPath(), tr("*.geojson"));
    selected_imdf_name_ = tr("");

    QVBoxLayout* boxLayout = new QVBoxLayout();
    renderer_ = new PhotonRenderer();
    QGridLayout *grid = setupUI();
    boxLayout->addWidget(renderer_);
    boxLayout->addLayout(grid);

    setLayout(boxLayout);
    loadDefaultImdfFiles();
    setWindowTitle("PHOTON Renderer");
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

void PhotonMainWindow::loadDefaultImdfFiles() {
    QFileInfoList files = selected_imdf_dir_.entryInfoList();
    imdf_file_choices_->clear();
    if (selected_imdf_dir_.count() == 0) {
        return;
    }
    for (auto it = files.begin(); it != files.end(); ++it) {
        imdf_file_choices_->addItem(it->fileName());
    }
    imdf_file_choices_->setCurrentRow(0);
}

void PhotonMainWindow::selectOneIMDFFile() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    selected_imdf_name_ = imdf_file_choices_->currentItem()->text();
    QString imdfFilePath = selected_imdf_dir_.filePath(selected_imdf_name_);
    std::cout << imdfFilePath.toStdString() << std::endl;
    status_label_->setText(imdfFilePath);
}

void PhotonMainWindow::browse() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    QString path = QFileDialog::getExistingDirectory(0, tr("Select IMDF files folder"), selected_imdf_dir_.absolutePath());
    if (path.length()==0) return;
    selected_imdf_dir_.setPath(path);
    loadDefaultImdfFiles();
}

void PhotonMainWindow::currentScreenShot() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void PhotonMainWindow::doOption1() {
 std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void PhotonMainWindow::doOption2() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

QGridLayout *PhotonMainWindow::setupUI() {
    QGridLayout *grid = new QGridLayout();
    status_label_ = new QLabel("Tap to select IMDF file.");
    imdf_file_choices_ = new QListWidget();
    connect(imdf_file_choices_,
            SIGNAL( itemDoubleClicked(QListWidgetItem*)),
            this,
            SLOT(selectOneIMDFFile())
            );
    QCheckBox *option1 = new QCheckBox("Main edges");
    QCheckBox *option2 = new QCheckBox("Internal edges");
    QObject::connect(option1, SIGNAL(clicked()), this, SLOT(doOption1()));
    QObject::connect(option2, SIGNAL(clicked()), this, SLOT(doOption2()));
    QPushButton *btn1 = new QPushButton("Browse");
    QPushButton *btn2 = new QPushButton("Capture");
    QObject::connect(btn1, SIGNAL(clicked()), this, SLOT(browse()));
    QObject::connect(btn2, SIGNAL(clicked()), this, SLOT(currentScreenShot()));

    grid->addWidget(status_label_, 0, 0);
    grid->addWidget(imdf_file_choices_, 1, 0);
    grid->addWidget(option1, 2, 0);
    grid->addWidget(option2, 3, 0);
    grid->addWidget(btn1, 4, 0);
    grid->addWidget(btn2, 5, 0);

    return grid;
}
