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
      glVertex3f(-0.33f, -0.166f, 0.0f);
      glVertex3f(-0.166f, -0.166f, 0.0f);
      glVertex3f(-0.166f, -0.13f, 0.0f);
      glVertex3f(-0.33f, -0.13f, 0.0f);
      glEnd();

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




void line(GLfloat b1,GLfloat b2,GLfloat b3,GLfloat b4,GLubyte R,GLubyte G,GLubyte B){    ///joto ber lagbe use korsi
    glBegin(GL_LINES);
    glColor3ub(R,G,B);
    glVertex2f(b1,b2);
    glVertex2f(b3,b4);
    glEnd();
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


void bus()
{
    glPushMatrix();
    glScalef(0.7,0.6,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0, 0.0);
    glVertex3f(0.5f, -0.166f, 0.0f);
    glVertex3f(1.0f, -0.166f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(0.5f, -0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0, 0.0);
    glVertex3f(0.5f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.066f, 0.0f);
    glVertex3f(0.5f, -0.066f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0, 0.0);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.116f, 0.0f);
    glVertex3f(0.55f, 0.116f, 0.0f);
    glEnd();

    ///BusWindows
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.5833f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.1f, 0.0f);
    glVertex3f(0.5833f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.65f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.1f, 0.0f);
    glVertex3f(0.65f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.716f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.1f, 0.0f);
    glVertex3f(0.716f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.783f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.1f, 0.0f);
    glVertex3f(0.783f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.85f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.1f, 0.0f);
    glVertex3f(0.85f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.26,0.26, 0.26);
    glVertex3f(0.916f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.1f, 0.0f);
    glVertex3f(0.916f, 0.1f, 0.0f);
    glEnd();
    glPopMatrix();



    ///BusWheels
    glPushMatrix();
    glScalef(0.8,0.7,0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.8,0.7,0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);

    for(int i=0;i<600;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();


}

void point(GLfloat c1,GLfloat c2){
         glPointSize(1.5);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);
    glVertex2f(c1, c2);
    glEnd();
}


void car()
{
    glPushMatrix();                       ///glbegin er moto kaj kore
    glColor3f(0.0,0.0,1.0);              ///RGB we took BLUE value of B=1
    glBegin(GL_POLYGON);
        glVertex2f(-0.85, 0.0);
        glVertex2f(-0.55, 0.0);
        glVertex2f(-0.55, 0.07);
        glVertex2f(-0.60, 0.07);
        glVertex2f(-0.65, 0.17);
        glVertex2f(-0.75, 0.17);
        glVertex2f(-0.80, 0.17);
        glVertex2f(-0.85, 0.07);
        glVertex2f(-0.85, 0.0);
    glEnd();
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);  ///black 000
    glPushMatrix();
    glBegin(GL_POLYGON);           ///first window
        glVertex2f(-0.61, 0.07);
        glVertex2f(-0.66, 0.16);
        glVertex2f(-0.79, 0.16);
        glVertex2f(-0.84, 0.07);
    glEnd();
    glPopMatrix();

    glColor3f(0.000, 0.545, 0.545);  ///border between two windows
    glPushMatrix();
    glBegin(GL_POLYGON);
        glVertex2f(-0.73, 0.07);
        glVertex2f(-0.72, 0.07);
        glVertex2f(-0.72, 0.16);
        glVertex2f(-0.73, 0.16);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.80,0.01,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);   ///next window of car
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)   ///wheel
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;                ///redious of wheel circle
            float x = r * cos(A);
            float y = r * sin(A);          ///build in func
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.80,0.01,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);              ///inner white circle for wheel
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.62,0.01,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);   ///next wheel
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.62,0.01,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);  ///next wheel inner white
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();


}

void day()
{
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();


    glTranslatef(-1.3, -0.1, 0.0);

    glScalef(.7,.7,0);
    glTranslatef(0.0f, -0.05f, 0.0f);

    flag();
    road();
    bus();
    car();
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
