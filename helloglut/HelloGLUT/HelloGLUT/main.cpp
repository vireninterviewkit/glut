
#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

// Clears the current window and draws a triangle.
void display() {
  
  // Set every pixel in the frame buffer to the current clear color.
  glClear(GL_COLOR_BUFFER_BIT);
  
  // Drawing is done by specifying a sequence of vertices.  The way these
  // vertices are connected (or not connected) depends on the argument to
  // glBegin.  GL_POLYGON constructs a filled polygon.
  
  // test+
  // glBegin(GL_POLYGON);
  // try points of point size 16.
  glPointSize(16);
  glBegin(GL_POINTS);
  // test-
  glColor3f(1, 0, 0); glVertex3f(-0.6, -0.75, 0.5);
  glColor3f(0, 1, 0); glVertex3f(0.6, -0.75, 0);
  glColor3f(0, 0, 1); glVertex3f(0, 0.75, 0);
  glEnd();
  
  // Flush drawing command buffer to make drawing happen as soon as possible.
  glFlush();
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.
int main(int argc, char** argv) {
  
  // Use a single buffered window in RGB mode (as opposed to a double-buffered
  // window or color-index mode).
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  
  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("Photon Renderer");
  
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}




#if 0 // works - only window though


#ifdef __APPLE__
#include <GLUT/glut.h>
#include <stdlib.h>
#else
#include <GL/glut.h>
#endif


void init(void)
{
  //Put OpenGL Initializing Code here
  
}

void display(void)
{
  //Put Drawing Code Here
  
  glutSwapBuffers();
}

void reshape (int w, int h)
{
  //Put Resizing Code Here
  
}

void keyboard(unsigned char key, int x, int y)
{
  switch (key) {
    case 27:
    case 'q':
    case 'Q':
      exit(0);
      break;
  }
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  
  //Select Pixel Format Attributes
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  
  //Configure Window
  glutInitWindowSize (640, 480);
  glutInitWindowPosition (100, 100);
  
  //Create the Window and Set up Rendering Context
  glutCreateWindow (argv[0]);
  
  //Configure Rendering Context
  init ();
  
  //Connect callback functions that will respond to events
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  
  //Start listening for events
  glutMainLoop();
  return 0;
}

#endif
