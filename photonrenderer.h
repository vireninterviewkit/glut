#ifndef PHOTONRENDERER_H
#define PHOTONRENDERER_H

#include <QOpenGLWidget>
#include <QWidget>

class PhotonRenderer : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit PhotonRenderer(QWidget *parent = nullptr);

signals:

};

#endif // PHOTONRENDERER_H
