#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846
#define DEG2RAD 3.14159/180.0

void CarnivalSound()
{
    PlaySound("Carnival Music.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void TrainSound()
{
    PlaySound("Train.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void CrowdSound()
{
    PlaySound("CrowdNoise.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}


void circleSolid(GLfloat m,GLfloat n,GLfloat radius)
{
    int i;
	int triangle_Amount = 20; //# of triangles used to draw circle
    GLfloat twice_Pi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(m, n); // center of circle
		for(i = 0; i <= triangle_Amount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twice_Pi / triangle_Amount)),
			    n + (radius * sin(i * twice_Pi / triangle_Amount))
			);
		}
	glEnd();

}

void circleLine(GLfloat x,GLfloat y,GLfloat radius)
{
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

}

void drawString(float x, float y, char *string)
{
   glRasterPos2f(x, y);

   for (char* c=string; *c != '\0'; c++)
   {
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c); // Updates the position
   }
}

void Oval(GLfloat x,GLfloat y,float radiusX, float radiusY)
{
   int i;

   glBegin(GL_TRIANGLE_FAN);
   //glBegin(GL_LINE_LOOP);

   for(i=0;i<360;i++)
   {
      float rad = i*DEG2RAD;
      glVertex2f(
                 x+(cos(rad)*radiusX),
                 y+(sin(rad)*radiusY));
   }

   glEnd();
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void init()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(-5,5,-4,4);
}

#include "C:\Users\User\Desktop\CG\Code\CarnivalTest\MovingFunctions.h"
#include "C:\Users\User\Desktop\CG\Code\CarnivalTest\Functions.h"
#include "C:\Users\User\Desktop\CG\Code\CarnivalTest\Human.h"

//void display_day();

/*void display_Call_day(int v)
{
    glutDisplayFunc(display_day);
}*/

void display_night()
{
    init();

    Sky_night();
    CloudPosition_night();

    Ground_night();
    AirBalloonPosition_night();
    Tree();
    tent_night();
    TicketBooth_night();
    Tower_night();
    FerrisWheel_night();
    balloons();

    Human_less_night1();
    Human_less_night2();

    LightPost_night();

    Train_day();

    glLoadIdentity();
    glutSwapBuffers();
    //glutTimerFunc(30000,display_Call_day,0);
    glFlush();
}

void display_Call_night(int v)
{
    glutDisplayFunc(display_night);
}

void display_evening()
{
    init();

    Sky_evening();
    CloudPosition_evening();

    Ground_evening();
    AirBalloonPosition_evening();
    Tree();
    tent_evening();
    TicketBooth_evening();
    Tower_evening();

    FerrisWheel_evening();

    balloons();

    Human_less_Eve();
    Human_less();

    LightPost_evening();

    Train_day();

    glLoadIdentity();

    glutSwapBuffers();
    glutTimerFunc(10000,display_Call_night,0);
    glFlush();
}

void display_Call_eve(int v)
{
    glutDisplayFunc(display_evening);
}

void display_day()
{
    init();

    Sky_day();
    CloudPosition_day();
    Ground_day();
    AirBalloonPosition_day();
    Tree();
    tent_day();
    TicketBooth_day();
    Tower_day();
    FerrisWheel_day();
    balloons();
    Human_less();
    LightPost_day();
    Train_day();

    glLoadIdentity();
    glutSwapBuffers();
    glutTimerFunc(10000,display_Call_eve,0);
    glFlush();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_DOWN:
    speedT = 0.0f;
break;
case GLUT_KEY_LEFT:
    speedT = 0.05f;
break;
case GLUT_KEY_RIGHT:
    speedT = 0.9f;
break;}
glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'c':
    //CrowdSound();
    break;
case 'b':
    CarnivalSound();
    break;
case 't':
    TrainSound();
    break;
glutPostRedisplay();
}
}

void display()
{
    //init();

    //transparent
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND );


    display_day();
}


int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240,680);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Carnival");

    glutDisplayFunc(display);
    glutIdleFunc(Idle);



    glutTimerFunc(100, updateCloud, 0);
    glutTimerFunc(100, updateAirBalloon, 0);
    glutTimerFunc(100, updateTrain, 0);
    glutTimerFunc(250, updateFather, 0);
    glutTimerFunc(100, updateBaby, 0);
    glutTimerFunc(500, updateMother, 0);
    glutTimerFunc(400, updateOuterup, 0);
    glutTimerFunc(100, updateSun, 0);
    glutTimerFunc(100, updateMoon, 0);
    glutTimerFunc(500, updateMother1, 0);
    glutTimerFunc(100, updateBaby1, 0);
    glutTimerFunc(500, updateMother2, 0);
    glutTimerFunc(100, updateBaby2, 0);
    glutTimerFunc(250, updateFather3, 0);
    glutTimerFunc(100, updateBaby3, 0);
    glutTimerFunc(500, updateMother3, 0);
    glutTimerFunc(400, updateOuterup3, 0);
    glutTimerFunc(400, updateOuterup4, 0);

    glutSpecialFunc(SpecialInput);
    glutKeyboardFunc(handleKeypress);

    CarnivalSound();
    glutMainLoop();
    return 0;
}

