#ifndef PHOTONMAINWINDOW_H
#define PHOTONMAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QApplication>
#include <QGridLayout>
#include <QWidget>
#include <QPushButton>
#include <QDir>
#include <QListWidget>
#include <QOpenGLWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QGridLayout>
#include <QCheckBox>
#include <QFileDialog>

class PhotonRenderer: public QOpenGLWidget {

};

class PhotonMainWindow : public QWidget
{
    Q_OBJECT

private:
    QDir selected_imdf_dir_;
    QString selected_imdf_name_;
    QListWidget *imdf_file_choices_;
    QLabel *status_label_;
    PhotonRenderer *renderer_;

public:
    ~PhotonMainWindow();
    PhotonMainWindow(QWidget *parent = 0);
public Q_SLOTS:
    void selectOneIMDFFile();
    void browse();
    void currentScreenShot();
    void doOption1();
    void doOption2();
private:
    void loadDefaultImdfFiles();
    QGridLayout *setupUI();
};

#endif // PHOTONMAINWINDOW_H
