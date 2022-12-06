#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include<cstdio>
#include<time.h>

# define PI           3.14159265358979323846
using namespace std;

void memorial() {
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);

    glVertex2f(-0.01f, 0.7f);
    glVertex2f(0.01f, 0.7f);
    glVertex2f(0.0f, 0.75f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(204, 204, 204);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.0f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(0.0f, 0.0f);
	glVertex2d(0.125f, 0.2f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.125f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(166, 166, 166);

	glVertex2f(-0.115f, 0.215f);
	glVertex2f(-0.125f, 0.2f);
	glVertex2f(-0.115f, 0.185f);
	glVertex2f(0.115f, 0.185f);
	glVertex2f(0.125f, 0.2f);
	glVertex2f(0.115f, 0.215f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.01f, 0.7f);
	glVertex2f(0.00f, 0.7f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.2f, -0.1f);
	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.01f, 0.7f);
	glVertex2f(-0.00f, 0.7f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.06f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.06f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.055f, 0.52f);
	glVertex2f(0.054f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.055f, 0.52f);
	glVertex2f(-0.054f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.095f, 0.42f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.095f, 0.42f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.167f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.167f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.1568f, 0.316f);
	glVertex2f(0.16f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.51f, -0.1f);
	glVertex2f(-0.1568f, 0.316f);
	glVertex2f(-0.16f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.17f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.51f, -0.1f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.17f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.615f, -0.1f);
	glVertex2f(0.15f, 0.33f);
	glVertex2f(0.167f, 0.3f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.615f, -0.1f);
	glVertex2f(-0.15f, 0.33f);
	glVertex2f(-0.167f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.61f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.29f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.29f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.718f, -0.1f);
	glVertex2f(0.25f, 0.24f);
	glVertex2f(0.275f, 0.21f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.718f, -0.1f);
	glVertex2f(-0.25f, 0.24f);
	glVertex2f(-0.275f, 0.21f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.71f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.3f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);

	glColor3ub(204, 204, 204);
	glVertex2f(-0.71f, -0.1f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.3f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(230, 230, 230);
	glVertex2f(0.8f,-0.1f);
    glVertex2f(0.82f, -0.1f);
    glVertex2f(0.25f,0.241f);
    glVertex2f(0.265f, 0.221f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.82f, -0.1f);
    glVertex2f(-0.25f,0.241f);
    glVertex2f(-0.265f, 0.221f);

	glEnd();
}



void flag() {
    glPushMatrix();               ///same as glBegin kaj kore
    glTranslatef(0.09,0.0,0.0);  ///produces the translation specified by (x, y, z)

    glBegin(GL_QUADS);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.1f, -1.0f);
    glVertex2f(0.1f, -1.0f);
    glVertex2f(0.05f, -0.9f);
    glVertex2f(-0.05f, -0.9f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);

    glVertex2f(-0.01f, -1.0f);
    glVertex2f(0.01f, -1.0f);
    glVertex2f(0.01f, 0.05f);
    glVertex2f(-0.01f, 0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 51);

    glVertex2f(0.01f, 0.05f);
    glVertex2f(0.37f, 0.05f);
    glVertex2f(0.37f, -0.2f);
    glVertex2f(0.01f, -0.2f);

    glEnd();

    float x = 0.19f, y = -0.07f, r = 0.07;
    float twicePie = 2.0 * 3.1416;
    int trainglePoints = 20;

    glBegin(GL_TRIANGLE_FAN);   ///Gl_TRIANGLE_FAN can be used for drawing filled-in polygons
    glColor3ub(255, 0, 0);

    for(int i = 0; i<=trainglePoints; i++) {
        glVertex2f(x + r * cos(i * twicePie / trainglePoints),
                   y + r * sin(i * twicePie / trainglePoints));
    }

    glEnd();
    glPopMatrix();
}

void road() {

    glLoadIdentity();   ///parameters are not combined with the previous one
	glMatrixMode(GL_MODELVIEW);   ///sets the current matrix mode jno gari thik thake
	glPushMatrix();
    glTranslatef(0,-.7,0);    ///position
      glBegin(GL_POLYGON);
      glColor3f(0.698, 0.745, 0.7098);
      glVertex3f(-1.0f, -0.33f, 0.0f);
      glVertex3f(1.0f, -0.33f, 0.0f);
      glVertex3f(1.0f, 0.0f, 0.0f);
      glVertex3f(-1.0f, 0.0f, 0.0f);

/// Roadline


      glBegin(GL_QUADS);
      glColor3f(1.0, 1.0, 1.0);
      glVertex3f(0.33f, -0.166f, 0.0f);
      glVertex3f(0.833f, -0.166f, 0.0f);
      glVertex3f(0.833f, -0.13f, 0.0f);
      glVertex3f(0.33f, -0.13f, 0.0f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0, 1.0, 1.0);
      glVertex3f(0.833f, -0.166f, 0.0f);
      glVertex3f(1.0f, -0.166f, 0.0f);
      glVertex3f(1.0f, -0.13f, 0.0f);
      glVertex3f(0.833f, -0.13f, 0.0f);
      glEnd();
      glPopMatrix();

}

void tree(){
    glLoadIdentity();   ///current matrix k replace kore
	glMatrixMode(GL_MODELVIEW); ///akter opor arekta dekha jabe
	glPushMatrix();
	glTranslated(0.6,0.05,0);
	glScalef(.4,.5,0);   ///produces a general scaling along the x, y, and z axes.


    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}
void tree2(){
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslated(-1,0.05,0);
	glScalef(.4,.5,0);

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}

void circle(GLfloat X,GLfloat Y,GLfloat R,GLubyte r,GLubyte g,GLubyte b){ ///joto ber lagbe use korsi
    int i;
    GLfloat x=X; GLfloat y=Y; GLfloat radius =R;
	int triangleAmount = 50;

    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);          ///poligon er fill kortisi
	glColor3ub(r,g,b);

    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(

                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void point(GLfloat c1,GLfloat c2){
         glPointSize(1.5);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);
    glVertex2f(c1, c2);
    glEnd();
}

void day()
{
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
    glTranslatef(-1.3, -0.1, 0.0);
    glPopMatrix();
    glScalef(.7,.7,0);
    glTranslatef(0.0f, -0.05f, 0.0f);
    memorial();
    flag();
    road();
    tree();
    tree2();
    glPopMatrix();
    glFlush();
}

void national_memorialD() {
day();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    glutDisplayFunc(national_memorialD);
    glutMainLoop();
    return 0;
}
