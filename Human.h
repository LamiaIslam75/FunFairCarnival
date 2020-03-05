
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat positionBaby = 0.0f;
GLfloat speedBaby = 0.03f;

GLfloat positionFather = 0.0f;
GLfloat speedFather= 0.03f;

GLfloat positionMother = 0.0f;
GLfloat speedMother = 0.1f;

GLfloat positionOuterup = 0.0f;
GLfloat speedOuterup= 0.1f;

GLfloat positionBaby1 = 0.0f;
GLfloat speedBaby1 = 0.03f;

GLfloat positionFather1 = 0.0f;
GLfloat speedFather1= 0.03f;

GLfloat positionMother1 = 0.0f;
GLfloat speedMother1 = 0.1f;

GLfloat positionOuterup1 = 0.0f;
GLfloat speedOuterup1= 0.1f;

GLfloat positionBaby2 = 0.0f;
GLfloat speedBaby2 = 0.03f;

GLfloat positionFather2 = 0.0f;
GLfloat speedFather2= 0.03f;

GLfloat positionMother2 = 0.0f;
GLfloat speedMother2 = 0.1f;

GLfloat positionOuterup3 = 0.0f;
GLfloat speedOuterup3= 0.1f;

GLfloat positionOuterup4= 0.0f;
GLfloat speedOuterup4= 0.1f;

GLfloat positionBaby3= 0.0f;
GLfloat speedBaby3 = 0.03f;

GLfloat positionFather3 = 0.0f;
GLfloat speedFather3= 0.03f;

GLfloat positionMother3 = 0.0f;
GLfloat speedMother3 = 0.1f;


//day
void updateBaby(int value) {
    if(positionBaby>3.0)
        positionBaby= -.1;
    positionBaby+= speedBaby;
	glutPostRedisplay();
	glutTimerFunc(100, updateBaby, 0);
}
void updateFather(int value) {
    if(positionFather>2.0)
        positionFather= -1;
    positionFather+= speedFather;
	glutPostRedisplay();
	glutTimerFunc(250, updateFather, 0);
}
void updateMother(int value) {
    if(positionMother>1.5)
        positionMother= -1;
    positionMother+= speedMother;
	glutPostRedisplay();
	glutTimerFunc(500, updateMother, 0);
}
void updateOuterup(int value) {
    if(positionOuterup<-3.5)
        positionOuterup=1;
    positionOuterup-= speedOuterup;
	glutPostRedisplay();
	glutTimerFunc(400, updateOuterup, 0);
}

//evening
void updateBaby1(int value) {
    if(positionBaby1<-6.0)
        positionBaby1= -.9;
    positionBaby1-= speedBaby1;
	glutPostRedisplay();
	glutTimerFunc(100, updateBaby1, 0);
}
void updateFather1(int value) {
    if(positionFather1>6.0)
        positionFather1= -.8f;
    positionFather1+= speedFather1;
	glutPostRedisplay();
	glutTimerFunc(250, updateFather1, 0);
}
void updateMother1(int value) {
    if(positionMother1<-5.0)
        positionMother1= -.9;
    positionMother1-= speedMother1;
	glutPostRedisplay();
	glutTimerFunc(500, updateMother1, 0);
}

//night
void updateBaby2(int value) {
    if(positionBaby2 <-6.0)
        positionBaby2= -15;
    positionBaby2 -= speedBaby2;
	glutPostRedisplay();
	glutTimerFunc(100, updateBaby2, 0);
}
void updateFather2(int value) {
    if(positionFather2>6.0)
        positionFather2= -1.0f;
    positionFather2+= speedFather2;
	glutPostRedisplay();
	glutTimerFunc(250, updateFather2, 0);
}
void updateMother2(int value) {
    if(positionMother2<-7.5)
        positionMother2= -25;
    positionMother2-= speedMother2;
	glutPostRedisplay();
	glutTimerFunc(500, updateMother2, 0);
}
void updateBaby3(int value) {
    if(positionBaby3 >6.0)
        positionBaby3 = -105;
    positionBaby3 += speedBaby3;
	glutPostRedisplay();
	glutTimerFunc(100, updateBaby3, 0);
}
void updateFather3(int value) {
    if(positionFather3>5.0)
        positionFather3= -105;
    positionFather3+= speedFather3;
	glutPostRedisplay();
	glutTimerFunc(250, updateFather3, 0);
}
void updateMother3(int value) {
    if(positionMother3>1.5)
        positionMother3= -105;
    positionMother3+= speedMother3;
	glutPostRedisplay();
	glutTimerFunc(500, updateMother3, 0);
}
void updateOuterup3(int value) {
    if(positionOuterup3<-5.5)
        positionOuterup3=105;
    positionOuterup3-= speedOuterup3;
	glutPostRedisplay();
	glutTimerFunc(400, updateOuterup3, 0);
}
void updateOuterup4(int value) {
    if(positionOuterup4<-8.5)
        positionOuterup4=105;
    positionOuterup4-= speedOuterup4;
	glutPostRedisplay();
	glutTimerFunc(400, updateOuterup4, 0);
}

void Human_less()
{
    //baby //skirt
    glPushMatrix();
    glTranslatef(positionBaby,0.0, 0.0f);

    glScalef(.7,.7,0);
    glColor3ub( 1,42,108 );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1);
    glVertex2f(.6,-1);
    glColor3ub(1,42,108);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
    //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(5.5f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.3f,-1);
    glVertex2f(0.3f,-1.15);
    glVertex2f(0.5f,-1);
    glVertex2f(0.5f,-1.15);
    //hand
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.55f,-.72);
    glVertex2f(0.65f,-.82);
    glEnd();
   // glutTimerFunc(750, updateBaby, 0);
    glPopMatrix();
    //mother
    glPushMatrix();
    glTranslatef(positionMother,0.0, 0.0f);
    glScalef(.9,.7,0);
    glTranslatef(.25,-.2,0);
    glColor3ub(  99, 12, 191  );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1.2);
    glVertex2f(.6,-1.2);
    glColor3ub( 99, 12, 191 );
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(6.5f);
    glBegin(GL_LINES);
    //leg
    glColor3ub(111, 26, 138);
    glVertex2f(0.3f,-1.2);
    glVertex2f(0.3f,-1.44);
    glVertex2f(0.5f,-1.2);
    glVertex2f(0.5f,-1.44);
    //hand
    glColor3ub(250,236,127 );
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.53f,-.72);
    glVertex2f(0.63f,-.82);
    glEnd();

    glPopMatrix();

   // glLoadIdentity();

    //father
    glPushMatrix();
    glTranslatef(positionFather,0.0, 0.0f);
    glScalef(1.2,1.0,0);
    glTranslatef(-.5,-.4,0);
    glColor3ub(  138, 26, 45   );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();
   // glutTimerFunc(1000, updateFather, 0);
    glPopMatrix();
    //father
     //father
    glPushMatrix();
    glTranslatef(positionOuterup,0.0, 0.0f);
    glScalef(.9,.9,0);
    glTranslatef(-.7,-1,0);
    glColor3ub(232, 64, 15   );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();
    //father
    glTranslatef(-.2,-.8,0);
    glColor3ub(  138, 65, 26  );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);


}

Human_less_Eve()
{

    //mother
    glPushMatrix();
    glTranslatef(positionMother1,0.0, 0.0f);
    glScalef(.9,.7,0);
    glTranslatef(2.5,-1.5,0);
    glColor3ub(229, 7, 131 );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1.2);
    glVertex2f(.6,-1.2);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    glColor3ub( 250,236,127);
    glLineWidth(6.5f);
    glBegin(GL_LINES);
    //leg
    glColor3ub( 229, 7, 131 );
    glVertex2f(0.3f,-1.2);
    glVertex2f(0.3f,-1.44);
    glVertex2f(0.5f,-1.2);
    glVertex2f(0.5f,-1.44);
    //hand
    glColor3ub(250,236,127 );
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.53f,-.72);
    glVertex2f(0.63f,-.82);
    glEnd();
   glPopMatrix();

    //baby
    glPushMatrix();
    glTranslatef(positionBaby1,0.0, 0.0f);
    glTranslatef(2,-.5,0);
    glColor3ub(  213, 47, 47);
    //baby //skirt
    glScalef(.9,.8,0);
    glBegin(GL_QUADS);
    glVertex2f(.2,-1);
    glVertex2f(.6,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
    //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(5.5f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.3f,-1);
    glVertex2f(0.3f,-1.15);
    glVertex2f(0.5f,-1);
    glVertex2f(0.5f,-1.15);
    //hand
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.55f,-.72);
    glVertex2f(0.65f,-.82);
    glEnd();
     glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}
void Human_less_night1()
{
    //baby //skirt
    glPushMatrix();
    glTranslatef(positionBaby3,0.0, 0.0f);

    glScalef(.7,.7,0);
    glColor3ub( 1,42,108 );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1);
    glVertex2f(.6,-1);
    glColor3ub(1,42,108);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
    //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(5.5f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.3f,-1);
    glVertex2f(0.3f,-1.15);
    glVertex2f(0.5f,-1);
    glVertex2f(0.5f,-1.15);
    //hand
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.55f,-.72);
    glVertex2f(0.65f,-.82);
    glEnd();
   // glutTimerFunc(750, updateBaby, 0);
    glPopMatrix();
    //mother
    glPushMatrix();
    glTranslatef(positionMother3,0.0, 0.0f);
    glScalef(.9,.7,0);
    glTranslatef(.25,-.2,0);
    glColor3ub(  99, 12, 191  );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1.2);
    glVertex2f(.6,-1.2);
    glColor3ub( 99, 12, 191 );
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(6.5f);
    glBegin(GL_LINES);
    //leg
    glColor3ub(111, 26, 138);
    glVertex2f(0.3f,-1.2);
    glVertex2f(0.3f,-1.44);
    glVertex2f(0.5f,-1.2);
    glVertex2f(0.5f,-1.44);
    //hand
    glColor3ub(250,236,127 );
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.53f,-.72);
    glVertex2f(0.63f,-.82);
    glEnd();

    glPopMatrix();

   // glLoadIdentity();

    //father
    glPushMatrix();
    glTranslatef(positionFather3,0.0, 0.0f);
    glScalef(1.2,1.0,0);
    glTranslatef(-.5,-.4,0);
    glColor3ub(  138, 26, 45   );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();
   // glutTimerFunc(1000, updateFather, 0);
    glPopMatrix();
    //father
     //father
    glPushMatrix();
    glTranslatef(positionOuterup3,0.0, 0.0f);
    glScalef(.9,.9,0);
    glTranslatef(-.7,-1,0);
    glColor3ub(232, 64, 15   );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();
    //father
    glTranslatef(-.2,-.8,0);
    glColor3ub(  138, 65, 26  );
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}
Human_less_night2()
{
    //mother
    glPushMatrix();
    glTranslatef(positionMother2,0.0, 0.0f);
    glScalef(.9,.7,0);
    glTranslatef(2.5,-1.5,0);
    glColor3ub(229, 7, 131 );
    glBegin(GL_QUADS);
    glVertex2f(.2,-1.2);
    glVertex2f(.6,-1.2);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    glColor3ub( 250,236,127);
    glLineWidth(6.5f);
    glBegin(GL_LINES);
    //leg
    glColor3ub( 229, 7, 131 );
    glVertex2f(0.3f,-1.2);
    glVertex2f(0.3f,-1.44);
    glVertex2f(0.5f,-1.2);
    glVertex2f(0.5f,-1.44);
    //hand
    glColor3ub(250,236,127 );
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.53f,-.72);
    glVertex2f(0.63f,-.82);
    glEnd();
   glPopMatrix();
    //baby
    glPushMatrix();
    glTranslatef(positionBaby2,0.0, 0.0f);
    glTranslatef(2,-.5,0);
    glColor3ub(  213, 47, 47);
    //baby //skirt
    glScalef(.9,.8,0);
    glBegin(GL_QUADS);
    glVertex2f(.2,-1);
    glVertex2f(.6,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);
    glEnd();
    //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub( 250,236,127);
    glLineWidth(5.5f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.3f,-1);
    glVertex2f(0.3f,-1.15);
    glVertex2f(0.5f,-1);
    glVertex2f(0.5f,-1.15);
    //hand
    glVertex2f(0.27f,-.72);
    glVertex2f(0.17f,-.82);
    glVertex2f(0.55f,-.72);
    glVertex2f(0.65f,-.82);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(positionOuterup4,0.0, 0.0f);
    glScalef(.9,1.2,0);
    glTranslatef(4.5,-.05,0);
    glColor3ub(104,61,85);
    glBegin(GL_QUADS);
    glVertex2f(.3,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,-.7);
    glVertex2f(.3,-.7);

    glEnd();
     //head
    glColor3ub(250,236,127 );
    circleSolid(.39,-.53,.15);
    //glColor3ub( 255,178,60);
    glColor3ub(  69, 36, 42 );
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    //leg
    glVertex2f(0.35f,-1);
    glVertex2f(0.35f,-1.2);
    glVertex2f(0.45f,-1);
    glVertex2f(0.45f,-1.2);
    //hand
    glColor3ub( 250,236,127);
    glVertex2f(0.29f,-.72);
    glVertex2f(0.19f,-.82);
    glVertex2f(0.5f,-.72);
    glVertex2f(0.6f,-.82);
    glEnd();
    glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}
