//
//  darwin.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifdef __APPLE_CC__
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif
#include <iostream>
#include <assert.h>

#include "darwin.hpp"

static darwin *g_darwin_ = 0;

static void update_ui(void) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  assert(g_darwin_);
  g_darwin_->show_scene(0);
}

darwin::~darwin() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void darwin::construct(int argc,  char * argv[]) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  
  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("Photon Darwin Window");
  g_darwin_ = this; //TODO: ugly work around
  glutDisplayFunc(update_ui);
  glutMainLoop();
}

void darwin::show_scene(unsigned int flags) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  glClear(GL_COLOR_BUFFER_BIT);
  glPointSize(16);
  glBegin(GL_POINTS);
  glColor3f(1, 0, 0);
  glVertex3f(-0.6, -0.75, 0.5);
  glColor3f(0, 1, 0);
  glVertex3f(0.6, -0.75, 0);
  glColor3f(0, 0, 1);
  glVertex3f(0, 0.75, 0);
  glEnd();
  glFlush();
}
