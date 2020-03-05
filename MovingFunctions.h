#include <GL/gl.h>
#include <GL/glut.h>


GLfloat positionAirBalloon = 0.0f;
GLfloat speedAirBalloon = 0.03f;

GLfloat positionAirBalloon2 = 0.0f;
GLfloat speedAirBalloon2 = 0.0f;

GLfloat positionCloud = 0.0f;
GLfloat speedCloud = 0.03f;

GLfloat positionT = 0.0f;
GLfloat speedT = 0.2f;

GLfloat positionSun = 0.0f;
GLfloat speedSun = 0.03f;

GLfloat positionMoon = 0.0f;
GLfloat speedMoon = 0.03f;

GLfloat j = 0.0f;


//Clouds
void Cloud_day()
{
    glColor3ub(255,255,255);
    circleSolid(-3.0,3.0,0.3);
    circleSolid(-2.6,3.1,0.4);
    circleSolid(-2.3,2.9,0.3);
    circleSolid(-2.1,3.0,0.2);
}
void Cloud_evening()
{
    glColor3ub(255, 255, 204);
    circleSolid(-3.0,3.0,0.3);
    circleSolid(-2.6,3.1,0.4);
    circleSolid(-2.3,2.9,0.3);
    circleSolid(-2.1,3.0,0.2);
}
void Cloud_night()
{
    glColor3ub(204, 204, 255);
    circleSolid(-3.0,3.0,0.3);
    circleSolid(-2.6,3.1,0.4);
    circleSolid(-2.3,2.9,0.3);
    circleSolid(-2.1,3.0,0.2);
}

void CloudPosition_day()
{
    glPushMatrix();
    glTranslatef(positionCloud,0.0f, 0.0f);
    Cloud_day();
    glTranslatef(2.0,0.3,0);
    glScalef(0.5,0.5,0);
    Cloud_day();
    glTranslatef(-0.5,0.3,0);
    glScalef(1.5,1.5,0);
    Cloud_day();
    glTranslatef(6.0,-1.0,0);
    glScalef(1.7,1.7,0);
    Cloud_day();
    glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void CloudPosition_evening()
{
    glPushMatrix();
    glTranslatef(positionCloud,0.0f, 0.0f);
    Cloud_evening();
    glTranslatef(2.0,0.3,0);
    glScalef(0.5,0.5,0);
    Cloud_evening();
    glTranslatef(-0.5,0.3,0);
    glScalef(1.5,1.5,0);
    Cloud_evening();
    glTranslatef(6.0,-1.0,0);
    glScalef(1.7,1.7,0);
    Cloud_evening();
    glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void CloudPosition_night()
{
    glPushMatrix();
    glTranslatef(positionCloud,0.0f, 0.0f);
    Cloud_night();
    glTranslatef(2.0,0.3,0);
    glScalef(0.5,0.5,0);
    Cloud_night();
    glTranslatef(-0.5,0.3,0);
    glScalef(1.5,1.5,0);
    Cloud_night();
    glTranslatef(6.0,-1.0,0);
    glScalef(1.7,1.7,0);
    Cloud_night();
    glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}

void updateCloud(int value) {
    if(positionCloud >5.5)
        positionCloud = -9.0f;
    positionCloud += speedCloud;
	glutPostRedisplay();
	glutTimerFunc(50, updateCloud, 0);
}


//train
void Train_day()
{
    glTranslatef(0.0,0.0,0.0);
    //railline
    glColor3ub(89, 89, 89);
    glLineWidth(4.5f);
    glBegin(GL_LINES);
    glVertex2f(8.0f,-3.4f);
    glVertex2f(-5.0f,-3.4f);
    glEnd();

    GLfloat x=8.00f;
    GLfloat y=7.7f;
    glLineWidth(8.50f);
    for(int i=0;i<=40;i++)
    {
    glColor3ub(102, 34, 0);
    glBegin(GL_LINES);
    glVertex2f(x,-3.4f);
    glVertex2f(y,-3.4f);
    glEnd();
    x-=0.5f;
    y-=0.5f;
    }


glPushMatrix();
glTranslatef(positionT,0.0,0.0);

	glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(1.6f,-2.9f);
    glVertex2f(1.6f,-3.0f);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-2.9f);
    glEnd();


	glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-3.13f,-2.8f);
    glVertex2f(-3.13f,-3.1f);
    glVertex2f(-3.18f,-3.1f);
    glVertex2f(-3.18f,-2.8f);
    glEnd();


    glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(-3.3f,-2.6f);
    glVertex2f(-3.3f,-3.2f);
    glVertex2f(-4.5f,-3.2f);
    glVertex2f(-4.5f,-2.6f);
    glEnd();

    glColor3ub(255, 116, 3);
    glBegin(GL_QUADS);
    glVertex2f(-3.3f,-2.6f);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-4.5f,-3.0f);
    glVertex2f(-4.5f,-2.6f);
    glEnd();

    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-4.15f,-2.7f);
    glVertex2f(-4.15f,-2.9f);
    glVertex2f(-4.45f,-2.9f);
    glVertex2f(-4.45f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-3.75f,-2.7f);
    glVertex2f(-3.75f,-2.9f);
    glVertex2f(-4.05f,-2.9f);
    glVertex2f(-4.05f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-3.35f,-2.7f);
    glVertex2f(-3.35f,-2.9f);
    glVertex2f(-3.65f,-2.9f);
    glVertex2f(-3.65f,-2.7f);
    glEnd();

    glColor3ub(247, 243, 168);
    glBegin(GL_QUADS);
    glVertex2f(-3.75f,-2.95f);
    glVertex2f(-3.75f,-3.2f);
    glVertex2f(-4.05f,-3.2);
    glVertex2f(-4.05f,-2.95f);
    glEnd();


    glColor3ub(232, 226, 104);
    glBegin(GL_QUADS);
    glVertex2f(-3.75f,-3.1f);
    glVertex2f(-3.75f,-3.2f);
    glVertex2f(-4.05f,-3.2);
    glVertex2f(-4.05f,-3.1f);
    glEnd();


    glColor3ub(135, 130, 15);
    glBegin(GL_QUADS);
    glVertex2f(-3.75f,-3.2f);
    glVertex2f(-3.75f,-3.3f);
    glVertex2f(-4.05f,-3.3);
    glVertex2f(-4.05f,-3.2f);
    glEnd();

    glColor3ub(255, 255, 255);
    circleSolid(-4.2,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-4.2,-3.2,0.09);

    glColor3ub(255, 255, 255);
    circleSolid(-3.6,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-3.6,-3.2,0.09);

	glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.635f,-2.8f);
    glVertex2f(-1.635f,-3.1f);
    glVertex2f(-1.7f,-3.1f);
    glVertex2f(-1.7f,-2.8f);
    glEnd();

    glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(-1.8f,-2.6f);
    glVertex2f(-1.8f,-3.2f);
    glVertex2f(-3.0f,-3.2f);
    glVertex2f(-3.0f,-2.6f);
    glEnd();


    glColor3ub(255, 0, 21);
    glBegin(GL_QUADS);
    glVertex2f(-1.8f,-2.6f);
    glVertex2f(-1.8f,-3.0f);
    glVertex2f(-3.0f,-3.0f);
    glVertex2f(-3.0f,-2.6f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-2.65f,-2.7f);
    glVertex2f(-2.65f,-2.9f);
    glVertex2f(-2.95f,-2.9f);
    glVertex2f(-2.95f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-2.25f,-2.7f);
    glVertex2f(-2.25f,-2.9f);
    glVertex2f(-2.55f,-2.9f);
    glVertex2f(-2.55f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-1.85f,-2.7f);
    glVertex2f(-1.85f,-2.9f);
    glVertex2f(-2.15f,-2.9f);
    glVertex2f(-2.15f,-2.7f);
    glEnd();


    glColor3ub(247, 243, 168);
    glBegin(GL_QUADS);
    glVertex2f(-2.25f,-2.95f);
    glVertex2f(-2.25f,-3.2f);
    glVertex2f(-2.55f,-3.2);
    glVertex2f(-2.55f,-2.95f);
    glEnd();


    glColor3ub(232, 226, 104);
    glBegin(GL_QUADS);
    glVertex2f(-2.25f,-3.1f);
    glVertex2f(-2.25f,-3.2f);
    glVertex2f(-2.55f,-3.2);
    glVertex2f(-2.55f,-3.1f);
    glEnd();

    glColor3ub(135, 130, 15);
    glBegin(GL_QUADS);
    glVertex2f(-2.25f,-3.2f);
    glVertex2f(-2.25f,-3.3f);
    glVertex2f(-2.55f,-3.3);
    glVertex2f(-2.55f,-3.2f);
    glEnd();

    glColor3ub(255, 255, 255);
    circleSolid(-2.7,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-2.7,-3.2,0.09);

    glColor3ub(255, 255, 255);
    circleSolid(-2.1,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-2.1,-3.2,0.09);

	glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-0.13f,-2.8f);
    glVertex2f(-0.13f,-3.1f);
    glVertex2f(-0.18f,-3.1f);
    glVertex2f(-0.18f,-2.8f);
    glEnd();

    glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(-0.3f,-2.6f);
    glVertex2f(-0.3f,-3.2f);
    glVertex2f(-1.5f,-3.2f);
    glVertex2f(-1.5f,-2.6f);
    glEnd();


    glColor3ub(255, 116, 3);
    glBegin(GL_QUADS);
    glVertex2f(-0.3f,-2.6f);
    glVertex2f(-0.3f,-3.0f);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-2.6f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-1.15f,-2.7f);
    glVertex2f(-1.15f,-2.9f);
    glVertex2f(-1.45f,-2.9f);
    glVertex2f(-1.45f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f,-2.7f);
    glVertex2f(-0.75f,-2.9f);
    glVertex2f(-1.05f,-2.9f);
    glVertex2f(-1.05f,-2.7f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(-0.35f,-2.7f);
    glVertex2f(-0.35f,-2.9f);
    glVertex2f(-0.65f,-2.9f);
    glVertex2f(-0.65f,-2.7f);
    glEnd();


    glColor3ub(247, 243, 168);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f,-2.95f);
    glVertex2f(-0.75f,-3.2f);
    glVertex2f(-1.05f,-3.2);
    glVertex2f(-1.05f,-2.95f);
    glEnd();


    glColor3ub(232, 226, 104);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f,-3.1f);
    glVertex2f(-0.75f,-3.2f);
    glVertex2f(-1.05f,-3.2);
    glVertex2f(-1.05f,-3.1f);
    glEnd();

    glColor3ub(135, 130, 15);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f,-3.2f);
    glVertex2f(-0.75f,-3.3f);
    glVertex2f(-1.05f,-3.3);
    glVertex2f(-1.05f,-3.2f);
    glEnd();

    glColor3ub(255, 255, 255);
    circleSolid(-1.2,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-1.2,-3.2,0.09);

    glColor3ub(255, 255, 255);
    circleSolid(-0.6,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(-0.6,-3.2,0.09);

	glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(1.65f,-2.9f);
    glVertex2f(1.65f,-3.0f);
    glVertex2f(1.6f,-3.2f);
    glVertex2f(1.6f,-2.7f);
    glEnd();


    glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(1.4f,-2.5f);
    glVertex2f(1.4f,-2.8f);
    glVertex2f(1.1f,-2.8f);
    glVertex2f(1.1f,-2.5f);
    glEnd();


    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(1.32f,-2.45f);
    glVertex2f(1.42f,-2.5f);
    glVertex2f(1.07f,-2.5f);
    glVertex2f(1.145f,-2.45f);
    glEnd();

	glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0.9f,-2.6f);
    glVertex2f(0.9f,-2.8f);
    glVertex2f(0.8f,-2.8f);
    glVertex2f(0.8f,-2.6f);
    glEnd();


	glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0.7f,-2.6f);
    glVertex2f(0.7f,-2.8f);
    glVertex2f(0.6f,-2.8f);
    glVertex2f(0.6f,-2.6f);
    glEnd();

    glColor3ub(0,0,0);
    circleSolid(0.65,-2.55,0.07);
	circleSolid(0.85,-2.55,0.07);

	glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(1.6f,-2.8f);
    glVertex2f(1.6f,-3.2f);
    glVertex2f(0.0f,-3.2f);
    glVertex2f(0.0f,-2.8f);
    glEnd();

    glColor3ub(0, 16, 196);
    glBegin(GL_QUADS);
    glVertex2f(1.7,-3.2f);
    glVertex2f(1.7f,-3.35f);
    glVertex2f(1.5f,-3.35f);
    glVertex2f(1.5f,-3.1f);
    glEnd();

    glColor3ub(252, 115, 3);
    glBegin(GL_QUADS);
    glVertex2f(1.6f,-2.7f);
    glVertex2f(1.6f,-3.0f);
    glVertex2f(0.0f,-3.0f);
    glVertex2f(0.0f,-2.7f);
    glEnd();

    glColor3ub(255, 0, 21);
    glBegin(GL_QUADS);
    glVertex2f(0.5f,-2.4f);
    glVertex2f(0.5f,-3.2f);
    glVertex2f(0.0f,-3.2f);
    glVertex2f(0.0f,-2.4f);
    glEnd();


    glColor3ub(141, 188, 252);
    glBegin(GL_QUADS);
    glVertex2f(0.4,-2.5f);
    glVertex2f(0.4f,-2.8f);
    glVertex2f(0.1f,-2.8f);
    glVertex2f(0.1f,-2.5f);
    glEnd();

    glColor3ub(255, 255, 255);
    circleSolid(0.32,-3.1,0.25);

    glColor3ub(0,0,0);
    circleSolid(0.32,-3.1,0.15);

    glColor3ub(255, 255, 255);
    circleSolid(1.0,-3.2,0.15);

	glColor3ub(0,0,0);
	circleSolid(1.0,-3.2,0.09);

    glColor3ub(255, 255, 255);
    circleSolid(1.4,-3.2,0.15);

    glColor3ub(0,0,0);
    circleSolid(1.4,-3.2,0.09);
	circleSolid(1.66,-2.95,0.05);

   glPopMatrix();
}

void updateTrain(int value) {
    if(positionT >15.0)
        positionT = -5.0f;
    positionT += speedT;
	glutPostRedisplay();
	glutTimerFunc(100, updateTrain, 0);
}

//ferris wheel
void FerrisWheel_seat_day()
{
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,2.0f,0.1f);
    glColor3ub(89, 0, 179);
    circleLine(0.0f,2.0f,0.1f);

    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.3f,1.75f);
    glEnd();
    glColor3ub(0, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.12f,1.75f);
    glVertex2f(-0.12f,1.75f);
    glEnd();

    glColor3ub(255, 128, 170);
    glBegin(GL_QUADS);
    glVertex2f(-0.29,1.65f);
    glVertex2f(-0.26,1.5f);
    glVertex2f(0.26,1.5f);
    glVertex2f(0.29,1.65f);
    glEnd();

    glColor3ub(89, 0, 179);
    glBegin(GL_QUADS);
    glVertex2f(-0.26,1.5f);
    glVertex2f(-0.26,1.45f);
    glVertex2f(0.26,1.45f);
    glVertex2f(0.26,1.5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.26,1.64f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.26,1.64f);
    glVertex2f(-0.3f,1.75f);
    glEnd();

}

void FerrisWheel_day()
{
  glLineWidth(6.00f);
  glColor3ub(255, 102, 0);
  glBegin(GL_LINES);
  glVertex2f(0.259f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glVertex2f(2.059f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glEnd();

glScalef(0.8f,0.8f,0.0f);
glTranslatef(1.33f,1.9f,0.0f);
glPushMatrix();
glRotatef(j,0.0,0.0,-0.1);

    glColor3ub(89, 0, 179);
    glLineWidth(3.3f);
    glBegin(GL_LINES);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,2.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-2.0f);
    glVertex2f(2.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-2.0f,0.0f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,-0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,-0.99f);
    glEnd();

    glLineWidth(5.00f);
    circleLine(0.0f,0.0f,2.0f);
    circleLine(0.0f,0.0f,1.35f);
    glLineWidth(2.00f);
    circleLine(0.0f,0.0f,0.3f);
    circleLine(0.0f,0.0f,0.17f);
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,0.0f,0.165f);
    glColor3ub(89, 0, 179);
    circleSolid(0.0f,0.0f,0.065f);

    FerrisWheel_seat_day();

    //seat2
   glTranslatef(0.0f, -4.0f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   //seat3
   glTranslatef(0.9f, 3.75f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   //seat4
   glTranslatef(0.865f, -2.8f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(-2.65f, 2.81f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(-0.85f, -2.80f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(2.7f, -0.75f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(0.99f, 1.75f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(-0.17f, 1.05f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(-3.8f, -1.05f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(1.09f, -1.75f, 0.0f);
   FerrisWheel_seat_day();
   //glLoadIdentity();

   glTranslatef(-0.85f, 2.8f, 0.0f);
   FerrisWheel_seat_day();
glPopMatrix();
j+=0.05f;

glLoadIdentity();
gluOrtho2D(-5,5,-4,4);

}

void FerrisWheel_seat_evening()
{
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,2.0f,0.1f);
    glColor3ub(89, 0, 179);
    circleLine(0.0f,2.0f,0.1f);

    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.3f,1.75f);
    glEnd();
    glColor3ub(0, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.12f,1.75f);
    glVertex2f(-0.12f,1.75f);
    glEnd();

    glColor3ub(255, 128, 170);
    glBegin(GL_QUADS);
    glVertex2f(-0.29,1.65f);
    glVertex2f(-0.26,1.5f);
    glVertex2f(0.26,1.5f);
    glVertex2f(0.29,1.65f);
    glEnd();

    glColor3ub(89, 0, 179);
    glBegin(GL_QUADS);
    glVertex2f(-0.26,1.5f);
    glVertex2f(-0.26,1.45f);
    glVertex2f(0.26,1.45f);
    glVertex2f(0.26,1.5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.26,1.64f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.26,1.64f);
    glVertex2f(-0.3f,1.75f);
    glEnd();

}

void FerrisWheel_evening()
{

    glLineWidth(6.00f);
  glColor3ub(255, 102, 0);
  glBegin(GL_LINES);
  glVertex2f(0.259f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glVertex2f(2.059f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glEnd();

glScalef(0.8f,0.8f,0.0f);
glTranslatef(1.33f,1.9f,0.0f);
glPushMatrix();
glRotatef(j,0.0,0.0,-0.1);

    glColor3ub(89, 0, 179);
    glLineWidth(3.3f);
    glBegin(GL_LINES);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,2.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-2.0f);
    glVertex2f(2.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-2.0f,0.0f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,-0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,-0.99f);
    glEnd();

    glLineWidth(5.00f);
    circleLine(0.0f,0.0f,2.0f);
    circleLine(0.0f,0.0f,1.35f);
    glLineWidth(2.00f);
    circleLine(0.0f,0.0f,0.3f);
    circleLine(0.0f,0.0f,0.17f);
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,0.0f,0.165f);
    glColor3ub(89, 0, 179);
    circleSolid(0.0f,0.0f,0.065f);

    FerrisWheel_seat_evening();

    //seat2
   glTranslatef(0.0f, -4.0f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   //seat3
   glTranslatef(0.9f, 3.75f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   //seat4
   glTranslatef(0.865f, -2.8f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(-2.65f, 2.81f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(-0.85f, -2.80f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(2.7f, -0.75f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(0.99f, 1.75f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(-0.17f, 1.05f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(-3.8f, -1.05f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(1.09f, -1.75f, 0.0f);
   FerrisWheel_seat_evening();
   //glLoadIdentity();

   glTranslatef(-0.85f, 2.8f, 0.0f);
   FerrisWheel_seat_evening();
glPopMatrix();
j+=0.05f;



glLoadIdentity();
gluOrtho2D(-5,5,-4,4);

}

void FerrisWheel_seat_night()
{
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,2.0f,0.1f);
    glColor3ub(89, 0, 179);
    circleLine(0.0f,2.0f,0.1f);

    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.3f,1.75f);
    glEnd();
    glColor3ub(0, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f,1.95f);
    glVertex2f(0.12f,1.75f);
    glVertex2f(-0.12f,1.75f);
    glEnd();

    glColor3ub(255, 128, 170);
    glBegin(GL_QUADS);
    glVertex2f(-0.29,1.65f);
    glVertex2f(-0.26,1.5f);
    glVertex2f(0.26,1.5f);
    glVertex2f(0.29,1.65f);
    glEnd();

    glColor3ub(89, 0, 179);
    glBegin(GL_QUADS);
    glVertex2f(-0.26,1.5f);
    glVertex2f(-0.26,1.45f);
    glVertex2f(0.26,1.45f);
    glVertex2f(0.26,1.5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.26,1.64f);
    glVertex2f(0.3f,1.75f);
    glVertex2f(-0.26,1.64f);
    glVertex2f(-0.3f,1.75f);
    glEnd();

}

void FerrisWheel_night()
{
   glLineWidth(6.00f);
  glColor3ub(255, 102, 0);
  glBegin(GL_LINES);
  glVertex2f(0.259f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glVertex2f(2.059f,-1.0f);
  glVertex2f(1.059f,1.5f);
  glEnd();

glScalef(0.8f,0.8f,0.0f);
glTranslatef(1.33f,1.9f,0.0f);
glPushMatrix();
glRotatef(j,0.0,0.0,-0.1);

    glColor3ub(89, 0, 179);
    glLineWidth(3.3f);
    glBegin(GL_LINES);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,2.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-2.0f);
    glVertex2f(2.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-2.0f,0.0f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.75f,-0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,0.99f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.9f,-1.8f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.75f,-0.99f);
    glEnd();

    glLineWidth(5.00f);
    circleLine(0.0f,0.0f,2.0f);
    circleLine(0.0f,0.0f,1.35f);
    glLineWidth(2.00f);
    circleLine(0.0f,0.0f,0.3f);
    circleLine(0.0f,0.0f,0.17f);
    glColor3ub(0, 255, 255);
    circleSolid(0.0f,0.0f,0.165f);
    glColor3ub(89, 0, 179);
    circleSolid(0.0f,0.0f,0.065f);

    //lights for circle 1
    glColor3ub(255, 230, 128);
    circleSolid(0.0,2.00,0.048);
    circleSolid(0.3,1.98,0.048);
    circleSolid(0.6,1.9,0.048);
    circleSolid(1.05,1.7,0.048);
    circleSolid(1.35,1.48,0.048);
    circleSolid(1.6,1.2,0.048);
    circleSolid(1.97,0.4,0.048);
    circleSolid(2.0,0.1,0.048);

    circleSolid(0.0,-2.00,0.048);
    circleSolid(0.3,-1.98,0.048);
    circleSolid(0.6,-1.9,0.048);
    circleSolid(1.05,-1.7,0.048);
    circleSolid(1.35,-1.48,0.048);
    circleSolid(1.6,-1.2,0.048);
    circleSolid(1.84,-0.76,0.048);
    circleSolid(1.97,-0.4,0.048);
    circleSolid(2.0,-0.1,0.048);

    circleSolid(0.0,-2.00,0.048);
    circleSolid(-0.3,-1.98,0.048);
    circleSolid(-0.6,-1.9,0.048);
    circleSolid(-1.05,-1.7,0.048);
    circleSolid(-1.35,-1.48,0.048);
    circleSolid(-1.6,-1.2,0.048);
    circleSolid(-1.84,-0.76,0.048);
    circleSolid(-1.97,-0.4,0.048);
    circleSolid(-2.0,-0.1,0.048);

    circleSolid(0.0,2.00,0.048);
    circleSolid(-0.3,1.98,0.048);
    circleSolid(-0.6,1.9,0.048);
    circleSolid(-1.05,1.7,0.048);
    circleSolid(-1.35,1.48,0.048);
    circleSolid(-1.6,1.2,0.048);
    circleSolid(-1.84,0.76,0.048);
    circleSolid(-1.97,0.4,0.048);
    circleSolid(-2.0,0.1,0.048);

    //trasparency
    glColor4f(255,255,0.0,0.5);
    circleSolid(0.0,2.00,0.1);
    circleSolid(0.3,1.98,0.1);
    circleSolid(0.6,1.9,0.1);
    circleSolid(1.05,1.7,0.1);
    circleSolid(1.35,1.48,0.1);
    circleSolid(1.6,1.2,0.1);
    circleSolid(1.97,0.4,0.1);
    circleSolid(2.0,0.1,0.1);

    circleSolid(0.0,-2.00,0.1);
    circleSolid(0.3,-1.98,0.1);
    circleSolid(0.6,-1.9,0.1);
    circleSolid(1.05,-1.7,0.1);
    circleSolid(1.35,-1.48,0.1);
    circleSolid(1.6,-1.2,0.1);
    circleSolid(1.84,-0.76,0.1);
    circleSolid(1.97,-0.4,0.1);
    circleSolid(2.0,-0.1,0.1);

    circleSolid(0.0,-2.00,0.1);
    circleSolid(-0.3,-1.98,0.1);
    circleSolid(-0.6,-1.9,0.1);
    circleSolid(-1.05,-1.7,0.1);
    circleSolid(-1.35,-1.48,0.1);
    circleSolid(-1.6,-1.2,0.1);
    circleSolid(-1.84,-0.76,0.1);
    circleSolid(-1.97,-0.4,0.1);
    circleSolid(-2.0,-0.1,0.1);

    circleSolid(0.0,2.00,0.1);
    circleSolid(-0.3,1.98,0.1);
    circleSolid(-0.6,1.9,0.1);
    circleSolid(-1.05,1.7,0.1);
    circleSolid(-1.35,1.48,0.1);
    circleSolid(-1.6,1.2,0.1);
    circleSolid(-1.84,0.76,0.1);
    circleSolid(-1.97,0.4,0.1);
    circleSolid(-2.0,0.1,0.1);

    //lights for circle 2
    glColor3ub(255, 230, 128);
    circleSolid(0.0,1.35,0.047);
    circleSolid(0.3,1.33,0.047);
    circleSolid(0.6,1.23,0.047);
    circleSolid(0.9,1.03,0.047);
    circleSolid(1.12,0.73,0.047);
    circleSolid(1.28,0.39,0.047);
    circleSolid(1.34,0.1,0.047);

    circleSolid(0.0,-1.35,0.047);
    circleSolid(0.3,-1.33,0.047);
    circleSolid(0.6,-1.23,0.047);
    circleSolid(0.9,-1.03,0.047);
    circleSolid(1.12,-0.73,0.047);
    circleSolid(1.28,-0.39,0.047);
    circleSolid(1.34,-0.1,0.047);

    circleSolid(-0.3,-1.33,0.047);
    circleSolid(-0.6,-1.23,0.047);
    circleSolid(-0.9,-1.03,0.047);
    circleSolid(-1.12,-0.73,0.047);
    circleSolid(-1.28,-0.39,0.047);
    circleSolid(-1.34,-0.1,0.047);

    circleSolid(-0.3,1.33,0.047);
    circleSolid(-0.6,1.23,0.047);
    circleSolid(-0.9,1.03,0.047);
    circleSolid(-1.12,0.73,0.047);
    circleSolid(-1.28,0.39,0.047);
    circleSolid(-1.34,0.1,0.047);


    //trasparency
    glColor4f(255,255,0.0,0.5);
    circleSolid(0.0,1.35,0.085);
    circleSolid(0.3,1.33,0.085);
    circleSolid(0.6,1.23,0.085);
    circleSolid(0.9,1.03,0.085);
    circleSolid(1.12,0.73,0.085);
    circleSolid(1.28,0.39,0.085);
    circleSolid(1.34,0.1,0.085);

    circleSolid(0.0,-1.35,0.085);
    circleSolid(0.3,-1.33,0.085);
    circleSolid(0.6,-1.23,0.085);
    circleSolid(0.9,-1.03,0.085);
    circleSolid(1.12,-0.73,0.085);
    circleSolid(1.28,-0.39,0.085);
    circleSolid(1.34,-0.1,0.085);

    circleSolid(-0.3,-1.33,0.085);
    circleSolid(-0.6,-1.23,0.085);
    circleSolid(-0.9,-1.03,0.085);
    circleSolid(-1.12,-0.73,0.085);
    circleSolid(-1.28,-0.39,0.085);
    circleSolid(-1.34,-0.1,0.085);

    circleSolid(-0.3,1.33,0.085);
    circleSolid(-0.6,1.23,0.085);
    circleSolid(-0.9,1.03,0.085);
    circleSolid(-1.12,0.73,0.085);
    circleSolid(-1.28,0.39,0.085);
    circleSolid(-1.34,0.1,0.085);


    FerrisWheel_seat_night();

    //seat2
   glTranslatef(0.0f, -4.0f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   //seat3
   glTranslatef(0.9f, 3.75f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   //seat4
   glTranslatef(0.865f, -2.8f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(-2.65f, 2.81f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(-0.85f, -2.80f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(2.7f, -0.75f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(0.99f, 1.75f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(-0.17f, 1.05f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(-3.8f, -1.05f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(1.09f, -1.75f, 0.0f);
   FerrisWheel_seat_night();
   //glLoadIdentity();

   glTranslatef(-0.85f, 2.8f, 0.0f);
   FerrisWheel_seat_night();
glPopMatrix();
j+=0.05f;

glLoadIdentity();
gluOrtho2D(-5,5,-4,4);

}

//air balloon
void AirBalloon_day()
{
    glColor3ub(102, 0, 204);
    circleSolid(4.0,3.0,0.35);
    glBegin(GL_QUADS);
    glVertex2f(3.7,2.8);
    glVertex2f(3.85,2.5);
    glVertex2f(4.15,2.5);
    glVertex2f(4.3,2.8);
    glEnd();

    glColor3ub(153, 102, 0);
    glBegin(GL_QUADS);
    glVertex2f(3.85,2.33);
    glVertex2f(3.85,2.15);
    glVertex2f(4.15,2.15);
    glVertex2f(4.15,2.33);
    glEnd();

    glColor3ub(102, 51, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.86,2.5);
    glVertex2f(3.86,2.3);

    glVertex2f(4.14,2.5);
    glVertex2f(4.14,2.3);
    glEnd();

    glColor3ub(255, 255, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.85,3.32);
    glVertex2f(3.85,2.5);

    glVertex2f(4.0,3.35);
    glVertex2f(4.0,2.5);

    glVertex2f(4.15,3.32);
    glVertex2f(4.15,2.5);

    glEnd();

}
void AirBalloonPosition_day()
{
    glPushMatrix();
    glTranslatef(positionAirBalloon,0.0f, 0.0f);
    AirBalloon_day();
    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);



    if(speedAirBalloon2 == 0.3f)
    {
        glPushMatrix();
        glTranslatef(0.0,positionAirBalloon2, 0.0f);
        glTranslatef(-10.3,-3.5,0);
        glScalef(1.5,1.5,0);
        AirBalloon_day();
        //glPopMatrix();
    }
    else if(speedAirBalloon2 == 0.3f)
    {
        glPushMatrix();
        glTranslatef(positionAirBalloon2,0.0, 0.0f);
        glTranslatef(-10.3,-3.5,0);
        glScalef(1.5,1.5,0);
        AirBalloon_day();
        glPopMatrix();
    }
    else
    {
            glTranslatef(-10.3,-3.5,0);
        glScalef(1.5,1.5,0);
        AirBalloon_day();
    }


    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}


void AirBalloon_evening()
{
    glColor3ub(102, 0, 204);
    circleSolid(4.0,3.0,0.35);
    glBegin(GL_QUADS);
    glVertex2f(3.7,2.8);
    glVertex2f(3.85,2.5);
    glVertex2f(4.15,2.5);
    glVertex2f(4.3,2.8);
    glEnd();

    glColor3ub(153, 102, 0);
    glBegin(GL_QUADS);
    glVertex2f(3.85,2.33);
    glVertex2f(3.85,2.15);
    glVertex2f(4.15,2.15);
    glVertex2f(4.15,2.33);
    glEnd();

    glColor3ub(102, 51, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.86,2.5);
    glVertex2f(3.86,2.3);

    glVertex2f(4.14,2.5);
    glVertex2f(4.14,2.3);
    glEnd();

    glColor3ub(255, 255, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.85,3.32);
    glVertex2f(3.85,2.5);

    glVertex2f(4.0,3.35);
    glVertex2f(4.0,2.5);

    glVertex2f(4.15,3.32);
    glVertex2f(4.15,2.5);

    glEnd();

}

void AirBalloonPosition_evening()
{
    glPushMatrix();
    glTranslatef(positionAirBalloon,0.0f, 0.0f);
    AirBalloon_evening();
    glPopMatrix();

    glTranslatef(-10.3,-3.5,0);
    glScalef(1.5,1.5,0);
    AirBalloon_evening();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}

void AirBalloon_night()
{
    glColor3ub(0, 51, 153);
    circleSolid(4.0,3.0,0.35);
    glBegin(GL_QUADS);
    glVertex2f(3.7,2.8);
    glVertex2f(3.85,2.5);
    glVertex2f(4.15,2.5);
    glVertex2f(4.3,2.8);
    glEnd();

    glColor3ub(153, 102, 0);
    glBegin(GL_QUADS);
    glVertex2f(3.85,2.33);
    glVertex2f(3.85,2.15);
    glVertex2f(4.15,2.15);
    glVertex2f(4.15,2.33);
    glEnd();

    glColor3ub(102, 51, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.86,2.5);
    glVertex2f(3.86,2.3);

    glVertex2f(4.14,2.5);
    glVertex2f(4.14,2.3);
    glEnd();

    glColor3ub(255, 255, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(3.85,3.32);
    glVertex2f(3.85,2.5);

    glVertex2f(4.0,3.35);
    glVertex2f(4.0,2.5);

    glVertex2f(4.15,3.32);
    glVertex2f(4.15,2.5);

    glEnd();

    float x=3.87;
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 102);
    for(int i=0;i<4;i++)
    {
        glVertex2f(x,2.31);
        x+=0.08;
    }
    glEnd();
}

void AirBalloonPosition_night()
{
    glPushMatrix();
    glTranslatef(positionAirBalloon,0.0f, 0.0f);
    AirBalloon_night();
    glPopMatrix();

    glTranslatef(-10.3,-3.5,0);
    glScalef(1.5,1.5,0);
    AirBalloon_night();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}

void updateAirBalloon(int value) {
    if(positionAirBalloon <-9.0)
        positionAirBalloon = 3.0f;
    positionAirBalloon -= speedAirBalloon;
	glutPostRedisplay();
	glutTimerFunc(100, updateAirBalloon, 0);
}

void updateAirBalloon2(int value) {
    if(positionAirBalloon2 <-9.0)
        positionAirBalloon2 = 3.0f;
    positionAirBalloon2 -= speedAirBalloon2;
	glutPostRedisplay();
	glutTimerFunc(100, updateAirBalloon2, 0);
}


void updateSun(int value)
{
    if(positionSun <-9.0)
        positionSun = 3.0f;
    positionSun -= speedSun;
	glutPostRedisplay();
	glutTimerFunc(180, updateSun, 0);
}
void updateMoon(int value)
{
    if(positionMoon <-9.0)
        positionMoon = 3.0f;
    positionMoon -= speedMoon;
	glutPostRedisplay();
	glutTimerFunc(500, updateMoon, 0);
}
