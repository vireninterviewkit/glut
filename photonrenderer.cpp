#include "photonrenderer.h"

PhotonRenderer::PhotonRenderer(QWidget *parent)
    : QOpenGLWidget{parent}
{

}

QSize PhotonRenderer::sizeHint() const {
    return QSize(400, 300);
}

void PhotonRenderer::initializeGL() {
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glEnable(GL_POINT_SMOOTH);
}

void PhotonRenderer::paintGL() {
    //qglClearColor(QColor::fromRgb(255, 255, 255));
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//    draw_points();
//    draw_segments();
//    draw_vertices();
//    draw_edges();
}

void PhotonRenderer::resizeGL(int width, int height) {
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);
}
