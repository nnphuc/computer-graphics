

/* -- INCLUDE FILES ------------------------------------------------------ */
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>


static GLfloat spin = 0.0;
static bool rotate = true;
void init(void) 
{
    glClearColor(1.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glBegin(GL_LINE_LOOP);
        // Các đỉnh được liệt kê sẽ tự nối với nhau và đỉnh cuối sẽ nôi với đỉnh đầu 
        float R = 20.0;
        float r = 14.0;
        float alpha = M_PI/2;
        glColor3f(1.0,1.0,0.0);
        for(int i=0;i<10;i++) {

            float rr = i%2 ==0? R:r;
            float x = rr*cos(alpha);
            float y = rr*sin(alpha);
            glVertex3f(x,y,0.0);
            alpha += 2*M_PI/10;
        }

    glEnd();
    glFlush();
    glPopMatrix();
    glutSwapBuffers();
    }

void spinDisplay(void)
{
    spin = spin - 2.0;
    if (spin > 360.0)
    spin = spin - 360.0;
    glutPostRedisplay();
}
void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void mouse(int button, int state, int x, int y) 
{
    
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        rotate = !rotate;
    }
    if(rotate) {
        glutIdleFunc(spinDisplay);
    } else {
        glutIdleFunc(NULL);
    }
}
/*
* Request double buffer display mode.
* Register mouse input callback functions
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250); 
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Vidu_02");
    init();
    
    glutDisplayFunc(display); 
    glutReshapeFunc(reshape); 
    glutMouseFunc(mouse);
    glutMainLoop();
return 0;
}
/* ----------------------------------------------------------------------- */

