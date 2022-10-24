#ifndef PHOTONMAINWINDOW_H
#define PHOTONMAINWINDOW_H

#include <QWidget>
#include <QDir>
#include "photonrenderer.h"

class QListWidget;
class QLabel;
class QGridLayout;

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
