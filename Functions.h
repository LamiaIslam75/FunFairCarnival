#include <GL/gl.h>
#include <GL/glut.h>

//Sky
void Sky_day()
{
    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2f(-5,4);
    glVertex2f(5,4);
    glColor3ub(179, 230, 255);
    glVertex2f(5,0.1);
    glVertex2f(-5,0.1);
    glEnd();

    //sun
    glPushMatrix();
    glTranslatef(0.0,positionSun,0.0);
    glColor3ub(255, 204, 0);
    circleSolid(-2.0,3.5,0.3);
    glPopMatrix();
}

void Sky_evening()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 153, 51);
    glVertex2f(-5,4);
    glVertex2f(5,4);
    glColor3ub(255, 255, 153);
    glVertex2f(5,0.1);
    glVertex2f(-5,0.1);
    glEnd();

    //sun
    glPushMatrix();
    glTranslatef(0.0,positionSun,0.0);
    glColor3ub(255, 102, 0);
    circleSolid(-2.0,3.5,0.3);
    glPopMatrix();

}

void stars()
{
    GLfloat x;
    GLfloat y;
    glColor3f(1,1,1);

    for(int i=0; i<200;i++)
    {
        x = (float((rand()% 400))/5);
        y = (float((rand()% 1000))/20);
        circleSolid(x,y,0.015);
    }
    for(int i=0; i<200;i++)
    {
        x = (float((rand()% 400))/-5);
        y = (float((rand()% 1000))/20);
        circleSolid(x,y,0.015);
    }
}

void Sky_night()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2f(-5,4);
    glVertex2f(5,4);
    glColor3ub(204, 102, 255);
    glVertex2f(5,0.1);
    glVertex2f(-5,0.1);
    glEnd();

    stars();

    //moon
    glPushMatrix();
    glTranslatef(0.0,positionMoon,0.0);
    glColor3ub(255, 255, 255);
    circleSolid(-2.0,3.5,0.3);
    glPopMatrix();

}

//Ground
void Ground_day()
{
    glBegin(GL_QUADS);
    glColor3ub(136, 204, 0);
    glVertex2f(-5,0.1);
    glVertex2f(5,0.1);
    glColor3ub(170, 255, 0);
    glVertex2f(5,-5);
    glVertex2f(-5,-5);
    glEnd();
}

void Ground_evening()
{
    glBegin(GL_QUADS);
    glColor3ub(57, 230, 0);

    glVertex2f(-5,0.1);
    glColor3ub(32, 128, 0);
    glVertex2f(-5,-5);
    glVertex2f(5,-5);
    glVertex2f(5,0.1);
    glEnd();
}

void Ground_night()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 0);
    glVertex2f(-5,0.1);
    glVertex2f(5,0.1);
    glColor3ub(51, 204, 51);
    glVertex2f(5,-5);
    glVertex2f(-5,-5);
    glEnd();
}
//ticket booth
void TicketBooth_day()
{
    glColor3ub(255, 204, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.7,-0.4);
    glVertex2f(-1.7,-0.5);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.6,-0.4);
    glEnd();
    circleSolid(-1.15,-0.5,0.4);
    glColor3ub(204, 0, 0);
    drawString(-1.4,-0.4,"Ticket");

    glColor3ub(204, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.6,-0.5);
    glVertex2f(-1.6,-1.3);
    glVertex2f(-0.7,-1.3);
    glVertex2f(-0.7,-0.5);
    glEnd();

    float x=-0.75;
    for(int i=0;i<=4;i++)
    {
        glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(x,-0.5f);
    glVertex2f(x,-1.3f);
    glEnd();
    x-=0.2f;
    }

    glColor3ub(102, 51, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,-0.6);
    glVertex2f(-1.4,-1.1);
    glVertex2f(-0.9,-1.1);
    glVertex2f(-0.9,-0.6);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void TicketBooth_evening()
{
    glColor3ub(255, 204, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.7,-0.4);
    glVertex2f(-1.7,-0.5);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.6,-0.4);
    glEnd();
    circleSolid(-1.15,-0.5,0.4);
    glColor3ub(204, 0, 0);
    drawString(-1.4,-0.4,"Ticket");

    glColor3ub(204, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.6,-0.5);
    glVertex2f(-1.6,-1.3);
    glVertex2f(-0.7,-1.3);
    glVertex2f(-0.7,-0.5);
    glEnd();

    float x=-0.75;
    for(int i=0;i<=4;i++)
    {
        glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(x,-0.5f);
    glVertex2f(x,-1.3f);
    glEnd();
    x-=0.2f;
    }

    glColor3ub(102, 51, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,-0.6);
    glVertex2f(-1.4,-1.1);
    glVertex2f(-0.9,-1.1);
    glVertex2f(-0.9,-0.6);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void TicketBooth_night()
{
    glColor3ub(255, 204, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.7,-0.4);
    glVertex2f(-1.7,-0.5);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.6,-0.4);
    glEnd();
    circleSolid(-1.15,-0.5,0.4);
    glColor3ub(204, 0, 0);
    drawString(-1.4,-0.4,"Ticket");

    glColor3ub(204, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.6,-0.5);
    glVertex2f(-1.6,-1.3);
    glVertex2f(-0.7,-1.3);
    glVertex2f(-0.7,-0.5);
    glEnd();

    float x=-0.75;
    for(int i=0;i<=4;i++)
    {
        glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(x,-0.5f);
    glVertex2f(x,-1.3f);
    glEnd();
    x-=0.2f;
    }

    glColor3ub(102, 51, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,-0.6);
    glVertex2f(-1.4,-1.1);
    glVertex2f(-0.9,-1.1);
    glVertex2f(-0.9,-0.6);
    glEnd();

    //windowlights
    glColor4f(255,255,0.0,0.5);
    GLfloat x1=-1.4;
    for(int i=0;i<4;i++)
    {
        circleSolid(x1,-0.6,0.06);
        circleSolid(x1,-1.1,0.06);
        x1+=0.15;
    }
    GLfloat y1=-0.78;
    for(int i=0;i<2;i++)
    {
        circleSolid(-1.4,y1,0.06);
        circleSolid(-0.93,y1,0.06);
        y1-=0.15;
    }

    glColor3ub(255, 230, 128);
    GLfloat x2=-1.4;
    for(int i=0;i<4;i++)
    {
        circleSolid(x2,-0.6,0.03);
        circleSolid(x2,-1.1,0.03);
        x2+=0.15;
    }
    GLfloat y2=-0.78;
    for(int i=0;i<2;i++)
    {
        circleSolid(-1.4,y2,0.03);
        circleSolid(-0.93,y2,0.03);
        y2-=0.15;
    }
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}

//tent
void tent_day()
{
    //bottom
    glColor3ub(230, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4.2,-0.2);
    glVertex2f(-3.9,-1.3);
    glVertex2f(-2.2,-1.3);
    glVertex2f(-1.9,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.25,-1.3);
    glVertex2f(-1.98,-0.2);
    glVertex2f(-2.05,-0.2);
    glVertex2f(-2.3,-1.3);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-4.17,-0.2);
    glVertex2f(-3.8,-1.3);
    glVertex2f(-3.75,-1.3);
    glVertex2f(-4.1,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.45,-1.3);
    glVertex2f(-2.28,-0.2);
    glVertex2f(-2.59,-0.2);
    glVertex2f(-2.6,-1.3);
    glEnd();

    glColor3ub(255, 255, 77);
    glBegin(GL_QUADS);
    glVertex2f(-3.85,-0.2);
    glVertex2f(-3.62,-1.3);
    glVertex2f(-3.5,-1.3);
    glVertex2f(-3.5,-0.2);
    glEnd();

    //gate
    glColor3ub(128, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.05,-0.9);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-3.58,-1.065);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.52,-1.065);
    glVertex2f(-2.7,-0.75);
    glEnd();


    glLineWidth(2.8);
    glColor3ub(128, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(-4.3,0.0);
    glVertex2f(-4.3,-1.3);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-1.3);
    glEnd();

    //middle
    glColor3ub(255, 26, 26);
    glBegin(GL_POLYGON);
    glVertex2f(-4.3,-0.3);
    glVertex2f(-4.3,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.3);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.2,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.9,0.0);
    glEnd();

    glColor3ub(255, 255, 102);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.4,0.0);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.9,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.2,0.0);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.4,0.0);
    glEnd();

    glColor3ub(0, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-4.3,-0.08);
    glVertex2f(-4.3,0.0);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.08);
    glEnd();

    GLfloat tri1=-4.25;
    GLfloat tri2=-4.10;
    GLfloat tri3=-3.95;
    for(int i=0;i<8;i++)
    {
    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(tri1,-0.08);
    glVertex2f(tri2,-0.28);
    glVertex2f(tri3,-0.08);
    glEnd();
    tri1+=0.3;
    tri2+=0.3;
    tri3+=0.3;
    }

    //top
    glColor3ub(128, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-3.25,0.650);
    glVertex2f(-2.85,0.650);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.3,0.99);
    glEnd();
    glColor3ub(230, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.05,1.17);
    glVertex2f(-3.3,0.99);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-3.05,1.37);
    glVertex2f(-3.05,1.12);
    glEnd();
    circleSolid(-3.055,1.245,0.065);
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void tent_evening()
{
    //bottom
    glColor3ub(230, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4.2,-0.2);
    glVertex2f(-3.9,-1.3);
    glVertex2f(-2.2,-1.3);
    glVertex2f(-1.9,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.25,-1.3);
    glVertex2f(-1.98,-0.2);
    glVertex2f(-2.05,-0.2);
    glVertex2f(-2.3,-1.3);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-4.17,-0.2);
    glVertex2f(-3.8,-1.3);
    glVertex2f(-3.75,-1.3);
    glVertex2f(-4.1,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.45,-1.3);
    glVertex2f(-2.28,-0.2);
    glVertex2f(-2.59,-0.2);
    glVertex2f(-2.6,-1.3);
    glEnd();

    glColor3ub(255, 255, 77);
    glBegin(GL_QUADS);
    glVertex2f(-3.85,-0.2);
    glVertex2f(-3.62,-1.3);
    glVertex2f(-3.5,-1.3);
    glVertex2f(-3.5,-0.2);
    glEnd();

    //gate
    glColor3ub(128, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.05,-0.9);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-3.58,-1.065);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.52,-1.065);
    glVertex2f(-2.7,-0.75);
    glEnd();


    glLineWidth(2.8);
    glColor3ub(128, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(-4.3,0.0);
    glVertex2f(-4.3,-1.3);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-1.3);
    glEnd();

    //middle
    glColor3ub(255, 26, 26);
    glBegin(GL_POLYGON);
    glVertex2f(-4.3,-0.3);
    glVertex2f(-4.3,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.3);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.2,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.9,0.0);
    glEnd();

    glColor3ub(255, 255, 102);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.4,0.0);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.9,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.2,0.0);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.4,0.0);
    glEnd();

    glColor3ub(0, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-4.3,-0.08);
    glVertex2f(-4.3,0.0);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.08);
    glEnd();

    GLfloat tri1=-4.25;
    GLfloat tri2=-4.10;
    GLfloat tri3=-3.95;
    for(int i=0;i<8;i++)
    {
    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(tri1,-0.08);
    glVertex2f(tri2,-0.28);
    glVertex2f(tri3,-0.08);
    glEnd();
    tri1+=0.3;
    tri2+=0.3;
    tri3+=0.3;
    }

    //top
    glColor3ub(128, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-3.25,0.650);
    glVertex2f(-2.85,0.650);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.3,0.99);
    glEnd();
    glColor3ub(230, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.05,1.17);
    glVertex2f(-3.3,0.99);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-3.05,1.37);
    glVertex2f(-3.05,1.12);
    glEnd();
    circleSolid(-3.055,1.245,0.065);
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}
void tent_night()
{
    //bottom
    glColor3ub(230, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4.2,-0.2);
    glVertex2f(-3.9,-1.3);
    glVertex2f(-2.2,-1.3);
    glVertex2f(-1.9,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.25,-1.3);
    glVertex2f(-1.98,-0.2);
    glVertex2f(-2.05,-0.2);
    glVertex2f(-2.3,-1.3);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-4.17,-0.2);
    glVertex2f(-3.8,-1.3);
    glVertex2f(-3.75,-1.3);
    glVertex2f(-4.1,-0.2);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.45,-1.3);
    glVertex2f(-2.28,-0.2);
    glVertex2f(-2.59,-0.2);
    glVertex2f(-2.6,-1.3);
    glEnd();

    glColor3ub(255, 255, 77);
    glBegin(GL_QUADS);
    glVertex2f(-3.85,-0.2);
    glVertex2f(-3.62,-1.3);
    glVertex2f(-3.5,-1.3);
    glVertex2f(-3.5,-0.2);
    glEnd();

    //gate
    glColor3ub(128, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.4,-0.75);
    glEnd();

    //lights
    glColor4f(255,255,0.0,0.5);
    GLfloat tg=-3.4;
    for(int i=0;i<6;i++)
    {
        circleSolid(tg,-0.72,0.06);
        tg+=0.15;
    }
    glColor3ub(255, 230, 128);
    GLfloat lg=-3.4;
    for(int i=0;i<6;i++)
    {
        circleSolid(lg,-0.72,0.03);
        lg+=0.15;
    }


    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,-0.75);
    glVertex2f(-3.05,-0.9);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.35,-1.3);
    glVertex2f(-3.58,-1.065);
    glVertex2f(-3.4,-0.75);
    glEnd();

    glColor3ub(128, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.75,-1.3);
    glVertex2f(-2.52,-1.065);
    glVertex2f(-2.7,-0.75);
    glEnd();


    glLineWidth(2.8);
    glColor3ub(128, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(-4.3,0.0);
    glVertex2f(-4.3,-1.3);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-1.3);
    glEnd();

    //middle
    glColor3ub(255, 26, 26);
    glBegin(GL_POLYGON);
    glVertex2f(-4.3,-0.3);
    glVertex2f(-4.3,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.3);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.2,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.9,0.0);
    glEnd();

    glColor3ub(255, 255, 102);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-3.4,0.0);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.9,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.2,0.0);
    glEnd();

    glColor3ub(255, 140, 26);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.7,0.0);
    glVertex2f(-3.05,0.8);
    glVertex2f(-2.4,0.0);
    glEnd();

    //glColor3ub(0, 230, 230);
    glColor3ub(0, 179, 179);
    glBegin(GL_QUADS);
    glVertex2f(-4.3,-0.08);
    glVertex2f(-4.3,0.0);
    glVertex2f(-1.8,0.0);
    glVertex2f(-1.8,-0.08);
    glEnd();

    //deco
    GLfloat tri1=-4.25;
    GLfloat tri2=-4.10;
    GLfloat tri3=-3.95;
    for(int i=0;i<8;i++)
    {
    glColor3ub(0, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(tri1,-0.08);
    glVertex2f(tri2,-0.28);
    glVertex2f(tri3,-0.08);
    glEnd();
    tri1+=0.3;
    tri2+=0.3;
    tri3+=0.3;
    }

    //lights
    glColor4f(255,255,0.0,0.5);
    GLfloat g1=-4.3;
    for(int i=0;i<17;i++)
    {
        circleSolid(g1,-0.05,0.06);
        g1+=0.15;
    }
    glColor3ub(255, 230, 128);
    GLfloat g2=-4.3;
    for(int i=0;i<17;i++)
    {
        circleSolid(g2,-0.05,0.03);
        g2+=0.15;
    }


    //top
    glColor3ub(128, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-3.25,0.650);
    glVertex2f(-2.85,0.650);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.3,0.99);
    glEnd();
    glColor3ub(230, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.8,0.99);
    glVertex2f(-3.05,1.17);
    glVertex2f(-3.3,0.99);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-3.05,1.37);
    glVertex2f(-3.05,1.12);
    glEnd();
    circleSolid(-3.055,1.245,0.065);

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}

//tower
void Tower_day()
{
  glTranslatef(.4,0.0,0.0);
  glLineWidth(7.00);
  glColor3ub(139,0,0);
  glBegin(GL_LINES);
  glVertex2f(1.5f,-.6f);
  glVertex2f(4.5f,-.6f);
  glEnd();
    //house
    glColor3ub( 52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.6,-0.6);
    glVertex2f(4.4,-.6);
    glVertex2f(4.4,.2);
    glVertex2f(1.6,.2);
    glEnd();
    //up
    glColor3ub( 139,0,0  );
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.3);
    glVertex2f(1.6,.2);
    glVertex2f(4.4,.2);
    glVertex2f(4.5,.3);
    glEnd();
    //up up
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.4);
    glVertex2f(1.5,.3);
    glVertex2f(4.5,.3);
    glVertex2f(4.5,.4);

     glEnd();
     //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(3.5,.7);
    glVertex2f(3.5,1.1);
    glVertex2f(2.6,1.1);
    glEnd();
     //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+2.6f,1.11f);    // x, y
	glVertex2f(+3.5f,1.11f);
	glVertex2f(+3.0,1.8f);
	glEnd();
    //upper line up to house
     glLineWidth(7.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(2.5f,1.1f);
     glVertex2f(3.6f,1.1f);
     glEnd();


    glColor3ub(0, 0, 255);
    circleSolid(+3.0,1.8f,0.1);


     //mid
    glColor3ub(0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(2.6,.4);
    glVertex2f(3.5,.4);
    glVertex2f(3.5,.7);
    glEnd();
    //line
  glLineWidth(7.00);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(3.6f,.7f);
  glVertex2f(2.5f,.7f);
  glEnd();

   float x=2.5f;
   float y=2.6f;
   for(int i=0;i<=5;i++)
  {

  glLineWidth(7.5);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(x,.75f);
  glVertex2f(y,.75f);
  glEnd();
  x+=.2;
  y+=.2;
  }
  //left
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(1.6,0.4);
    glVertex2f(2.2,.4);
    glVertex2f(2.2,.7);
    glVertex2f(1.6,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.7,0.7);
    glVertex2f(2.1,.7);
    glVertex2f(2.1,1.1);
    glVertex2f(1.7,1.1);
    glEnd();
    //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+1.65f,1.11f);    // x, y
	glVertex2f(+2.15f,1.11f);
	glVertex2f(+1.9,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(1.6f,1.1f);
     glVertex2f(2.2f,1.1f);
     glEnd();

	//point
	glColor3ub(0, 0, 255);
    circleSolid(1.9,1.6f,0.1);
    //right
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.4);
    glVertex2f(4.4,.4);
    glVertex2f(4.4,.7);
    glVertex2f(3.8,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(3.9,0.7);
    glVertex2f(4.3,.7);
    glVertex2f(4.3,1.1);
    glVertex2f(3.9,1.1);
    glEnd();
      //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+3.85f,1.1f);    // x, y
	glVertex2f(+4.35f,1.1f);
	glVertex2f(+4.1,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(3.8f,1.1f);
     glVertex2f(4.4f,1.1f);
     glEnd();

	//point
     glColor3ub(0, 0, 255);
	 circleSolid(4.1,1.6f,0.1);

  //gate
    glColor3ub(102, 51, 0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,-0.6);
    glVertex2f(3.5,-.6);
    glVertex2f(3.5,-.1);
    glVertex2f(3.3,.1);
    glVertex2f(2.7,.1);
    glVertex2f(2.5,-.1);
    glEnd();

     //left
    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(2.6,-0.6);
    glVertex2f(2.95,-.6);
    glVertex2f(2.95,-.0);
    glVertex2f(2.7,-.0);
    glVertex2f(2.6,-0.1);
    glEnd();
    //right


    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(3.05,-0.0);
    glVertex2f(3.05,-.6);
    glVertex2f(3.4,-.6);
    glVertex2f(3.4,-.1);
    glVertex2f(3.3,-0.0);
    glEnd();
    //door points
    //left
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(2.85,-.5f);
    glEnd();
    //right
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(3.15f,-.5f);
    glEnd();
    //windows
    //left
    glColor3ub( 133, 193, 233);
    circleSolid(2.1,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(2.0,0.0);
    glVertex2f(2.0,-.3);
    glVertex2f(2.2,-.3);
    glVertex2f(2.2,0.0);
    glEnd();
     //right
    glColor3ub( 133, 193, 233);
    circleSolid(3.9,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.0);
    glVertex2f(3.8,-.3);
    glVertex2f(4.0,-.3);
    glVertex2f(4.0,0.0);
    glEnd();
    //up
        //left
    circleSolid(1.87,0.95,.075);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(1.8,0.8);
    glVertex2f(1.93,.8);
    glVertex2f(1.93,.95);
    glVertex2f(1.8,0.95);
    glEnd();
    //right
    circleSolid(4.09,0.95,.07);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(4.02,0.8);
    glVertex2f(4.15,.8);
    glVertex2f(4.15,.95);
    glVertex2f(4.02,0.95);
    glEnd();
      //mid
    circleSolid(3.0,.96,.09);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(2.9,0.85);
    glVertex2f(3.1,.85);
    glVertex2f(3.1,1.0);
    glVertex2f(2.9,1.0);
    glEnd();
    //Flags
    //right
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+4.2f,1.8f);    // x, y
	glVertex2f(4.2f,1.92f);
	glVertex2f(+4.45f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(4.3,1.95f);
    glVertex2f(4.1,1.95f);
    glEnd();
    glLineWidth(5.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(4.1,1.7f);
    glVertex2f(4.1,2.0f);
    glEnd();
     //left
    //triangle
    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+2.0f,1.8f);    // x, y
	glVertex2f(2.0f,1.92f);
	glVertex2f(+2.2f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.95f);
    glVertex2f(2.1,1.95f);
    glEnd();
    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.7f);
    glVertex2f(1.9,2.0f);
    glEnd();
    //
    //mid
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+3.1f,2.05f);    // x, y
	glVertex2f(3.1f,1.9f);
	glVertex2f(+3.3f,1.98f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(3.0,2.05f);
    glVertex2f(3.2,2.05f);
    glEnd();

    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(3.0,1.9f);
    glVertex2f(3.0,2.1f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}
void Tower_evening()
{
  glTranslatef(0.4,0,0);
  glLineWidth(7.00);
  glColor3ub(139,0,0);
  glBegin(GL_LINES);
  glVertex2f(1.5f,-.6f);
  glVertex2f(4.5f,-.6f);
  glEnd();
    //house
    glColor3ub( 52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.6,-0.6);
    glVertex2f(4.4,-.6);
    glVertex2f(4.4,.2);
    glVertex2f(1.6,.2);
    glEnd();
    //up
    glColor3ub( 139,0,0  );
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.3);
    glVertex2f(1.6,.2);
    glVertex2f(4.4,.2);
    glVertex2f(4.5,.3);
    glEnd();
    //up up
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.4);
    glVertex2f(1.5,.3);
    glVertex2f(4.5,.3);
    glVertex2f(4.5,.4);

     glEnd();
     //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(3.5,.7);
    glVertex2f(3.5,1.1);
    glVertex2f(2.6,1.1);
    glEnd();
     //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+2.6f,1.11f);    // x, y
	glVertex2f(+3.5f,1.11f);
	glVertex2f(+3.0,1.8f);
	glEnd();
    //upper line up to house
     glLineWidth(7.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(2.5f,1.1f);
     glVertex2f(3.6f,1.1f);
     glEnd();


    glColor3ub(0, 0, 255);
    circleSolid(+3.0,1.8f,0.1);


     //mid
    glColor3ub(0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(2.6,.4);
    glVertex2f(3.5,.4);
    glVertex2f(3.5,.7);
    glEnd();
    //line
  glLineWidth(7.00);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(3.6f,.7f);
  glVertex2f(2.5f,.7f);
  glEnd();

   float x=2.5f;
   float y=2.6f;
   for(int i=0;i<=5;i++)
  {

  glLineWidth(7.5);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(x,.75f);
  glVertex2f(y,.75f);
  glEnd();
  x+=.2;
  y+=.2;
  }
  //left
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(1.6,0.4);
    glVertex2f(2.2,.4);
    glVertex2f(2.2,.7);
    glVertex2f(1.6,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.7,0.7);
    glVertex2f(2.1,.7);
    glVertex2f(2.1,1.1);
    glVertex2f(1.7,1.1);
    glEnd();
    //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+1.65f,1.11f);    // x, y
	glVertex2f(+2.15f,1.11f);
	glVertex2f(+1.9,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(1.6f,1.1f);
     glVertex2f(2.2f,1.1f);
     glEnd();

	//point
	glColor3ub(0, 0, 255);
    circleSolid(1.9,1.6f,0.1);
    //right
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.4);
    glVertex2f(4.4,.4);
    glVertex2f(4.4,.7);
    glVertex2f(3.8,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(3.9,0.7);
    glVertex2f(4.3,.7);
    glVertex2f(4.3,1.1);
    glVertex2f(3.9,1.1);
    glEnd();
      //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+3.85f,1.1f);    // x, y
	glVertex2f(+4.35f,1.1f);
	glVertex2f(+4.1,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(3.8f,1.1f);
     glVertex2f(4.4f,1.1f);
     glEnd();

	//point
     glColor3ub(0, 0, 255);
	 circleSolid(4.1,1.6f,0.1);

  //gate
    glColor3ub(102, 51, 0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,-0.6);
    glVertex2f(3.5,-.6);
    glVertex2f(3.5,-.1);
    glVertex2f(3.3,.1);
    glVertex2f(2.7,.1);
    glVertex2f(2.5,-.1);
    glEnd();

     //left
    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(2.6,-0.6);
    glVertex2f(2.95,-.6);
    glVertex2f(2.95,-.0);
    glVertex2f(2.7,-.0);
    glVertex2f(2.6,-0.1);
    glEnd();
    //right


    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(3.05,-0.0);
    glVertex2f(3.05,-.6);
    glVertex2f(3.4,-.6);
    glVertex2f(3.4,-.1);
    glVertex2f(3.3,-0.0);
    glEnd();
    //door points
    //left
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(2.85,-.5f);
    glEnd();
    //right
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(3.15f,-.5f);
    glEnd();
    //windows
    //left
    glColor3ub( 133, 193, 233);
    circleSolid(2.1,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(2.0,0.0);
    glVertex2f(2.0,-.3);
    glVertex2f(2.2,-.3);
    glVertex2f(2.2,0.0);
    glEnd();
     //right
    glColor3ub( 133, 193, 233);
    circleSolid(3.9,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.0);
    glVertex2f(3.8,-.3);
    glVertex2f(4.0,-.3);
    glVertex2f(4.0,0.0);
    glEnd();
    //up
        //left
    circleSolid(1.87,0.95,.075);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(1.8,0.8);
    glVertex2f(1.93,.8);
    glVertex2f(1.93,.95);
    glVertex2f(1.8,0.95);
    glEnd();
    //right
    circleSolid(4.09,0.95,.07);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(4.02,0.8);
    glVertex2f(4.15,.8);
    glVertex2f(4.15,.95);
    glVertex2f(4.02,0.95);
    glEnd();
      //mid
    circleSolid(3.0,.96,.09);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(2.9,0.85);
    glVertex2f(3.1,.85);
    glVertex2f(3.1,1.0);
    glVertex2f(2.9,1.0);
    glEnd();
    //Flags
    //right
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+4.2f,1.8f);    // x, y
	glVertex2f(4.2f,1.92f);
	glVertex2f(+4.45f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(4.3,1.95f);
    glVertex2f(4.1,1.95f);
    glEnd();
    glLineWidth(5.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(4.1,1.7f);
    glVertex2f(4.1,2.0f);
    glEnd();
     //left
    //triangle
    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+2.0f,1.8f);    // x, y
	glVertex2f(2.0f,1.92f);
	glVertex2f(+2.2f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.95f);
    glVertex2f(2.1,1.95f);
    glEnd();
    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.7f);
    glVertex2f(1.9,2.0f);
    glEnd();
    //
    //mid
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+3.1f,2.05f);    // x, y
	glVertex2f(3.1f,1.9f);
	glVertex2f(+3.3f,1.98f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(3.0,2.05f);
    glVertex2f(3.2,2.05f);
    glEnd();

    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(3.0,1.9f);
    glVertex2f(3.0,2.1f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}
void Tower_night()
{
  glTranslatef(0.4,0,0);
  glLineWidth(7.00);
  glColor3ub(139,0,0);
  glBegin(GL_LINES);
  glVertex2f(1.5f,-.6f);
  glVertex2f(4.5f,-.6f);
  glEnd();
    //house
    glColor3ub( 52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.6,-0.6);
    glVertex2f(4.4,-.6);
    glVertex2f(4.4,.2);
    glVertex2f(1.6,.2);
    glEnd();
    //up
    glColor3ub( 139,0,0  );
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.3);
    glVertex2f(1.6,.2);
    glVertex2f(4.4,.2);
    glVertex2f(4.5,.3);
    glEnd();
    //up up
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2f(1.5,0.4);
    glVertex2f(1.5,.3);
    glVertex2f(4.5,.3);
    glVertex2f(4.5,.4);

     glEnd();
     //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(3.5,.7);
    glVertex2f(3.5,1.1);
    glVertex2f(2.6,1.1);
    glEnd();
     //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+2.6f,1.11f);    // x, y
	glVertex2f(+3.5f,1.11f);
	glVertex2f(+3.0,1.8f);
	glEnd();
    //upper line up to house
     glLineWidth(7.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(2.5f,1.1f);
     glVertex2f(3.6f,1.1f);
     glEnd();


    glColor3ub(0, 0, 255);
    circleSolid(+3.0,1.8f,0.1);


     //mid
    glColor3ub(0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2f(2.6,0.7);
    glVertex2f(2.6,.4);
    glVertex2f(3.5,.4);
    glVertex2f(3.5,.7);
    glEnd();
    //line
  glLineWidth(7.00);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(3.6f,.7f);
  glVertex2f(2.5f,.7f);
  glEnd();

   float x=2.5f;
   float y=2.6f;
   for(int i=0;i<=5;i++)
  {

  glLineWidth(7.5);
  glColor3ub( 41, 128, 185 );
  glBegin(GL_LINES);
  glVertex2f(x,.75f);
  glVertex2f(y,.75f);
  glEnd();
  x+=.2;
  y+=.2;
  }
  //left
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(1.6,0.4);
    glVertex2f(2.2,.4);
    glVertex2f(2.2,.7);
    glVertex2f(1.6,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(1.7,0.7);
    glVertex2f(2.1,.7);
    glVertex2f(2.1,1.1);
    glVertex2f(1.7,1.1);
    glEnd();
    //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+1.65f,1.11f);    // x, y
	glVertex2f(+2.15f,1.11f);
	glVertex2f(+1.9,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(1.6f,1.1f);
     glVertex2f(2.2f,1.1f);
     glEnd();

	//point
	glColor3ub(0, 0, 255);
    circleSolid(1.9,1.6f,0.1);
    //right
   //mid
    glColor3ub(41, 128, 185);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.4);
    glVertex2f(4.4,.4);
    glVertex2f(4.4,.7);
    glVertex2f(3.8,.7);
    glEnd();
    //upper
      //mid house
    glColor3ub(52, 73, 94);
    glBegin(GL_QUADS);
    glVertex2f(3.9,0.7);
    glVertex2f(4.3,.7);
    glVertex2f(4.3,1.1);
    glVertex2f(3.9,1.1);
    glEnd();
      //mid triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);//
    glVertex2f(+3.85f,1.1f);    // x, y
	glVertex2f(+4.35f,1.1f);
	glVertex2f(+4.1,1.6f);
	glEnd();
    //upper line up to house
     glLineWidth(6.00);
     glColor3ub( 139,0,0 );
     glBegin(GL_LINES);
     glVertex2f(3.8f,1.1f);
     glVertex2f(4.4f,1.1f);
     glEnd();

	//point
     glColor3ub(0, 0, 255);
	 circleSolid(4.1,1.6f,0.1);

  //gate
    glColor3ub(102, 51, 0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,-0.6);
    glVertex2f(3.5,-.6);
    glVertex2f(3.5,-.1);
    glVertex2f(3.3,.1);
    glVertex2f(2.7,.1);
    glVertex2f(2.5,-.1);
    glEnd();

     //left
    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(2.6,-0.6);
    glVertex2f(2.95,-.6);
    glVertex2f(2.95,-.0);
    glVertex2f(2.7,-.0);
    glVertex2f(2.6,-0.1);
    glEnd();
    //right


    glColor3ub(248, 117, 8);
    glBegin(GL_POLYGON);
    glVertex2f(3.05,-0.0);
    glVertex2f(3.05,-.6);
    glVertex2f(3.4,-.6);
    glVertex2f(3.4,-.1);
    glVertex2f(3.3,-0.0);
    glEnd();
    //door points
    //left
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(2.85,-.5f);
    glEnd();
    //right
    glPointSize(8.0);
    glColor3ub(52, 73, 94);
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glVertex2f(3.15f,-.5f);
    glEnd();
    //windows
    //left
    glColor3ub( 133, 193, 233);
    circleSolid(2.1,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(2.0,0.0);
    glVertex2f(2.0,-.3);
    glVertex2f(2.2,-.3);
    glVertex2f(2.2,0.0);
    glEnd();

     //right
    glColor3ub( 133, 193, 233);
    circleSolid(3.9,0.0,.11);
    glBegin(GL_QUADS);
    glVertex2f(3.8,0.0);
    glVertex2f(3.8,-.3);
    glVertex2f(4.0,-.3);
    glVertex2f(4.0,0.0);
    glEnd();
    //up
        //left
    circleSolid(1.87,0.95,.075);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(1.8,0.8);
    glVertex2f(1.93,.8);
    glVertex2f(1.93,.95);
    glVertex2f(1.8,0.95);
    glEnd();
    //right
    circleSolid(4.09,0.95,.07);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(4.02,0.8);
    glVertex2f(4.15,.8);
    glVertex2f(4.15,.95);
    glVertex2f(4.02,0.95);
    glEnd();
      //mid
    circleSolid(3.0,.96,.09);
    glColor3ub( 133, 193, 233);
    glBegin(GL_QUADS);
    glVertex2f(2.9,0.85);
    glVertex2f(3.1,.85);
    glVertex2f(3.1,1.0);
    glVertex2f(2.9,1.0);
    glEnd();
    //Flags
    //right
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+4.2f,1.8f);    // x, y
	glVertex2f(4.2f,1.92f);
	glVertex2f(+4.45f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(4.3,1.95f);
    glVertex2f(4.1,1.95f);
    glEnd();
    glLineWidth(5.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(4.1,1.7f);
    glVertex2f(4.1,2.0f);
    glEnd();
     //left
    //triangle
    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+2.0f,1.8f);    // x, y
	glVertex2f(2.0f,1.92f);
	glVertex2f(+2.2f,1.9f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.95f);
    glVertex2f(2.1,1.95f);
    glEnd();
    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(1.9,1.7f);
    glVertex2f(1.9,2.0f);
    glEnd();
    //
    //mid
    //triangle

    glBegin(GL_TRIANGLES);//
    glColor3ub(255,0,0);//rgb color picker

    glVertex2f(+3.1f,2.05f);    // x, y
	glVertex2f(3.1f,1.9f);
	glVertex2f(+3.3f,1.98f);
	glEnd();
    //square
    glLineWidth(7.5);
    glColor3ub( 255,0,0 );
    glBegin(GL_LINES);
    glVertex2f(3.0,2.05f);
    glVertex2f(3.2,2.05f);
    glEnd();

    glLineWidth(6.0);
    glColor3ub( 41, 128, 185 );
    glBegin(GL_LINES);
    glVertex2f(3.0,1.9f);
    glVertex2f(3.0,2.1f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}

//Light post
void LightPost_day()
{
//light post
//mid

    glLineWidth(5.0f);
 //glColor3ub( 122, 118, 118);
    glColor3f(0,0,0);
    glScalef(1,.9,0);
    glTranslatef(-0.0,-.1,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    //right
    glTranslatef(4,-0.2,0.0f);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
   // glLoadIdentity();
   //Left
    glTranslatef(-7,0.1,0.0f);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    }
void LightPost_evening()
{
//light post
//mid

    glLineWidth(5.0f);
 //glColor3ub( 122, 118, 118);
    glColor3f(0,0,0);
    glScalef(1,.9,0);
    glTranslatef(-0.0,-.1,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    //right
    glTranslatef(4,-0.2,0.0f);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
   // glLoadIdentity();
   //Left
    glTranslatef(-7,0.1,0.0f);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    }
void LightPost_night()
{
//light post
//mid

    glLineWidth(5.0f);
    glScalef(1,.9,0);
    glTranslatef(-0.0,-.1,0.0);

    //glow
    glColor4f(255,255,0.0,0.2);
    circleSolid(0.0,-1.2,0.5);
    circleSolid(0.0,-1.2,0.4);
    circleSolid(0.0,-1.2,0.28);

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    //right
    glTranslatef(4,-0.2,0.0f);
    glColor4f(255,255,0.0,0.2);
    circleSolid(0.0,-1.2,0.5);
    circleSolid(0.0,-1.2,0.4);
    circleSolid(0.0,-1.2,0.28);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
   // glLoadIdentity();
   //Left
    glTranslatef(-7,0.1,0.0f);
    glColor4f(255,255,0.0,0.2);
    circleSolid(0.0,-1.2,0.5);
    circleSolid(0.0,-1.2,0.4);
    circleSolid(0.0,-1.2,0.28);
    glLineWidth(5.0f);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.0f,-2.5);
    glVertex2f(0.0f,-1.5);
    glEnd();
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.1f,-1.5);
    glVertex2f(0.1f,-1.5);
    glEnd();
    glLineWidth(9.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.15f,-1.45);
    glVertex2f(0.15f,-1.45);
    glEnd();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2f(-.125f,-1.4f);
    glVertex2f(.125f,-1.4f);
    glVertex2f(.16f,-.9f);
    glVertex2f(-.16f,-.9f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.18f,-.92);
    glVertex2f(0.18f,-.92);
    glVertex2f(-0.16f,-.89);
    glVertex2f(0.16f,-.89);
    glVertex2f(-0.12f,-.86);
    glVertex2f(0.12f,-.86);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(.08f,-1.45f);
    glVertex2f(.1f,-.9f);
    glVertex2f(-.08f,-1.45f);
    glVertex2f(-.1f,-.9f);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    }


//tree
void Tree()
{
    glScalef(.8,.8,0);
    glTranslatef(1.8,0.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.7,1.5,0);
    glTranslatef(-1.87,-0.0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.9,0.3);
    glVertex2f(-3.8,0.3);
    glVertex2f(-4.35,0.55);
   // glVertex2f(-4.6,0.5);
    glEnd();
    glColor3ub(229, 152, 102);
    //glTranslatef(-1.87,-0.0,0);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    glVertex2f(-4.36,-0.27);
    glVertex2f(-4.36,-0.6);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    //right
    glScalef(.6,.6,0);
    glTranslatef(6,0.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.7,1.5,0);
    glTranslatef(-1.87,-0.0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.9,0.3);
    glVertex2f(-3.8,0.3);
    glVertex2f(-4.35,0.55);
   // glVertex2f(-4.6,0.5);
    glEnd();
    glColor3ub(229, 152, 102);
    //glTranslatef(-1.87,-0.0,0);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    glVertex2f(-4.36,-0.27);
    glVertex2f(-4.36,-0.6);
    glEnd();
     glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    glTranslatef(4.0,0.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.7,1.5,0);
    glTranslatef(-1.87,-0.0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.9,0.3);
    glVertex2f(-3.8,0.3);
    glVertex2f(-4.35,0.55);
   // glVertex2f(-4.6,0.5);
    glEnd();
    glColor3ub(229, 152, 102);
    //glTranslatef(-1.87,-0.0,0);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    glVertex2f(-4.36,-0.27);
    glVertex2f(-4.36,-0.6);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    //gol
    glTranslatef(.55,0,0);
    glColor3ub(110, 44, 0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-1.7,.1);
    glVertex2f(-1.7,0.8);
    glVertex2f(-1.67,.4);
    glVertex2f(-1.5,0.55);
    glVertex2f(-1.7,.3);
    glVertex2f(-1.87,0.45);

    glEnd();
    glColor3ub( 40, 180, 99);
    circleSolid(-1.7,.75,.23);
    glColor3ub( 46, 204, 113);
    circleSolid(-1.45,.55,.17);
    circleSolid(-1.82,.45,.12);
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    ///right
    glTranslatef(2,0,0);
    glColor3ub(110, 44, 0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-1.7,.1);
    glVertex2f(-1.7,0.8);
    glVertex2f(-1.67,.4);
    glVertex2f(-1.5,0.55);
    glVertex2f(-1.7,.3);
    glVertex2f(-1.87,0.45);

    glEnd();
    glColor3ub(  40, 180, 99 );
    circleSolid(-1.7,.95,.2);
    //
    circleSolid(-1.55,.75,.17);
    circleSolid(-1.85,.75,.17);
    //
    glColor3ub( 46, 204, 113);
    circleSolid(-1.45,.55,.17);
    circleSolid(-1.82,.45,.12);
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    //rightest
    glScalef(.6,.6,0);
    glTranslatef(4,0,0);
    glColor3ub(110, 44, 0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-1.7,.1);
    glVertex2f(-1.7,0.8);
    glVertex2f(-1.67,.4);
    glVertex2f(-1.5,0.55);
    glVertex2f(-1.7,.3);
    glVertex2f(-1.87,0.45);

    glEnd();

    glColor3ub( 40, 180, 99);
    circleSolid(-1.7,.75,.23);
    glColor3ub( 46, 204, 113);
    circleSolid(-1.45,.55,.17);
    circleSolid(-1.82,.45,.12);
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    //leftest
    glScalef(.55,.55,0);
    glTranslatef(-1.65,-0.1,0);
    glColor3ub(110, 44, 0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-1.7,0.2);
    glVertex2f(-1.7,0.8);
    glVertex2f(-1.67,.4);
    glVertex2f(-1.5,0.55);
    glVertex2f(-1.7,.3);
    glVertex2f(-1.87,0.45);

    glEnd();
    glColor3ub(  40, 180, 99 );
    circleSolid(-1.7,.95,.2);
    //
    circleSolid(-1.55,.75,.17);
    circleSolid(-1.85,.75,.17);
    //
    glColor3ub( 46, 204, 113);
    circleSolid(-1.45,.55,.17);
    circleSolid(-1.82,.45,.12);

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    //Left of tent
     //right
    glScalef(1,.8,0);
    glTranslatef(-.4,-.9,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.7,1.5,0);
    glTranslatef(-1.87,-0.0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.9,0.3);
    glVertex2f(-3.8,0.3);
    glVertex2f(-4.35,0.55);
   // glVertex2f(-4.6,0.5);
    glEnd();
    glColor3ub(229, 152, 102);
    //glTranslatef(-1.87,-0.0,0);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    glVertex2f(-4.36,-0.27);
    glVertex2f(-4.36,-0.6);
    glEnd();
     glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
    glTranslatef(4.0,0.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.9,.9,0);
    glTranslatef(-.49,0.25,0);
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.7,0.3);
    glVertex2f(-4,0.3);
    glVertex2f(-4.1,0.5);
    glVertex2f(-4.6,0.5);
    glEnd();
    glScalef(.7,1.5,0);
    glTranslatef(-1.87,-0.0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(-4.9,0.3);
    glVertex2f(-3.8,0.3);
    glVertex2f(-4.35,0.55);
   // glVertex2f(-4.6,0.5);
    glEnd();
    glColor3ub(229, 152, 102);
    //glTranslatef(-1.87,-0.0,0);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    glVertex2f(-4.36,-0.27);
    glVertex2f(-4.36,-0.6);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);



    //Left of tent
    glScalef(1.5,1.2,0);
    glTranslatef(-1.5,-1.5,0);
    glColor3ub(110, 44, 0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-1.7,0.2);
    glVertex2f(-1.7,0.8);
    glVertex2f(-1.67,.4);
    glVertex2f(-1.5,0.55);
    glVertex2f(-1.7,.3);
    glVertex2f(-1.87,0.45);

    glEnd();
    glColor3ub(  40, 180, 99 );
    circleSolid(-1.7,.95,.2);
    //
    circleSolid(-1.55,.75,.17);
    circleSolid(-1.85,.75,.17);
    //
    glColor3ub( 46, 204, 113);
    circleSolid(-1.45,.55,.17);
    circleSolid(-1.82,.45,.12);

    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

}

//balloons
void balloons()
{
    glLineWidth(1.20);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.4,-1.32);
    glVertex2f(-0.2,-0.4);
    glVertex2f(-0.4,-1.32);
    glVertex2f(-0.4,-0.57);
    glVertex2f(-0.4,-1.32);
    glEnd();
    glColor3ub(0, 0, 204);
    Oval(-0.60,0.03,0.2,0.35);
    glColor3ub(230, 0, 0);
    Oval(-0.20,-0.13,0.2,0.35);

    glColor3ub(255, 255, 0);
    Oval(-0.4,-0.3,0.2,0.35);
    glColor3ub(0,0,0);


    glTranslatef(3.5,-1.0,0.0);
    glColor3ub(255, 0, 102);
    Oval(-0.60,0.03,0.2,0.35);
    glLineWidth(1.20);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.65,-0.3);
    glVertex2f(-0.4,-1.32);
    glEnd();
    glColor3ub(255, 102, 0);
    Oval(-0.20,-0.13,0.2,0.35);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.2,-0.45);
    glVertex2f(-0.4,-1.32);
    glEnd();
    glColor3ub(102, 0, 51);
    Oval(-0.4,-0.3,0.2,0.35);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.4,-0.66);
    glVertex2f(-0.4,-1.32);
    glEnd();

    glTranslatef(-3.5,1.3,0.0);
    glColor3ub(0, 153, 255);
    Oval(-4.0,-1.1,0.2,0.35);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-4.0,-1.425);
    glVertex2f(-4.23,-2.3);
    glEnd();
    glColor3ub(102, 0, 102);
    Oval(-4.4,-1.0,0.2,0.35);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-4.4,-1.2);
    glVertex2f(-4.23,-2.3);
    glEnd();
    glColor3ub(255, 51, 153);
    Oval(-4.20,-1.2,0.2,0.35);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-4.23,-1.55);
    glVertex2f(-4.23,-2.3);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);
}

