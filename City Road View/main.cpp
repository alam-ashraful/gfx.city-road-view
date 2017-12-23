#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void myInit (void)
{
        glClearColor(1.0, 1.0, 1.0, 0.0);
        glColor3f(0.0f, 0.0f, 0.0f);
        glPointSize(4.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 902.0, 0.0, 684.0);
}

void Sky()
{
        glPushMatrix();
        glColor3ub(103,155,170);
        glBegin(GL_QUADS);
        glVertex2i(0,684);
        glVertex2i(902,684);
        glVertex2i(902,0);
        glVertex2i(0,0);
        glEnd();
        glPopMatrix();

        glutPostRedisplay();
}

void homeWindow(int x,int y)
{
        glPushMatrix();
        glColor3ub(156,178,189);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+12);
        glVertex2i(x,y+12);
        glEnd();
        glPopMatrix();
}

void homeWindow2(int x,int y)
{
        glPushMatrix();
        glColor3ub(96,131,135);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+4,y);
        glVertex2i(x+4,y+17);
        glVertex2i(x,y+17);
        glEnd();
        glPopMatrix();
}

void homeWindow3(int x,int y)
{
        glPushMatrix();
        glColor3ub(140,148,148);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+14,y);
        glVertex2i(x+14,y+13);
        glVertex2i(x,y+13);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glBegin(GL_QUADS);
        glVertex2i(x,y+17);
        glVertex2i(x+14,y+17);
        glVertex2i(x+14,y+30);
        glVertex2i(x,y+30);
        glEnd();
        glPopMatrix();
}

void Home()
{
        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(20,385);
        glVertex2i(118,385);
        glVertex2i(118,398);
        glVertex2i(20,398);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(127,10,20);
        glBegin(GL_QUADS);
        glVertex2i(20,379);
        glVertex2i(118,379);
        glVertex2i(118,385);
        glVertex2i(20,385);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(28,370);
        glVertex2i(110,370);
        glVertex2i(110,379);
        glVertex2i(28,379);
        glEnd();

        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(10,330);
        glVertex2i(130,330);
        glVertex2i(130,370);
        glVertex2i(10,370);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(0,309);
        glVertex2i(141,309);
        glVertex2i(141,331);
        glVertex2i(0,331);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(235,214,184);
        glBegin(GL_QUADS);
        glVertex2i(5,257);
        glVertex2i(137,257);
        glVertex2i(137,309);
        glVertex2i(5,309);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(52,257);
        glVertex2i(87,257);
        glVertex2i(87,287);
        glVertex2i(52,287);
        glEnd();
        glPopMatrix();

        //Bottom Block

        int HomeStripe1=-5;
         for(int i=9;i>=0;i--)
        {
            HomeStripe1+=13;
            homeWindow(HomeStripe1,292);
        }

        //Bottom up block
        int HomeStripe2=-5;
        for(int i=16;i>=0;i--)
        {
            HomeStripe2+=8;
            homeWindow2(HomeStripe2,312);
        }

        //next Bottom up block
        int HomeStripe3=-1;
        for(int i=5;i>=0;i--)
        {
            HomeStripe3+=18;
            homeWindow3(HomeStripe3,335);
        }

        glutPostRedisplay();
}


//*********HOSPITAL PART***********

void HospitalWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+16,y);
        glVertex2i(x+16,y+30);
        glVertex2i(x,y+30);
        glEnd();
        glPopMatrix();
}

void HospitalMidWindow1(int x,int y)
{
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+12,y);
        glVertex2i(x+12,y+18);
        glVertex2i(x,y+18);
        glEnd();
        glPopMatrix();
}

void Hospital()
{
        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(151,257);
        glVertex2i(181,257);
        glVertex2i(181,424);
        glVertex2i(151,424);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(449,257);
        glVertex2i(449,424);
        glVertex2i(420,424);
        glVertex2i(420,257);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(181,381);
        glVertex2i(420,381);
        glVertex2i(420,400);
        glVertex2i(181,400);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(190,27,9);
        glBegin(GL_QUADS);
        glVertex2i(181,258);
        glVertex2i(420,258);
        glVertex2i(420,381);
        glVertex2i(181,381);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(151,390);
        glVertex2i(181,390);
        glVertex2i(181,401);
        glVertex2i(151,401);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(420,390);
        glVertex2i(449,390);
        glVertex2i(449,401);
        glVertex2i(420,401);
        glEnd();
        glPopMatrix();

        int HospitalStripe1=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe1+=20;
            HospitalWindow1(HospitalStripe1,349);
        }

        int HospitalStripe2=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe2+=20;
            HospitalWindow1(HospitalStripe2,315);
        }

        int HospitalStripe3=163;
        for(int i=11;i>=0;i--)
        {
            HospitalStripe3+=20;
            HospitalWindow1(HospitalStripe3,281);
        }

         glPushMatrix(); //middle long stripe
        glColor3ub(252,222,66);
        glBegin(GL_QUADS);
        glVertex2i(263,257);
        glVertex2i(339,257);
        glVertex2i(339,400);
        glVertex2i(263,400);
        glEnd();
        glPopMatrix();

        int HospitalStripe4=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe4+=14;
            HospitalMidWindow1(HospitalStripe4,370);
        }

         int HospitalStripe5=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe5+=14;
            HospitalMidWindow1(HospitalStripe5,340);
        }

         int HospitalStripe6=260;
        for(int i=3;i>=0;i--)
        {
            HospitalStripe6+=14;
            HospitalMidWindow1(HospitalStripe6,310);
        }

        glPushMatrix();  //Door
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(286,257);
        glVertex2i(318,257);
        glVertex2i(318,298);
        glVertex2i(286,298);
        glEnd();
        glPopMatrix();

        glutPostRedisplay();
}

//******Circle******
void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 50; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.1416;

    glColor3ub(252,222,66);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
        glEnd();

        glPushMatrix();
        glColor3ub(255,0,0);
        glBegin(GL_QUADS);
        glVertex2i(295,395);
        glVertex2i(307,395);
        glVertex2i(307,426);
        glVertex2i(295,426);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(255,0,0);
        glBegin(GL_QUADS);
        glVertex2i(284,408);
        glVertex2i(318,408);
        glVertex2i(318,418);
        glVertex2i(284,418);
        glEnd();
        glPopMatrix();


}

void Road()
{
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,148);
    glVertex2i(902,148);
    glVertex2i(902,47);
    glVertex2i(0,47);
    glEnd();
    glPopMatrix();

    for(int i=0;i<120*8;i+=120)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,95);
        glVertex2i(35+i,95);
        glVertex2i(35+i,100);
        glVertex2i(0+i,100);
        glEnd();
        glPopMatrix();
    }
}

void RoadCorner1()
{
    for(int i=0;i<16*60;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148);
        glVertex2i(16+i,148);
        glVertex2i(16+i,157);
        glVertex2i(0+i,157);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148);
        glVertex2i(39+i,148);
        glVertex2i(39+i,157);
        glVertex2i(16+i,157);
        glEnd();
        glPopMatrix();
    }
}

void RoadCorner2()
{
    for(int i=0;i<16*60;i+=30)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,148-100);
        glVertex2i(16+i,148-100);
        glVertex2i(16+i,157-100);
        glVertex2i(0+i,157-100);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(16+i,148-100);
        glVertex2i(39+i,148-100);
        glVertex2i(39+i,157-100);
        glVertex2i(16+i,157-100);
        glEnd();
        glPopMatrix();
    }
}

void RoadGrash()
{
    glPushMatrix();
    glColor3ub(100,171,55);
    glBegin(GL_QUADS);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(902.0,0.0,0.0);
    glVertex3f(902.0,47.0,0.0);
    glVertex3f(0.0,47.0,0.0);
    glEnd();
    glPopMatrix();
}



void Tree()
{
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,78);
//    glVertex2i(67,78);
//    glVertex2i(46,110);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,70);
//    glVertex2i(67,70);
//    glVertex2i(46,102);
//    glEnd();
//    glPopMatrix();

//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,62);
//    glVertex2i(67,62);
//    glVertex2i(46,94);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glColor3ub(37,90,27);
//    glBegin(GL_TRIANGLES);
//    glVertex2i(24,78-24);
//    glVertex2i(67,78-24);
//    glVertex2i(46,110-24);
//    glEnd();
//    glPopMatrix();

    for(int i=0; i<7*130;i+=130)
    {
        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,46);
        glVertex2i(67+i,46);
        glVertex2i(46+i,78);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,40);
        glVertex2i(67+i,40);
        glVertex2i(46+i,72);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(161,89,61);
        glBegin(GL_QUADS);
        glVertex2i(39+i,40);
        glVertex2i(52+i,40);
        glVertex2i(52+i,0);
        glVertex2i(39+i,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,32);
        glVertex2i(67+i,32);
        glVertex2i(46+i,64);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(37,90,27);
        glBegin(GL_TRIANGLES);
        glVertex2i(24+i,24);
        glVertex2i(67+i,24);
        glVertex2i(46+i,56);
        glEnd();
        glPopMatrix();
    }
}

void Car1()
{

}

void myDisplay(void)
{
        glClear (GL_COLOR_BUFFER_BIT);
        //glPointSize(4.0);

        Sky();
        Home();
        drawFilledCircle(300.0f,400.0f,40.0f);
        Hospital();
        Road();
        RoadCorner1();
        RoadCorner2();
        RoadGrash();
        Tree();
        glFlush ();
}

int main(int argc, char** argv)
{
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (902,684);
        //glutInitWindowPosition (100, 150);
        glutCreateWindow ("City Road View");
        glutDisplayFunc(myDisplay);
        myInit ();
        glutMainLoop();
}
