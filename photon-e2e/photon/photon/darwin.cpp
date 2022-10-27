//
//  darwin.cpp
//  photon
//
//  Created by Virendra Shakya on 10/26/22.
//

#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
#include "darwin.hpp"

//void display() {
//  glClear(GL_COLOR_BUFFER_BIT);
//  glPointSize(16);
//  glBegin(GL_POINTS);
//  glColor3f(1, 0, 0);
//  glVertex3f(-0.6, -0.75, 0.5);
//  glColor3f(0, 1, 0);
//  glVertex3f(0.6, -0.75, 0);
//  glColor3f(0, 0, 1);
//  glVertex3f(0, 0.75, 0);
//  glEnd();
//  glFlush();
//}

//int setup_glut(int argc, char** argv) {
//  glutInit(&argc, argv);
//  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//  // Position window at (80,80)-(480,380) and give it a title.
//  glutInitWindowPosition(80, 80);
//  glutInitWindowSize(400, 300);
//  glutCreateWindow("Photon Darwin Window");
//
//  glutDisplayFunc(display);
//  glutMainLoop();
//  return 0;
//}

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
  
  glutDisplayFunc(&darwin::update_ui);
  glutMainLoop();
}

void darwin::update_ui() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
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
