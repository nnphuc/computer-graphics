#include <GL/glut.h>

#include <math.h>

/**
 * gl : các lệnh liên quan đến vẽ
 * glut : các lệnh liên quan đến cửa sổ, màn hình ..
 * */

void displayMe(void)
{
    // Lệnh xóa nền
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Bắt đầu vẽ đa giác
    glBegin(GL_POLYGON);
        // Các đỉnh được liệt kê sẽ tự nối với nhau và đỉnh cuối sẽ nôi với đỉnh đầu 

        float R = 0.8;
        float alpha = M_PI/2;
        float x,y;
        // dat mau cho da giac
        glColor3f(1.0,1.0,0.0);
        for(int i=0;i<6;i++) {
            x = R*cos(alpha);
            y = R*sin(alpha);
            alpha-=M_PI/3;
            glVertex3f(x,y,0.0);
        }
    glEnd();
    // Loại bỏ các transforms
    glFlush();
    
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}

