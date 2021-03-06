
// ตาราง3 มิติ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<cmath>

/* Global variables */
char title[] = "3D Shapes";
float a = 0;
float b = 0;
float j = 0;
float d = 1.5;
float e = 0;
float f = -20;
float g = 0;
float k = 0;
float i = 1;
 
/*for move coin*/
float walk_1X = 0.5; //หมาก 1
float walk_1Y = 5;
float walk_1Z = 0;

float walk_2X = 0.5;//หมาก 2
float walk_2Y = 5;
float walk_2Z = -0.5;

float walk_3X = 0.5;//หมาก 3
float walk_3Y = 5;
float walk_3Z = -1;

float walk_4X = 0.5;//หมาก 4
float walk_4Y = 5;
float walk_4Z = -1.5;

float walk_5X = 0.5;//หมาก 5
float walk_5Y = 7;
float walk_5Z = 0;

float walk_6X = 0.5;//หมาก 6
float walk_6Y = 7;
float walk_6Z = -0.5;

float walk_7X = 0.5;//หมาก 7
float walk_7Y = 7;
float walk_7Z = -1;

float walk_8X = 0.5;//หมาก 8
float walk_8Y = 7;
float walk_8Z = -1.5;

float walk_9X = -1.5;//หมาก 9
float walk_9Y = 5;
float walk_9Z = 0;

float walk_0X = -1.5;//หมาก 10
float walk_0Y = 5;
float walk_0Z = -0.5;

float walk_qX = -1.5;//หมาก 11
float walk_qY = 5;
float walk_qZ = -1;

float walk_wX = -1.5;//หมาก 12
float walk_wY = 5;
float walk_wZ = -1.5;

float walk_eX = -1.5;//หมาก 13
float walk_eY = 7;
float walk_eZ = 0;

float walk_rX = -1.5;//หมาก 14
float walk_rY = 7;
float walk_rZ = -0.5;

float walk_tX = -1.5;//หมาก 15
float walk_tY = 7;
float walk_tZ = -1;

float walk_yX = -1.5;//หมาก 16
float walk_yY = 7;
float walk_yZ = -1.5;

//for random
int rnd_number;



int rnd; int val;
void CreateNumber() {
	glNewList(1, GL_COMPILE);//1
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(2, GL_COMPILE);//2
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(3, GL_COMPILE);//3
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(4, GL_COMPILE);//4
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(5, GL_COMPILE);//5
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(6, GL_COMPILE);//6
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(7, GL_COMPILE);//7
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(8, GL_COMPILE);//8
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(9, GL_COMPILE);//9
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(10, GL_COMPILE);//10
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(11, GL_COMPILE);//11
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(12, GL_COMPILE);//12
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(13, GL_COMPILE);//13
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(14, GL_COMPILE);//14
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(15, GL_COMPILE);//15
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(16, GL_COMPILE);//16
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(17, GL_COMPILE);//17
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(18, GL_COMPILE);//18
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(19, GL_COMPILE);//19
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();

	glNewList(20, GL_COMPILE);//20
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glEndList();
}
int random() {
	rnd_number = rand();
	//srand(100);
	val = rand() % 20 + 1;
	//rnd = (int) rnd_number *20+1 ;
	printf("the value is %d\n", val);
	return 0;
}

/* Initialize OpenGL Graphics */
void initGL() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to black and opaque
	CreateNumber();    //random
	random();
	glClearDepth(1.0f);                   // Set background depth to farthest
	glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
	glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
	glShadeModel(GL_SMOOTH);   // Enable smooth shading
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

/* Handler for window-repaint event. Called back when the window first appears and
whenever the window needs to be re-painted. */

void table() {
	glPushMatrix();
	//แถว1
	glPushMatrix();

	//ก้อน1 นับจากขวามือ
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(2.25f, 3.25f, -1.0f);
	glVertex3f(0.25f, 3.25f, -1.0f);
	glVertex3f(0.25f, 3.25f, 1.0f);
	glVertex3f(2.25f, 3.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(2.25f, 1.25f, 1.0f);
	glVertex3f(0.25f, 1.25f, 1.0f);
	glVertex3f(0.25f, 1.25f, -1.0f);
	glVertex3f(2.25f, 1.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(2.25f, 3.25f, 1.0f);
	glVertex3f(0.25f, 3.25f, 1.0f);
	glVertex3f(0.25f, 1.25f, 1.0f);
	glVertex3f(2.25f, 1.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(2.25f, 1.25f, -1.0f);
	glVertex3f(0.25f, 1.25f, -1.0f);
	glVertex3f(0.25f, 3.25f, -1.0f);
	glVertex3f(2.25f, 3.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(0.25f, 3.25f, 1.0f);
	glVertex3f(0.25f, 3.25f, -1.0f);
	glVertex3f(0.25f, 1.25f, -1.0f);
	glVertex3f(0.25f, 1.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(2.25f, 3.25f, -1.0f);
	glVertex3f(2.25f, 3.25f, 1.0f);
	glVertex3f(2.25f, 1.25f, 1.0f);
	glVertex3f(2.25f, 1.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน2
	glPushMatrix();
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(0.0f, 3.25f, -1.0f);
	glVertex3f(-2.0f, 3.25f, -1.0f);
	glVertex3f(-2.0f, 3.25f, 1.0f);
	glVertex3f(0.0f, 3.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(0.0f, 1.25f, 1.0f);
	glVertex3f(-2.0f, 1.25f, 1.0f);
	glVertex3f(-2.0f, 1.25f, -1.0f);
	glVertex3f(0.0f, 1.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(0.0f, 3.25f, 1.0f);
	glVertex3f(-2.0f, 3.25f, 1.0f);
	glVertex3f(-2.0f, 1.25f, 1.0f);
	glVertex3f(0.0f, 1.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(0.0f, 1.25f, -1.0f);
	glVertex3f(-2.0f, 1.25f, -1.0f);
	glVertex3f(-2.0f, 3.25f, -1.0f);
	glVertex3f(0.0f, 3.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-2.0f, 3.25f, 1.0f);
	glVertex3f(-2.0f, 3.25f, -1.0f);
	glVertex3f(-2.0f, 1.25f, -1.0f);
	glVertex3f(-2.0f, 1.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(0.0f, 3.25f, -1.0f);
	glVertex3f(0.0f, 3.25f, 1.0f);
	glVertex3f(0.0f, 1.25, 1.0f);
	glVertex3f(0.0f, 1.25, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อนที่3
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-2.25f, 3.25f, -1.0f);
	glVertex3f(-4.25f, 3.25f, -1.0f);
	glVertex3f(-4.25f, 3.25f, 1.0f);
	glVertex3f(-2.25f, 3.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-2.25f, 1.25f, 1.0f);
	glVertex3f(-4.25f, 1.25f, 1.0f);
	glVertex3f(-4.25f, 1.25f, -1.0f);
	glVertex3f(-2.25f, 1.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-2.25f, 3.25f, 1.0f);
	glVertex3f(-4.25f, 3.25f, 1.0f);
	glVertex3f(-4.25f, 1.25f, 1.0f);
	glVertex3f(-2.25f, 1.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-2.25f, 1.25f, -1.0f);
	glVertex3f(-4.25f, 1.25f, -1.0f);
	glVertex3f(-4.25f, 3.25f, -1.0f);
	glVertex3f(-2.25f, 3.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-4.25f, 3.25f, 1.0f);
	glVertex3f(-4.25f, 3.25f, -1.0f);
	glVertex3f(-4.25f, 1.25f, -1.0f);
	glVertex3f(-4.25f, 1.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-2.25f, 3.25f, -1.0f);
	glVertex3f(-2.25f, 3.25f, 1.0f);
	glVertex3f(-2.25f, 1.25f, 1.0f);
	glVertex3f(-2.25f, 1.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน4
	glPushMatrix();
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-4.50f, 3.25f, -1.0f);
	glVertex3f(-6.50f, 3.25f, -1.0f);
	glVertex3f(-6.50f, 3.25f, 1.0f);
	glVertex3f(-4.50f, 3.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-4.50f, 1.25f, 1.0f);
	glVertex3f(-6.50f, 1.25f, 1.0f);
	glVertex3f(-6.50f, 1.25f, -1.0f);
	glVertex3f(-4.50f, 1.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-4.50f, 3.25f, 1.0f);
	glVertex3f(-6.50f, 3.25f, 1.0f);
	glVertex3f(-6.50f, 1.25f, 1.0f);
	glVertex3f(-4.50f, 1.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-4.50f, 1.25f, -1.0f);
	glVertex3f(-6.50f, 1.25f, -1.0f);
	glVertex3f(-6.50f, 3.25f, -1.0f);
	glVertex3f(-4.50f, 3.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-6.50f, 3.25f, 1.0f);
	glVertex3f(-6.50f, 3.25f, -1.0f);
	glVertex3f(-6.50f, 1.25f, -1.0f);
	glVertex3f(-6.50f, 1.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-4.50f, 3.25f, -1.0f);
	glVertex3f(-4.50f, 3.25f, 1.0f);
	glVertex3f(-4.50f, 1.25f, 1.0f);
	glVertex3f(-4.50f, 1.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//แถว2
	glPushMatrix();
	//ก้อน1 นับจากขวามือ
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(2.25f, 1.0f, -1.0f);
	glVertex3f(0.25f, 1.0f, -1.0f);
	glVertex3f(0.25f, 1.0f, 1.0f);
	glVertex3f(2.25f, 1.0f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(2.25f, -1.0f, 1.0f);
	glVertex3f(0.25f, -1.0f, 1.0f);
	glVertex3f(0.25f, -1.0f, -1.0f);
	glVertex3f(2.25f, -1.0f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(2.25f, 1.0f, 1.0f);
	glVertex3f(0.25f, 1.0f, 1.0f);
	glVertex3f(0.25f, -1.0f, 1.0f);
	glVertex3f(2.25f, -1.0f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(2.25f, -1.0f, -1.0f);
	glVertex3f(0.25f, -1.0f, -1.0f);
	glVertex3f(0.25f, 1.0f, -1.0f);
	glVertex3f(2.25f, 1.0f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(0.25f, 1.0f, 1.0f);
	glVertex3f(0.25f, 1.0f, -1.0f);
	glVertex3f(0.25f, -1.0f, -1.0f);
	glVertex3f(0.25f, -1.0f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(2.25f, 1.0f, -1.0f);
	glVertex3f(2.25f, 1.0f, 1.0f);
	glVertex3f(2.25f, -1.0f, 1.0f);
	glVertex3f(2.25f, -1.0f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน2
	glPushMatrix();
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(-2.0f, 1.0f, -1.0f);
	glVertex3f(-2.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(0.0f, -1.0f, 1.0f);
	glVertex3f(-2.0f, -1.0f, 1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(0.0f, -1.0f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-2.0f, 1.0f, 1.0f);
	glVertex3f(-2.0f, -1.0f, 1.0f);
	glVertex3f(0.0f, -1.0f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(0.0f, -1.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(-2.0f, 1.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-2.0f, 1.0f, 1.0f);
	glVertex3f(-2.0f, 1.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(0.0f, 1.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, -1.0f, 1.0f);
	glVertex3f(0.0f, -1.0f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อนที่3
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-2.25f, 1.0f, -1.0f);
	glVertex3f(-4.25f, 1.0f, -1.0f);
	glVertex3f(-4.25f, 1.0f, 1.0f);
	glVertex3f(-2.25f, 1.0f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-2.25f, -1.0f, 1.0f);
	glVertex3f(-4.25f, -1.0f, 1.0f);
	glVertex3f(-4.25f, -1.0f, -1.0f);
	glVertex3f(-2.25f, -1.0f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-2.25f, 1.0f, 1.0f);
	glVertex3f(-4.25f, 1.0f, 1.0f);
	glVertex3f(-4.25f, -1.0f, 1.0f);
	glVertex3f(-2.25f, -1.0f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-2.25f, -1.0f, -1.0f);
	glVertex3f(-4.25f, -1.0f, -1.0f);
	glVertex3f(-4.25f, 1.0f, -1.0f);
	glVertex3f(-2.25f, 1.0f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-4.25f, 1.0f, 1.0f);
	glVertex3f(-4.25f, 1.0f, -1.0f);
	glVertex3f(-4.25f, -1.0f, -1.0f);
	glVertex3f(-4.25f, -1.0f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-2.25f, 1.0f, -1.0f);
	glVertex3f(-2.25f, 1.0f, 1.0f);
	glVertex3f(-2.25f, -1.0f, 1.0f);
	glVertex3f(-2.25f, -1.0f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน4
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-4.50f, 1.0f, -1.0f);
	glVertex3f(-6.50f, 1.0f, -1.0f);
	glVertex3f(-6.50f, 1.0f, 1.0f);
	glVertex3f(-4.50f, 1.0f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-4.50f, -1.0f, 1.0f);
	glVertex3f(-6.50f, -1.0f, 1.0f);
	glVertex3f(-6.50f, -1.0f, -1.0f);
	glVertex3f(-4.50f, -1.0f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-4.50f, 1.0f, 1.0f);
	glVertex3f(-6.50f, 1.0f, 1.0f);
	glVertex3f(-6.50f, -1.0f, 1.0f);
	glVertex3f(-4.50f, -1.0f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-4.50f, -1.0f, -1.0f);
	glVertex3f(-6.50f, -1.0f, -1.0f);
	glVertex3f(-6.50f, 1.0f, -1.0f);
	glVertex3f(-4.50f, 1.0f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-6.50f, 1.0f, 1.0f);
	glVertex3f(-6.50f, 1.0f, -1.0f);
	glVertex3f(-6.50f, -1.0f, -1.0f);
	glVertex3f(-6.50f, -1.0f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-4.50f, 1.0f, -1.0f);
	glVertex3f(-4.50f, 1.0f, 1.0f);
	glVertex3f(-4.50f, -1.0f, 1.0f);
	glVertex3f(-4.50f, -1.0f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//แถว3
	glPushMatrix();
	//ก้อน1 นับจากขวามือ
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(2.25f, -1.25f, -1.0f);
	glVertex3f(0.25f, -1.25f, -1.0f);
	glVertex3f(0.25f, -1.25f, 1.0f);
	glVertex3f(2.25f, -1.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(2.25f, -3.25f, 1.0f);
	glVertex3f(0.25f, -3.25f, 1.0f);
	glVertex3f(0.25f, -3.25f, -1.0f);
	glVertex3f(2.25f, -3.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(2.25f, -1.25f, 1.0f);
	glVertex3f(0.25f, -1.25f, 1.0f);
	glVertex3f(0.25f, -3.25f, 1.0f);
	glVertex3f(2.25f, -3.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(2.25f, -3.25f, -1.0f);
	glVertex3f(0.25f, -3.25f, -1.0f);
	glVertex3f(0.25f, -1.25f, -1.0f);
	glVertex3f(2.25f, -1.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(0.25f, -1.25f, 1.0f);
	glVertex3f(0.25f, -1.25f, -1.0f);
	glVertex3f(0.25f, -3.25f, -1.0f);
	glVertex3f(0.25f, -3.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(2.25f, -1.25f, -1.0f);
	glVertex3f(2.25f, -1.25f, 1.0f);
	glVertex3f(2.25f, -3.25f, 1.0f);
	glVertex3f(2.25f, -3.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน2
	glPushMatrix();
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(0.0f, -1.25f, -1.0f);
	glVertex3f(-2.0f, -1.25f, -1.0f);
	glVertex3f(-2.0f, -1.25f, 1.0f);
	glVertex3f(0.0f, -1.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(0.0f, -3.25f, 1.0f);
	glVertex3f(-2.0f, -3.25f, 1.0f);
	glVertex3f(-2.0f, -3.25f, -1.0f);
	glVertex3f(0.0f, -3.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(0.0f, -1.25f, 1.0f);
	glVertex3f(-2.0f, -1.25f, 1.0f);
	glVertex3f(-2.0f, -3.25f, 1.0f);
	glVertex3f(0.0f, -3.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(0.0f, -3.25f, -1.0f);
	glVertex3f(-2.0f, -3.25f, -1.0f);
	glVertex3f(-2.0f, -1.25f, -1.0f);
	glVertex3f(0.0f, -1.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-2.0f, -1.25f, 1.0f);
	glVertex3f(-2.0f, -1.25f, -1.0f);
	glVertex3f(-2.0f, -3.25f, -1.0f);
	glVertex3f(-2.0f, -3.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(0.0f, -1.25f, -1.0f);
	glVertex3f(0.0f, -1.25f, 1.0f);
	glVertex3f(0.0f, -3.25f, 1.0f);
	glVertex3f(0.0f, -3.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อนที่3
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-2.25f, -1.25f, -1.0f);
	glVertex3f(-4.25f, -1.25f, -1.0f);
	glVertex3f(-4.25f, -1.25f, 1.0f);
	glVertex3f(-2.25f, -1.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-2.25f, -3.25f, 1.0f);
	glVertex3f(-4.25f, -3.25f, 1.0f);
	glVertex3f(-4.25f, -3.25f, -1.0f);
	glVertex3f(-2.25f, -3.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-2.25f, -1.25f, 1.0f);
	glVertex3f(-4.25f, -1.25f, 1.0f);
	glVertex3f(-4.25f, -3.25f, 1.0f);
	glVertex3f(-2.25f, -3.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-2.25f, -3.25f, -1.0f);
	glVertex3f(-4.25f, -3.25f, -1.0f);
	glVertex3f(-4.25f, -1.25f, -1.0f);
	glVertex3f(-2.25f, -1.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-4.25f, -1.25f, 1.0f);
	glVertex3f(-4.25f, -1.25f, -1.0f);
	glVertex3f(-4.25f, -3.25f, -1.0f);
	glVertex3f(-4.25f, -3.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-2.25f, -1.25f, -1.0f);
	glVertex3f(-2.25f, -1.25f, 1.0f);
	glVertex3f(-2.25f, -3.25f, 1.0f);
	glVertex3f(-2.25f, -3.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน4
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-4.50f, -1.25f, -1.0f);
	glVertex3f(-6.50f, -1.25f,-1.0f);
	glVertex3f(-6.50f, -1.25f, 1.0f);
	glVertex3f(-4.50f, -1.25f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-4.50f, -3.25f, 1.0f);
	glVertex3f(-6.50f, -3.25f, 1.0f);
	glVertex3f(-6.50f, -3.25f, -1.0f);
	glVertex3f(-4.50f, -3.25f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-4.50f, -1.25f, 1.0f);
	glVertex3f(-6.50f, -1.25f, 1.0f);
	glVertex3f(-6.50f, -3.25f, 1.0f);
	glVertex3f(-4.50f, -3.25f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-4.50f, -3.25f, -1.0f);
	glVertex3f(-6.50f, -3.25f, -1.0f);
	glVertex3f(-6.50f, -1.25f, -1.0f);
	glVertex3f(-4.50f, -1.25f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-6.50f, -1.25f, 1.0f);
	glVertex3f(-6.50f, -1.25f, -1.0f);
	glVertex3f(-6.50f, -3.25f, -1.0f);
	glVertex3f(-6.50f, -3.25f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-4.50f, -1.25f, -1.0f);
	glVertex3f(-4.50f, -1.25f, 1.0f);
	glVertex3f(-4.50f, -3.25f, 1.0f);
	glVertex3f(-4.50f, -3.25f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();
	//แถว 4
	glPushMatrix();
	//ก้อน1 นับจากขวามือ
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(2.25f, -3.5f, -1.0f);
	glVertex3f(0.25f, -3.5f, -1.0f);
	glVertex3f(0.25f, -3.5f, 1.0f);
	glVertex3f(2.25f, -3.5f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(2.25f, -5.5f, 1.0f);
	glVertex3f(0.25f, -5.5f, 1.0f);
	glVertex3f(0.25f, -5.5f, -1.0f);
	glVertex3f(2.25f, -5.5f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(2.25f, -3.5f, 1.0f);
	glVertex3f(0.25f, -3.5f, 1.0f);
	glVertex3f(0.25f, -5.5f, 1.0f);
	glVertex3f(2.25f, -5.5f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(2.25f, -5.5f, -1.0f);
	glVertex3f(0.25f, -5.5f, -1.0f);
	glVertex3f(0.25f, -3.5f, -1.0f);
	glVertex3f(2.25f, -3.5f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(0.25f, -3.5f, 1.0f);
	glVertex3f(0.25f, -3.5f, -1.0f);
	glVertex3f(0.25f, -5.5f, -1.0f);
	glVertex3f(0.25f, -5.5f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(2.25f, -3.5f, -1.0f);
	glVertex3f(2.25f, -3.5f, 1.0f);
	glVertex3f(2.25f, -5.5f, 1.0f);
	glVertex3f(2.25f, -5.5f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน2
	glPushMatrix();
	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(0.0f, -3.5f, -1.0f);
	glVertex3f(-2.0f, -3.5f, -1.0f);
	glVertex3f(-2.0f, -3.5f, 1.0f);
	glVertex3f(0.0f, -3.5f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(0.0f, -5.5f, 1.0f);
	glVertex3f(-2.0f, -5.5f, 1.0f);
	glVertex3f(-2.0f, -5.5f, -1.0f);
	glVertex3f(0.0f, -5.5f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(0.0f, -3.5f, 1.0f);
	glVertex3f(-2.0f, -3.5f, 1.0f);
	glVertex3f(-2.0f, -5.5f, 1.0f);
	glVertex3f(0.0f, -5.5f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(0.0f, -5.5f, -1.0f);
	glVertex3f(-2.0f, -5.5f, -1.0f);
	glVertex3f(-2.0f, -3.5f, -1.0f);
	glVertex3f(0.0f, -3.5f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-2.0f, -3.5f, 1.0f);
	glVertex3f(-2.0f, -3.5f, -1.0f);
	glVertex3f(-2.0f, -5.5f, -1.0f);
	glVertex3f(-2.0f, -5.5f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(0.0f, -3.5f, -1.0f);
	glVertex3f(0.0f, -3.5f, 1.0f);
	glVertex3f(0.0f, -5.5f, 1.0f);
	glVertex3f(0.0f, -5.5f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อนที่3
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-2.25f, -3.5f, -1.0f);
	glVertex3f(-4.25f, -3.5f, -1.0f);
	glVertex3f(-4.25f, -3.5f, 1.0f);
	glVertex3f(-2.25f, -3.5f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-2.25f, -5.5f, 1.0f);
	glVertex3f(-4.25f, -5.5f, 1.0f);
	glVertex3f(-4.25f, -5.5f, -1.0f);
	glVertex3f(-2.25f, -5.5f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-2.25f, -3.5f, 1.0f);
	glVertex3f(-4.25f, -3.5f, 1.0f);
	glVertex3f(-4.25f, -5.5f, 1.0f);
	glVertex3f(-2.25f, -5.5f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-2.25f, -5.5f, -1.0f);
	glVertex3f(-4.25f, -5.5f, -1.0f);
	glVertex3f(-4.25f, -3.5f, -1.0f);
	glVertex3f(-2.25f, -3.5f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-4.25f, -3.5f, 1.0f);
	glVertex3f(-4.25f, -3.5f, -1.0f);
	glVertex3f(-4.25f, -5.5f, -1.0f);
	glVertex3f(-4.25f, -5.5f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-2.25f, -3.5f, -1.0f);
	glVertex3f(-2.25f, -3.5f, 1.0f);
	glVertex3f(-2.25f, -5.5f, 1.0f);
	glVertex3f(-2.25f, -5.5f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();

	//ก้อน4
	glPushMatrix();

	glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
									  // Top face (y = 1.0f)
									  // Define vertices in counter-clockwise (CCW) order with normal pointing out
	glColor3f(0.0f, 1.0f, 0.0f);     // Green
	glVertex3f(-4.50f, -3.5f, -1.0f);
	glVertex3f(-6.50f, -3.5f, -1.0f);
	glVertex3f(-6.50f, -3.5f, 1.0f);
	glVertex3f(-4.50f, -3.5f, 1.0f);

	// Bottom face (y = -1.0f)
	glColor3f(1.0f, 0.5f, 0.0f);     // Orange
	glVertex3f(-4.50f, -5.5f, 1.0f);
	glVertex3f(-6.50f, -5.5f, 1.0f);
	glVertex3f(-6.50f, -5.5f, -1.0f);
	glVertex3f(-4.50f, -5.5f, -1.0f);

	// Front face  (z = 1.0f)
	glColor3f(1.0f, 0.0f, 0.0f);     // Red
	glVertex3f(-4.50f, -3.5f, 1.0f);
	glVertex3f(-6.50f, -3.5f, 1.0f);
	glVertex3f(-6.50f, -5.5f, 1.0f);
	glVertex3f(-4.50f, -5.5f, 1.0f);

	// Back face (z = -1.0f)
	glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
	glVertex3f(-4.50f, -5.5f, -1.0f);
	glVertex3f(-6.50f, -5.5f, -1.0f);
	glVertex3f(-6.50f, -3.5f, -1.0f);
	glVertex3f(-4.50f, -3.5f, -1.0f);

	// Left face (x = -1.0f)
	glColor3f(0.0f, 0.0f, 1.0f);     // Blue
	glVertex3f(-6.50f, -3.5f, 1.0f);
	glVertex3f(-6.50f, -3.5f, -1.0f);
	glVertex3f(-6.50f, -5.5f, -1.0f);
	glVertex3f(-6.50f, -5.5f, 1.0f);

	// Right face (x = 1.0f)
	glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
	glVertex3f(-4.50f, -3.5f, -1.0f);
	glVertex3f(-4.50f, -3.5f, 1.0f);
	glVertex3f(-4.50f, -5.5f, 1.0f);
	glVertex3f(-4.50f, -5.5f, -1.0f);
	glEnd();  // End of drawing color-cube
	glPopMatrix();
	glPopMatrix();


	//glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}

void walk(float anglex, float angley) {
	glPushMatrix();
	glRotatef(angley, 0, 1, 0);
	glRotatef(anglex, 1, 0, 0);
	glTranslatef(1, 1, 0);
	glScalef(0.75, 1, 0.75);
	float Pi = 3.1415;

	glBegin(GL_QUAD_STRIP);
	glColor3f(0, 0, 0);
	float angle_strip = (2 * Pi / 20);
	for (int i = 0; i <= 20; i++) {
		float x = cos(angle_strip*i);
		float z = sin(angle_strip*i);
		glVertex3f(x, 0.5, z);
		glVertex3f(x, 0, z);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0, 1, 0);
	float slice_angle = 2 * Pi / 20;
	glVertex3f(0, 0.5, 0);
	for (int i = 0; i <= 20; i++) {
		float x = cos(slice_angle*i);
		float z = sin(slice_angle*i);
		glVertex3f(x, 0.5, z);


	}
	glEnd();

	/*glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 0);
	float slice_angle = 2 * Pi / 20;
	glVertex3f(0, -0.5, 0);
	for (int i = 0; i <= 20; i++) {
	float x = cos(slice_angle*i);
	float z = sin(slice_angle*i);
	glVertex3f(x, -0.5, z);

	}*/
	glEnd();
	glPopMatrix();
}

void keyboard(unsigned char c, int w, int h) {
	switch (c)
	{
	case 'a':
		a = -30;
		b = 10;
		j = 2;
		d = 1.5;
		e = 0;
		f = -20;
		g = 0;
		k = 0;
		i = 1;

		break;
	case 's':
		a = -30; //`ซ้าย ขวา
		b = 0; //บนล่าง
		j = -10;
		d = 1.5;
		e = 0;
		f = -20;
		g = 0;
		k = 0;
		i = 1;
		break;
	case 'd':
		a = 0;
		b = 0;
		j = 0;
		d = 1.5;
		e = 0;
		f = -20;
		g = 0;
		k = 0;
		i = 1;
		break;

	case '1':
		walk_1X = 0.2; walk_1Y = 2.2; walk_1Z = 0.1;
		break;

	case '2':
		walk_2X = 0.2; walk_2Y = 0; walk_2Z = 0.1;
		break;

	case '3':
		walk_3X = 0.2; walk_3Y = -2.2; walk_3Z = 0.1;
		break;

	case '4':
		walk_4X = 0.2; walk_4Y = -4.4; walk_4Z = 0.1;
		break;

	case '5':
		walk_5X = -2; walk_5Y = 2.2; walk_5Z = 0.1;
		break;

	case '6':
		walk_6X = -2; walk_6Y = 0; walk_6Z = 0.1;
		break;

	case '7':
		walk_7X = -2; walk_7Y = -2.2; walk_7Z = 0.1;
		break;

	case '8':
		walk_8X = -2; walk_8Y = -4.4; walk_8Z = 0.1;
		break;

	case '9':
		walk_9X = -4.2; walk_9Y = 2.2; walk_9Z = 0.1;
		break;

	case '0':
		walk_0X = -4.2; walk_0Y = 0; walk_0Z = 0.1;
		break;

	case 'q':
		walk_qX = -4.2; walk_qY = -2.2; walk_qZ = 0.1;
		break;

	case 'w':
		walk_wX = -4.2; walk_wY = -4.4; walk_wZ = 0.1;
		break;

	case 'e':
		walk_eX = -6.4; walk_eY = 2.2; walk_eZ = 0.1;
		break;

	case 'r':
		walk_rX = -6.4; walk_rY = 0; walk_rZ = 0.1;
		break;

	case 't':
		walk_tX = -6.4; walk_tY = -2.2; walk_tZ = 0.1;
		break;

	case 'y':
		walk_yX = -6.4; walk_yY = -4.4; walk_yZ = 0.1;
		break;

	


	}
	glutPostRedisplay();
}

void hole() {
	glPushMatrix();
	glBegin(GL_QUAD_STRIP);
		glVertex3f(0.5,0.5,0);
		glVertex3f(0.5,-0.5,0);
		glVertex3f(-0.5, 0.5, 0);
		glVertex3f(-0.5,-0.5,0);
		
	glEnd();
	glPopMatrix();
}

void number() {
	glBegin(GL_LINE_STRIP); //2
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 1.95, 1.01);
	glVertex3f(0.75, 2.55, 1.01);
	glVertex3f(1.25, 2.55, 1.01);
	glVertex3f(1.25, 1.95, 1.01);
	glVertex3f(1.75, 1.95, 1.01);
	glVertex3f(1.75, 2.55, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//10 0
	glColor3f(0, 0, 0);
	glVertex3f(-1.5, 2.25, 1.01);
	glVertex3f(-0.5, 2.25, 1.01);
	glVertex3f(-0.5, 1.65, 1.01);
	glVertex3f(-1.5, 1.65, 1.01);
	glVertex3f(-1.5, 2.25, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//10 1
	glColor3f(0, 0, 0);
	glVertex3f(-1.5, 2.6, 1.01);
	glVertex3f(-0.5, 2.6, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//3
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, 2.55, 1.01);
	glVertex3f(-3.75, 1.95, 1.01);
	glVertex3f(-3.25, 1.95, 1.01);
	glVertex3f(-3.25, 2.55, 1.01);
	glVertex3f(-3.25, 1.95, 1.01);
	glVertex3f(-2.75, 1.95, 1.01);
	glVertex3f(-2.75, 2.55, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//14
	glColor3f(0, 0, 0);
	glVertex3f(-6.0, 2.65, 1.01);
	glVertex3f(-5.0, 2.65, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//14
	glColor3f(0, 0, 0);
	glVertex3f(-5.0, 2.25, 1.01);
	glVertex3f(-5.5, 2.25, 1.01);
	glVertex3f(-5.5, 1.7, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//14
	glColor3f(0, 0, 0);
	glVertex3f(-6.0, 1.85, 1.01);
	glVertex3f(-5.0, 1.85, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//18
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 0.4, 1.01);
	glVertex3f(1.75, 0.4, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//18
	glColor3f(0, 0, 0);
	glVertex3f(0.75, 0, 1.01);
	glVertex3f(1.75, 0, 1.01);
	glVertex3f(1.75, -0.6, 1.01);
	glVertex3f(0.75, -0.6, 1.01);
	glVertex3f(0.75, 0, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//18
	glColor3f(0, 0, 0);
	glVertex3f(1.25, 0, 1.01);
	glVertex3f(1.25, -0.6, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//4
	glColor3f(0, 0, 0);
	glVertex3f(-0.5, 0.3, 1.01);
	glVertex3f(-1, 0.3, 1.01);
	glVertex3f(-1, -0.5, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//4
	glColor3f(0, 0, 0);
	glVertex3f(-1.5, -0.3, 1.01);
	glVertex3f(-0.5, -0.3, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//4
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, 0.3, 1.01);
	glVertex3f(-3.75, -0.3, 1.01);
	glVertex3f(-3.25, -0.3, 1.01);
	glVertex3f(-3.25, 0.3, 1.01);
	glVertex3f(-2.75, 0.3, 1.01);
	glVertex3f(-2.75, -0.3, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//8
	glColor3f(0, 0, 0);
	glVertex3f(-6.0, 0.3, 1.01);
	glVertex3f(-6.0, -0.3, 1.01);
	glVertex3f(-5.0, -0.3, 1.01);
	glVertex3f(-5.0, 0.3, 1.01);
	glVertex3f(-6.0, 0.3, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//8
	glColor3f(0, 0, 0);
	glVertex3f(-5.5, 0.3, 1.01);
	glVertex3f(-5.5, -0.3, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//1
	glColor3f(0, 0, 0);
	glVertex3f(0.75, -2.25, 1.01);
	glVertex3f(1.75, -2.25, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//7
	glColor3f(0, 0, 0);
	glVertex3f(-0.75, -1.75, 1.01);
	glVertex3f(-0.5, -1.75, 1.01);
	glVertex3f(-0.5, -2.75, 1.01);
	glVertex3f(-1.5, -2.25, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//7
	glColor3f(0, 0, 0);
	glVertex3f(-1, -2.2, 1.01);
	glVertex3f(-1, -2.5, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//20
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, -2.2, 1.01);
	glVertex3f(-3.75, -1.75, 1.01);
	glVertex3f(-3.25, -1.75, 1.01);
	glVertex3f(-3.25, -2.2, 1.01);
	glVertex3f(-2.75, -2.2, 1.01);
	glVertex3f(-2.75, -1.75, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//20
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, -2.4, 1.01);
	glVertex3f(-2.75, -2.4, 1.01);
	glVertex3f(-2.75, -2.85, 1.01);
	glVertex3f(-3.75, -2.85, 1.01);
	glVertex3f(-3.75, -2.4, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//9
	glColor3f(0, 0, 0);
	glVertex3f(-6, -1.85, 1.01);
	glVertex3f(-6, -2.65, 1.01);
	glVertex3f(-5, -2.65, 1.01);
	glVertex3f(-5, -1.85, 1.01);
	glVertex3f(-5.5, -1.85, 1.01);
	glVertex3f(-5.5, -2.65, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//12
	glColor3f(0, 0, 0);
	glVertex3f(0.75, -4.2, 1.01);
	glVertex3f(1.75, -4.2, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//12
	glColor3f(0, 0, 0);
	glVertex3f(0.75, -5, 1.01);
	glVertex3f(0.75, -4.5, 1.01);
	glVertex3f(1.25, -4.5, 1.01);
	glVertex3f(1.25, -5, 1.01);
	glVertex3f(1.75, -5, 1.01);
	glVertex3f(1.75, -4.5, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//6
	glColor3f(0, 0, 0);
	glVertex3f(-0.5, -5, 1.01);
	glVertex3f(-0.5, -4.2, 1.01);
	glVertex3f(-1.5, -4.2, 1.01);
	glVertex3f(-1.5, -5, 1.01);
	glVertex3f(-1, -5, 1.01);
	glVertex3f(-1, -4.2, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//19
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, -4.1, 1.01);
	glVertex3f(-2.75, -4.1, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//19
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, -4.5, 1.01);
	glVertex3f(-3.75, -5.1, 1.01);
	glVertex3f(-2.75, -5.1, 1.01);
	glVertex3f(-2.75, -4.5, 1.01);
	glVertex3f(-3.25, -4.5, 1.01);
	glVertex3f(-3.25, -5.1, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//16
	glColor3f(0, 0, 0);
	glVertex3f(-6, -4.1, 1.01);
	glVertex3f(-5, -4.1, 1.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//16
	glColor3f(0, 0, 0);
	glVertex3f(-5, -5.1, 1.01);
	glVertex3f(-5, -4.5, 1.01);
	glVertex3f(-6, -4.5, 1.01);
	glVertex3f(-6, -5.1, 1.01);
	glVertex3f(-5.5, -5.1, 1.01);
	glVertex3f(-5.5, -4.5, 1.01);

	glEnd();
}
void description() {
	glBegin(GL_QUAD_STRIP);
	glColor3f(0, 1, 1);
	glVertex3f(-7, 9, 0);
	glVertex3f(-3, 9, 0);
	glVertex3f(-7, 5, 0);
	glVertex3f(-3, 5, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-7, 8, 0);
	glVertex3f(-3, 8, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-7, 7, 0);
	glVertex3f(-3, 7, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-7, 6, 0);
	glVertex3f(-3, 6, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-6, 9, 0);
	glVertex3f(-6, 5, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-5, 9, 0);
	glVertex3f(-5, 5, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(-4, 9, 0);
	glVertex3f(-4, 5, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);//y
	glColor3f(0, 0, 0);
	glVertex3f(-6.3, 5.7, 0.01);
	glVertex3f(-6.5, 5.7, 0.01);
	glVertex3f(-6.5, 5.3, 0.01);
	glVertex3f(-6.3, 5.3, 0.01);
	glVertex3f(-6.7, 5.3, 0.01);
	glVertex3f(-6.7, 5.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//t
	glColor3f(0, 0, 0);
	glVertex3f(-6.75, 6.5, 0.01);
	glVertex3f(-6.25, 6.5, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//t
	glColor3f(0, 0, 0);
	glVertex3f(-6.42, 6.3, 0.01);
	glVertex3f(-6.42, 6.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//r
	glColor3f(0, 0, 0);
	glVertex3f(-6.75, 7.6, 0.01);
	glVertex3f(-6.25, 7.6, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//r
	glColor3f(0, 0, 0);
	glVertex3f(-6.5, 7.6, 0.01);
	glVertex3f(-6.35, 7.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//e
	glColor3f(0, 0, 0);
	glVertex3f(-6.7, 8.3, 0.01);
	glVertex3f(-6.7, 8.7, 0.01);
	glVertex3f(-6.3, 8.7, 0.01);
	glVertex3f(-6.3, 8.3, 0.01);
	glVertex3f(-6.5, 8.3, 0.01);
	glVertex3f(-6.5, 8.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//w
	glColor3f(0, 0, 0);
	glVertex3f(-5.3, 5.7, 0.01);
	glVertex3f(-5.7, 5.6, 0.01);
	glVertex3f(-5.5, 5.5, 0.01);
	glVertex3f(-5.7, 5.4, 0.01);
	glVertex3f(-5.3, 5.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//q
	glColor3f(0, 0, 0);
	glVertex3f(-5.7, 6.25, 0.01);
	glVertex3f(-5.7, 6.35, 0.01);
	glVertex3f(-5.3, 6.35, 0.01);
	glVertex3f(-5.3, 6.7, 0.01);
	glVertex3f(-5.5, 6.7, 0.01);
	glVertex3f(-5.5, 6.35, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//o
	glColor3f(0, 0, 0);
	glVertex3f(-5.7, 7.7, 0.01);
	glVertex3f(-5.3, 7.7, 0.01);
	glVertex3f(-5.3, 7.3, 0.01);
	glVertex3f(-5.7, 7.3, 0.01);
	glVertex3f(-5.7, 7.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//9
	glColor3f(0, 0, 0);
	glVertex3f(-5.7, 8.7, 0.01);
	glVertex3f(-5.7, 8.3, 0.01);
	glVertex3f(-5.3, 8.3, 0.01);
	glVertex3f(-5.3, 8.7, 0.01);
	glVertex3f(-5.5, 8.7, 0.01);
	glVertex3f(-5.5, 8.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//8
	glColor3f(0, 0, 0);
	glVertex3f(-4.7, 5.7, 0.01);
	glVertex3f(-4.3, 5.7, 0.01);
	glVertex3f(-4.3, 5.3, 0.01);
	glVertex3f(-4.7, 5.3, 0.01);
	glVertex3f(-4.7, 5.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//8
	glColor3f(0, 0, 0);
	glVertex3f(-4.5, 5.7, 0.01);
	glVertex3f(-4.5, 5.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//7
	glColor3f(0, 0, 0);
	glVertex3f(-4.3, 6.7, 0.01);
	glVertex3f(-4.3, 6.3, 0.01);
	glVertex3f(-4.7, 6.5, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//6
	glColor3f(0, 0, 0);
	glVertex3f(-4.3, 7.3, 0.01);
	glVertex3f(-4.3, 7.7, 0.01);
	glVertex3f(-4.7, 7.7, 0.01);
	glVertex3f(-4.7, 7.3, 0.01);
	glVertex3f(-4.5, 7.3, 0.01);
	glVertex3f(-4.5, 7.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//5
	glColor3f(0, 0, 0);
	glVertex3f(-4.7, 8.7, 0.01);
	glVertex3f(-4.7, 8.3, 0.01);
	glVertex3f(-4.5, 8.3, 0.01);
	glVertex3f(-4.5, 8.7, 0.01);
	glVertex3f(-4.3, 8.7, 0.01);
	glVertex3f(-4.3, 8.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//4
	glColor3f(0, 0, 0);
	glVertex3f(-3.7, 5.3, 0.01);
	glVertex3f(-3.3, 5.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//4
	glColor3f(0, 0, 0);
	glVertex3f(-3.3, 5.7, 0.01);
	glVertex3f(-3.55, 5.7, 0.01);
	glVertex3f(-3.55, 5.2, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//3
	glColor3f(0, 0, 0);
	glVertex3f(-3.7, 6.7, 0.01);
	glVertex3f(-3.7, 6.3, 0.01);
	glVertex3f(-3.3, 6.3, 0.01);
	glVertex3f(-3.3, 6.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//3
	glColor3f(0, 0, 0);
	glVertex3f(-3.5, 6.55, 0.01);
	glVertex3f(-3.5, 6.3, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//2
	glColor3f(0, 0, 0);
	glVertex3f(-3.7, 7.3, 0.01);
	glVertex3f(-3.7, 7.7, 0.01);
	glVertex3f(-3.5, 7.7, 0.01);
	glVertex3f(-3.5, 7.3, 0.01);
	glVertex3f(-3.3, 7.3, 0.01);
	glVertex3f(-3.3, 7.7, 0.01);
	glEnd();
	glBegin(GL_LINE_STRIP);//1
	glColor3f(0, 0, 0);
	glVertex3f(-3.75, 8.5, 0.01);
	glVertex3f(-3.25, 8.5, 0.01);
	glEnd();
}




void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
	glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

									// Render a color-cube consisting of 6 quads with different colors
	glLoadIdentity();  // Reset the model-view matrix
	

	gluLookAt(a, b, j, d, e, f, g, k, i);
	glTranslatef(1.5f, 0.0f, -20.0f);  // Move right and into the screen
									   //gluLookAt(1, 1, 1, 0, 0, 0, 0, 1, 0);
									   //gluLookAt(0, 0, 0, 1.5, 0, 0, -20, 0, 1);
	glPushMatrix();
	glTranslatef(0,0,0.1);
	number();
	glPopMatrix();
	glPushMatrix();//for run number
		glScalef(3,6,1);
		glTranslatef(2, -0.25, 0);
		glColor3f(1,0.5,0);
		hole();
	glPopMatrix();
	//description
	glPushMatrix();
		description();
	glPopMatrix();
	//table;
	glPushMatrix();
	table();
	glPopMatrix();


	glPushMatrix(); // random
	glTranslatef(4.5, -3.5, 0.1);
	glCallList(val);
	glPopMatrix();

	glPushMatrix(); //1
	glTranslatef(walk_1X, walk_1Y, walk_1Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//2
	glTranslatef(walk_2X, walk_2Y, walk_2Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//3
	glTranslatef(walk_3X, walk_3Y, walk_3Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//4
	glTranslatef(walk_4X, walk_4Y, walk_4Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//5
	glTranslatef(walk_5X, walk_5Y, walk_5Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//6
	glTranslatef(walk_6X, walk_6Y, walk_6Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//7
	glTranslatef(walk_7X, walk_7Y, walk_7Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//8
	glTranslatef(walk_8X, walk_8Y, walk_8Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix(); //9
	glTranslatef(walk_9X, walk_9Y, walk_9Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//10
	glTranslatef(walk_0X, walk_0Y, walk_0Z);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//11
	glTranslatef(walk_qX, walk_qY, walk_qZ);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//12
	glTranslatef(walk_wX, walk_wY, walk_wZ);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//13
	glTranslatef(walk_eX, walk_eY, walk_eZ);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//14
	glTranslatef(walk_rX, walk_rY, walk_rZ);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//15
	glTranslatef(walk_tX, walk_tY, walk_tZ);
	walk(90, 0);
	glPopMatrix();

	glPushMatrix();//16
	glTranslatef(walk_yX, walk_yY, walk_yZ);
	walk(90, 0);
	glPopMatrix();

	//glCallList(20);
	//glTranslatef(2, 2, 2);

	glutSwapBuffers();
	glFlush();


}

/* Handler for window re-size event. Called back when the window first appears and
whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
											   // Compute aspect ratio of the new window
	if (height == 0) height = 1;                // To prevent divide by 0
	GLfloat aspect = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset
								  // Enable perspective projection with fovy, aspect, zNear and zFar
	gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {

	random();
	glutInit(&argc, argv);            // Initialize GLUT
	glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
	glutInitWindowSize(640, 480);   // Set the window's initial width & height
	glutInitWindowPosition(100, 100); // Position the window's initial top-left corner
	glutCreateWindow(title);          // Create window with the given title
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);       // Register callback handler for window re-size event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the infinite event-processing loop
	return 0;
}
