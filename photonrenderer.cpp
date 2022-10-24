#include "photonrenderer.h"

PhotonRenderer::PhotonRenderer(QWidget *parent)
    : QOpenGLWidget{parent}
{

}

QSize PhotonRenderer::sizeHint() const {
    //return QSize(400, 300);
    return QSize(600, 600);
}

void PhotonRenderer::initializeGL() {
//    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glEnable(GL_BLEND);
//    glEnable(GL_POINT_SMOOTH);
}

void PhotonRenderer::paintGL() {
    //qglClearColor(QColor::fromRgb(255, 255, 255));
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        /*
    glColor3f(1.0f, 0.0f, 0.0f);
    glPointSize(20);
    glBegin(GL_POINTS);
    glVertex2f(0, 2);
    glVertex2f(-2, -1);
    glVertex2f(1, -1);
    glEnd(); */

    //clear color and depth buffer
        //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        //glLoadIdentity();//load identity matrix
glClearColor(0.0, 0.0, 0.0, 0.0);
       // glTranslatef(0.0f,0.0f,-4.0f);//move forward 4 units

        glColor3f(0.0f,0.0f,1.0f); //blue color

        glPointSize(10.0f);//set point size to 10 pixels

        glBegin(GL_POINTS); //starts drawing of points
          glVertex3f(1.0f,1.0f,0.0f);//upper-right corner
          glVertex3f(-1.0f,-1.0f,0.0f);//lower-left corner
        glEnd();//end drawing of points
}

void PhotonRenderer::resizeGL(int width, int height) {
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);
}
