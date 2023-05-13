#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14159265358979323846
#include <cstdlib>
#include <ctime>
#include <vector>
#include<mmsystem.h>

int i=0;
int triangleAmount = 100;
GLfloat twicePi = 2.0*PI;
GLfloat x=0 ; GLfloat y=0; GLfloat radius =0;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat position_bird = 0.0f;
GLfloat position_bird_2 = 0.0f;
GLfloat speed_bird=0.01f;

void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

// Function to draw text
void drawText(char *text, float x, float y) {
    glRasterPos2f(x, y);

    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}

void drawText1(char *text, float x, float y) {
    glRasterPos2f(x, y);

    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}

void annex(){
    glColor3f(0.96, 0.94, 0.85);
    glBegin(GL_POLYGON);
    glVertex2f(-1.34, -0.25);
    glVertex2f(-0.995, -0.27);
    glVertex2f(-0.99, -0.29);
    glVertex2f(-1.34, -0.27);
    glEnd();
    glColor3f(0.86, 0.45, 0.26);
    glBegin(GL_POLYGON);
    glVertex2f(-1.34, -0.27);
    glVertex2f(-1.02, -0.292);
    glVertex2f(-1.02, -0.31);
    glVertex2f(-1.34, -0.298);
    glEnd();
    glColor3f(0.80, 0.45, 0.26);
    glBegin(GL_POLYGON);
    glVertex2f(-1.36, -0.31);
    glVertex2f(-0.902, -0.322);
    glVertex2f(-0.994, -0.31);
    glVertex2f(-1.34, -0.298);
    glEnd();

    glColor3f(0.859, 0.859, 0.859);
    glBegin(GL_POLYGON);
    glVertex2f(-1.35, -0.31);
    glVertex2f(-0.902, -0.323);
    glVertex2f(-0.9, -0.4);
    glVertex2f(-1.34, -0.412);
    glEnd();

}

void field(){
    glColor3f(0.2f,0.6f,0.17f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.344, -0.412);
    glVertex2f(-0.87, -0.383);
    glColor3f(0.54f,0.86f,0.26f);
    glVertex2f(0.185, -0.383);
    glColor3f(0.63f,0.96f,0.33f);
    glVertex2f(0.309, -0.398);
    glVertex2f(0.867, -0.472);
    glVertex2f(1.04, -0.475);
    glVertex2f(1.3395, -0.513);
    glVertex2f(1.341, -0.72);
    glVertex2f(-1.344, -0.72);
    glEnd();
}

void gallery(){
    ///left stair rail
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.378, -0.378);
    glVertex2f(0.356, -0.376);
    glVertex2f(0.355, -0.318);
    glVertex2f(0.645, -0.197);
    glVertex2f(0.764, -0.1898);
    glEnd();
    ///seats
    glColor3f(0.18, 0.824, 0.972);
    glBegin(GL_POLYGON);
    glVertex2f(0.378, -0.378);
    glVertex2f(0.378, -0.328);
    glVertex2f(0.7, -0.2);
    glVertex2f(0.764, -0.1898);
    glVertex2f(1.339, -0.074);
    glVertex2f(1.3399, -0.169);
    glVertex2f(0.948, -0.327);
    glVertex2f(0.95, -0.416);
    glVertex2f(0.867, -0.416);
    glEnd();

    glColor3f(0.859, 0.859, 0.859);
    glBegin(GL_POLYGON);
    glVertex2f(0.309, -0.398);
    glVertex2f(0.867, -0.472);
    glVertex2f(1.041, -0.475);
    glVertex2f(1.041, -0.414);
    glVertex2f(0.867, -0.416);
    glVertex2f(0.3096, -0.375);
    glEnd();

    ///chairs
    glColor3f(0.0, 0.7, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(1.339, -0.1);
    glVertex2f(0.826, -0.369);
    glVertex2f(0.698, -0.364);
    glVertex2f(1.28, -0.0844);
    glVertex2f(1.339, -0.074);
    glEnd();

    glColor3f(0.42, 0.84, 0.96);
    glBegin(GL_POLYGON);
    glVertex2f(0.586, -0.364);
    glVertex2f(0.992, -0.165);
    glVertex2f(1.184, -0.115);
    glVertex2f(0.688, -0.364);
    glEnd();

    glColor3f(0.42, 0.84, 0.96);
    glBegin(GL_POLYGON);
    glVertex2f(0.406, -0.358);
    glVertex2f(0.78, -0.2);
    glVertex2f(0.9, -0.17);
    glVertex2f(0.451, -0.359);
    glEnd();

    glColor3f(0.0, 0.7, 0.86);
    glBegin(GL_POLYGON);
    glVertex2f(0.366, -0.351);
    glVertex2f(0.7, -0.2);
    glVertex2f(0.764, -0.1898);
    glVertex2f(0.4, -0.35);
    glEnd();

    ///shade
    glColor3f(0.96, 0.94, 0.85);
    glBegin(GL_POLYGON);
    glVertex2f(0.776, -0.131);glVertex2f(0.4, -0.117);
    glVertex2f(0.226, -0.099);glVertex2f(0.241, -0.057);
    glVertex2f(0.21, -0.056);glVertex2f(0.214, -0.025);
    glVertex2f(0.217, -0.0056);glVertex2f(0.2259, 0.0046);
    glVertex2f(0.2325, -0.001);glVertex2f(0.24, -0.02);
    glVertex2f(0.2496, 0.025); glVertex2f(0.259, 0.055);
    glVertex2f(0.2696, 0.0768); glVertex2f(0.282, 0.0903);
    glVertex2f(0.297, 0.085); glVertex2f(0.3095, 0.0602);
    glVertex2f(0.314, 0.085); glVertex2f(0.3226, 0.121);
    glVertex2f(0.337, 0.159); glVertex2f(0.352, 0.172);
    glVertex2f(0.365, 0.162); glVertex2f(0.374, 0.143);
    glVertex2f(0.481, 0.136); glVertex2f(0.5, 0.2);
    glVertex2f(0.514, 0.233); glVertex2f(0.537, 0.273);
    glVertex2f(0.594, 0.258);glVertex2f(1.338, 0.2196);
    glVertex2f(1.34, 0.0199);
    glEnd();
    ///top shade
    glBegin(GL_POLYGON);
    glVertex2f(0.224, 0.005);glVertex2f(0.245, 0.002);
    glVertex2f(0.24, -0.02);glVertex2f(0.233, -0.001);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.282, 0.0903);glVertex2f(0.314, 0.086);
    glVertex2f(0.3095, -0.0602);glVertex2f(0.297, 0.085);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.35216, 0.17166);glVertex2f(0.48891, 0.16164);
    glVertex2f(0.48098, 0.13604);glVertex2f(0.37396, 0.14329);
    glVertex2f(0.36491, 0.16221);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.53684, 0.27255);glVertex2f(1.3407, 0.25123);
    glVertex2f(1.3407, 0.21957);glVertex2f(0.5942, 0.25805);
    glEnd();

    ///shade border
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.776, -0.131);glVertex2f(0.4, -0.117);
    glVertex2f(0.226, -0.099);glVertex2f(0.241, -0.057);
    glVertex2f(0.21, -0.056);glVertex2f(0.214, -0.025);
    glVertex2f(0.217, -0.0056);glVertex2f(0.2259, 0.0046);
    glVertex2f(0.2325, -0.001);glVertex2f(0.24, -0.02);
    glVertex2f(0.2496, 0.025); glVertex2f(0.259, 0.055);
    glVertex2f(0.2696, 0.0768); glVertex2f(0.282, 0.0903);
    glVertex2f(0.297, 0.085); glVertex2f(0.3095, 0.0602);
    glVertex2f(0.314, 0.085); glVertex2f(0.3226, 0.121);
    glVertex2f(0.337, 0.159); glVertex2f(0.352, 0.172);
    glVertex2f(0.365, 0.162); glVertex2f(0.374, 0.143);
    glVertex2f(0.481, 0.136); glVertex2f(0.5, 0.2);
    glVertex2f(0.514, 0.233); glVertex2f(0.537, 0.273);
    glVertex2f(0.594, 0.258);glVertex2f(1.338, 0.2196);
    glVertex2f(1.34, 0.0199);
    glEnd();
    ///top shade border
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.224, 0.005);glVertex2f(0.245, 0.002);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(0.282, 0.0903);glVertex2f(0.314, 0.086);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(0.35216, 0.17166);glVertex2f(0.48891, 0.16164);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(0.53684, 0.27255);glVertex2f(1.3407, 0.25123);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.24104, -0.05708);glVertex2f(0.846, -0.108);
    glVertex2f(0.24, -0.02);glVertex2f(0.95, -0.086);
    glVertex2f(0.30951, 0.06019);glVertex2f(1.25, 0);
    glVertex2f(0.48098, 0.13604);glVertex2f(1.33924, 0.09047);
    glEnd();

    ///front rail
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.3096, -0.373);
    glVertex2f(0.3104, -0.3301);
    glVertex2f(0.868, -0.309);
    glVertex2f(0.867, -0.416);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.868, -0.309);
    glVertex2f(1.021, -0.307);
    glVertex2f(1.021, -0.416);
    glVertex2f(0.867, -0.416);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.312, -0.344);
    glVertex2f(0.868, -0.341);
    glEnd();
    ///right stair rail
    glColor3f(0.96, 0.94, 0.85);
    glBegin(GL_POLYGON);
    glVertex2f(0.95, -0.416);
    glVertex2f(0.948, -0.327);
    glVertex2f(1.3399, -0.169);
    glVertex2f(1.339, -0.202);
    glVertex2f(0.979, -0.348);
    glVertex2f(0.9796, -0.415);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.903, -0.417);
    glVertex2f(0.904, -0.267);
    glVertex2f(1.341, -0.092);
    glVertex2f(1.34, -0.169);
    glVertex2f(0.948, -0.327);
    glVertex2f(0.95, -0.416);
    glEnd();
    ///right stair wall
    glColor3f(0.471,0.235,0.165);
    glBegin(GL_POLYGON);
    glVertex2f(1.33929, -0.20179);glVertex2f(1.3411, -0.46258);
    glVertex2f(1.11015, -0.48282);
    glVertex2f(1.04299, -0.41048);glVertex2f(0.97841, -0.41183);
    glEnd();

    ///small part of field
    glColor3f(0.63f,0.96f,0.33f);
    glBegin(GL_TRIANGLES);
    glVertex2f(1.11015, -0.48282);glVertex2f(1.3411, -0.46258);
    glVertex2f(1.33953, -0.5134);
    glEnd();

    ///bottom stair rail
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(1.021, -0.416);
    glVertex2f(1.021, -0.307);
    glVertex2f(1.161, -0.372);
    glVertex2f(1.161, -0.474);
    glVertex2f(1.161, -0.483);
    glVertex2f(1.14, -0.486);
    glVertex2f(1.041, -0.475);
    glVertex2f(1.041, -0.414);
    glEnd();
    ///bottom stair
    glColor3f(0.859, 0.859, 0.89);
    glBegin(GL_POLYGON);
    glVertex2f(1.074, -0.439);
    glVertex2f(1.113, -0.439);
    glVertex2f(1.113, -0.458);
    glVertex2f(1.14, -0.46);
    glVertex2f(1.14, -0.486);
    glVertex2f(1.041, -0.475);
    glVertex2f(1.041, -0.414);
    glVertex2f(1.074, -0.415);
    glEnd();
    ///pillars (x difference = 0.0137)
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.036, 0.237);
    glVertex2f(1.036, -0.419);
    glVertex2f(1.0497, -0.419);
    glVertex2f(1.0497, 0.237);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.8, -0.312);
    glVertex2f(0.8, 0.12);
    glVertex2f(0.7863, 0.12);
    glVertex2f(0.7863, -0.312);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.674, -0.327);
    glVertex2f(0.674, 0.0337);
    glVertex2f(0.6603, 0.0337);
    glVertex2f(0.6603, -0.327);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.536, -0.332);
    glVertex2f(0.536, -0.043);
    glVertex2f(0.5223,  -0.043);
    glVertex2f(0.5223, -0.332);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.4, -0.325);
    glVertex2f(0.4, -0.117);
    glVertex2f(0.3863,  -0.117);
    glVertex2f(0.3863, -0.325);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.7, -0.193);
    glVertex2f(0.7, -0.124);
    glVertex2f(0.6863,  -0.124);
    glVertex2f(0.6863, -0.193);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.77595, -0.19);
    glVertex2f(0.77595, -0.13101);
    glVertex2f(0.76225,  -0.13101);
    glVertex2f(0.76225,  -0.19);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.95, -0.153);
    glVertex2f(0.95, -0.086);
    glVertex2f(0.9363, -0.086);
    glVertex2f(0.9363,  -0.154);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.25, -0.09487);
    glVertex2f(1.25, 0);
    glVertex2f(1.2363, 0);
    glVertex2f(1.2363,   -0.09487);
    glEnd();

}
void tree(){
    x=-0.92639 ; y=0.14697; radius =0.01479f;
	glColor3f(0.08f, 0.384f, 0.165f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	x=-0.9258 ; y=0.13218; radius =0.00869f;
	glColor3f(0.08f, 0.384f, 0.165f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

}

void db(){
    ///top
    glColor3f(0.76f, 0.76f, 0.76f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.34458, 0.3311);glVertex2f(-1.30211, 0.33413);
    glVertex2f(-1.26673, 0.33918);glVertex2f(-1.24426, 0.34698);
    glVertex2f(-0.1481, 0.28957);glVertex2f(-0.14458, 0.265);
    glVertex2f(-0.1, 0.264);glVertex2f(-1.244, 0.325);
    glVertex2f(-1.26, 0.32);glVertex2f(-1.30081, 0.31095);
    glVertex2f(-1.34458, 0.30714);
    glEnd();
    ///right part
    glColor3f(0.208f, 0.388f, 0.51f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1481, 0.28957);glVertex2f(-0.1481, 0.08097);
    glVertex2f(-0.13655, 0.08122);glVertex2f(-0.13655, -0.205);
    glVertex2f(-0.0968, -0.2057);glVertex2f(-0.0968, 0.34);
    glVertex2f(-0.16869, 0.34152);glVertex2f(-0.18143, 0.30782);
    glVertex2f(-0.1812, 0.2898);
    glEnd();

    glColor3f(0.208f, 0.388f, 0.51f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.13655, -0.205);
    glVertex2f(-0.13655, -0.3832);
    glVertex2f(0.07423, -0.3832);glVertex2f(0.07423, -0.20791);
    glEnd();
    ///7th floor to ground
    glColor3f(0.76f, 0.76f, 0.76f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.244, 0.1);glVertex2f(-1.19209, 0.12209);
    glVertex2f(-0.13655, 0.08122);glVertex2f(-0.13655, -0.3832);
    glVertex2f(-0.83908, -0.38349); glVertex2f(-0.9, -0.4);
    glVertex2f(-1.198, -0.261);
    glVertex2f(-1.2, 0.1);glVertex2f(-1.24425, 0.08237);
    glEnd();
    ///left windows
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.34392, 0.30714);glVertex2f(-1.30081, 0.31095);
    glVertex2f(-1.26, 0.32);glVertex2f(-1.244, 0.325);
    glVertex2f(-1.24425, 0.08237);glVertex2f(-1.2, 0.1);
    glVertex2f(-1.198, -0.261);glVertex2f(-1.34492, -0.24984);
    glEnd();
    ///top to 7th floor
    glColor3f(0.76f, 0.76f, 0.76f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.244, 0.325);glVertex2f(-0.1481, 0.28957);
    glVertex2f(-0.14458, 0.08097);glVertex2f(-1.19209, 0.12209);
    glVertex2f(-1.244, 0.1);
    glEnd();

    ///windows
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.1372, 0.3194);glVertex2f(-0.1609, 0.2659);
    glVertex2f(-0.15852, 0.21792);glVertex2f(-1.13627, 0.26743);
    glEnd();

    glPushMatrix();
    glTranslatef(0, -0.06357, 0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.1372, 0.3194);glVertex2f(-0.1609, 0.2659);
    glVertex2f(-0.15852, 0.21792);glVertex2f(-1.13627, 0.26743);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.12573, 0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.1372, 0.3194);glVertex2f(-0.1609, 0.2659);
    glVertex2f(-0.15852, 0.21792);glVertex2f(-1.13627, 0.26743);
    glEnd();
    glPopMatrix();

    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();

    glPushMatrix();
    glTranslatef(0, -0.06182,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.125,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.185,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.25,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.31,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.368,0);
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15834, 0.09834);glVertex2f(-0.14749, 0.06234);
    glVertex2f(-0.14723, 0.0235);glVertex2f(-1.15779, 0.05653);
    glEnd();
    glPopMatrix();

    ///right windows
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();

    glPushMatrix();
    glTranslatef(0, -0.05349, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.11012, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.16588, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.22031, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.26697, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.32, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.37, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.42, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.12685, 0.27014);glVertex2f(-0.11154, 0.26964);
    glVertex2f(-0.11178, 0.23606);glVertex2f(-0.12709, 0.23631);
    glEnd();
    glPopMatrix();

    ///7th floor shade
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-1.23988, 0.14471);glVertex2f(-1.2, 0.14);
    glVertex2f(-1.2, 0.14);glVertex2f(-0.14654, 0.10004);
    glVertex2f(-1.23947, 0.13099);glVertex2f(-1.2228, 0.1428);
    glVertex2f(-1.14598, 0.13734);glVertex2f(-1.14585, 0.12069);
    glVertex2f(-0.9968, 0.13203);glVertex2f(-0.99641, 0.11498);
    glVertex2f(-0.84522, 0.12611);glVertex2f(-0.84475, 0.10923);
    glVertex2f(-0.69866, 0.12067);glVertex2f(-0.69837, 0.10362);
    glVertex2f(-0.555, 0.115);glVertex2f(-0.55474, 0.09784);
    glVertex2f(-0.41601, 0.10951);glVertex2f(-0.41601, 0.09263);
    glVertex2f(-0.28058, 0.10449);glVertex2f(-0.28058, 0.08723);
    glVertex2f(-0.14905, 0.09994);glVertex2f(-0.14858, 0.08205);
    glEnd();

    glPushMatrix();
	glTranslatef(0, -0.2, 0);
	glColor3f(1,1,1);
    glBegin(GL_LINES);
    //glVertex2f(-1.23988, 0.14471);glVertex2f(-1.2, 0.14);
    glVertex2f(-1.2, 0.14);glVertex2f(-0.14654, 0.10004);
    glVertex2f(-1.23947, 0.13099);glVertex2f(-1.2228, 0.1428);
    glVertex2f(-1.14598, 0.13734);glVertex2f(-1.14585, 0.12069);
    glVertex2f(-0.9968, 0.13203);glVertex2f(-0.99641, 0.11498);
    glVertex2f(-0.84522, 0.12611);glVertex2f(-0.84475, 0.10923);
    glVertex2f(-0.69866, 0.12067);glVertex2f(-0.69837, 0.10362);
    glVertex2f(-0.555, 0.115);glVertex2f(-0.55474, 0.09784);
    glVertex2f(-0.41601, 0.10951);glVertex2f(-0.41601, 0.09263);
    glVertex2f(-0.28058, 0.10449);glVertex2f(-0.28058, 0.08723);
    glVertex2f(-0.14905, 0.09994);glVertex2f(-0.14858, 0.08205);
    glEnd();
    glPopMatrix();

    ///trees
    ///1
    glPushMatrix();
	glTranslatef(0, -0.007, 0);
	tree();
	glPopMatrix();
	///2
	glPushMatrix();
	glTranslatef(0.159, -0.01, 0);
	tree();
	glPopMatrix();
	///3
	glPushMatrix();
	glTranslatef(0.3, -0.018, 0);
	tree();
	glPopMatrix();
	///4
	glPushMatrix();
	glTranslatef(0.45, -0.023, 0);
	tree();
	glPopMatrix();
	///5
	glPushMatrix();
	glTranslatef(0.572, -0.03, 0);
	tree();
	glPopMatrix();
	///6
	glPushMatrix();
	glTranslatef(0.72, -0.037, 0);
	tree();
	glPopMatrix();
	///7
	glPushMatrix();
	glTranslatef(-0.15, -0.005, 0);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -0.2, 0);
	///trees
    ///1
    glPushMatrix();
	glTranslatef(0, -0.007, 0);
	tree();
	glPopMatrix();
	///2
	glPushMatrix();
	glTranslatef(0.159, -0.01, 0);
	tree();
	glPopMatrix();
	///3
	glPushMatrix();
	glTranslatef(0.3, -0.018, 0);
	tree();
	glPopMatrix();
	///4
	glPushMatrix();
	glTranslatef(0.45, -0.023, 0);
	tree();
	glPopMatrix();
	///5
	glPushMatrix();
	glTranslatef(0.572, -0.03, 0);
	tree();
	glPopMatrix();
	///6
	glPushMatrix();
	glTranslatef(0.72, -0.037, 0);
	tree();
	glPopMatrix();
	///7
	glPushMatrix();
	glTranslatef(-0.15, -0.005, 0);
	tree();
	glPopMatrix();
	glPopMatrix();
}

void drawTranslatedLine(float xTranslation, float startX, float startY, float endX, float endY) {
    glPushMatrix();
    glTranslatef(xTranslation, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(-0.8702, -0.38342);glVertex2f(-0.87017, -0.28884);
    glEnd();
    glPopMatrix();
}
///net
void net(){
    glLineWidth(1.5);
    glColor3f(0.2f,0.6f,0.17f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.8702, -0.38342);glVertex2f(-0.87017, -0.28884);
    glVertex2f(0.154, -0.28879);glVertex2f(0.154, -0.38164);
    glEnd();

    for (int i = 0; i < 57; i++)
    {
        float xTranslation = i * 0.018;
        drawTranslatedLine(xTranslation, -0.8702, -0.38342, -0.87017, -0.28884);
    }
    glLineWidth(0.5);
}


void sky(){
    glColor3f(0.67, 0.82, 0.93);
    glBegin(GL_POLYGON);
    glVertex2f(-1.34493, 0.43746);glVertex2f(1.34132, 0.43749);
    glColor3f(0.88,0.88,0.88);
    glVertex2f(1.33953, -0.5134);glVertex2f(-1.34426, -0.41209);
    glEnd();

}

void goalpost(){
    glLineWidth(1.5);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-0.4648, -0.38029);glVertex2f(-0.46636, -0.31285);
    glVertex2f(-0.46636, -0.31285);glVertex2f(-0.27189, -0.31442);
    glVertex2f(-0.27189, -0.31442);glVertex2f(-0.27216, -0.38311);
    glEnd();
    glLineWidth(0.5);
}

void football(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
           x=-0.21578 ; y= -0.42977; radius =0.018;
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
    glPopMatrix();
}


void c_building() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    //sky

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.88, 0.88);
    glVertex2f(0.96, -0.96);
    glVertex2f(0.96, 0.96);
    glColor3f(0.53, 0.81, 0.92);
    glVertex2f(-0.96, 0.96);
    glVertex2f(-0.96, -0.96);
    glEnd();

    //garden

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.6, 0.17);
    glVertex2f(0.23, -0.94);
    glVertex2f(0.13, -0.58);
    glColor3f(0.54, 0.86, 0.26);
    glVertex2f(0.33, -0.53);
    glVertex2f(0.96, -0.45);
    glColor3f(0.63, 0.96, 0.33);
    glVertex2f(0.96, -0.96);

    glEnd();

    //flower11body
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.41, -0.64);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.4, -0.6);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.38, -0.67);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.35, -0.56);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.3, -0.56);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.27, -0.58);
    glVertex2f (0.33, -0.63);
    glVertex2f (0.25, -0.6);
    glEnd();

    //flower1
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.4, -0.61);
    glVertex2f (0.41, -0.61);
    glVertex2f (0.41, -0.6);
    glVertex2f (0.41, -0.595);
    glVertex2f (0.41, -0.59);
    glVertex2f (0.4, -0.59);
    glVertex2f (0.39, -0.59);
    glVertex2f (0.39, -0.6);
    glVertex2f (0.39, -0.605);

    glVertex2f (0.39, -0.61);
    glEnd();

    //flower2
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.36, -0.57);
    glVertex2f (0.36, -0.55);
    glVertex2f (0.34, -0.55);
    glVertex2f (0.34, -0.57);
    glEnd();

    //flower3
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.28, -0.59);
    glVertex2f (0.28, -0.57);
    glVertex2f (0.26, -0.57);
    glVertex2f (0.26, -0.59);
    glEnd();
    //flower21body
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.64, -0.7);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.63, -0.65);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.6, -0.61);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.56, -0.59);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.51, -0.6);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.48, -0.63);
    glVertex2f (0.55, -0.69);
    glVertex2f (0.47, -0.65);
    glEnd();

    //flower1
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.52, -0.61);
    glVertex2f (0.52, -0.59);
    glVertex2f (0.5, -0.59);
    glVertex2f (0.5, -0.61);
    glEnd();

    //flower\2
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.57, -0.6);
    glVertex2f (0.57, -0.58);
    glVertex2f (0.55, -0.58);
    glVertex2f (0.55, -0.6);
    glEnd();

    //flower3
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.62, -0.63);
    glVertex2f (0.62, -0.66);
    glVertex2f (0.64, -0.66);
    glVertex2f (0.64, -0.63);
    glEnd();

    //flower31body
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);

    glVertex2f (0.79, -0.73);
    glVertex2f (0.76, -0.63);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.72, -0.66);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.72, -0.71);

    glVertex2f (0.79, -0.73);
    glVertex2f (0.9, -0.73);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.89, -0.69);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.85, -0.64);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.8, -0.62);
    glVertex2f (0.79, -0.73);
    glVertex2f (0.75, -0.73);
    glEnd();

    //flower1
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.81, -0.63);
    glVertex2f (0.81, -0.61);
    glVertex2f (0.79, -0.61);
    glVertex2f (0.79, -0.63);
    glEnd();

    //flower2
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.73, -0.66);
    glVertex2f (0.73, -0.64);
    glVertex2f (0.71, -0.65);
    glVertex2f (0.71, -0.67);
    glEnd();

    //flower3
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.87, -0.65);
    glVertex2f (0.87, -0.62);
    glVertex2f (0.85, -0.62);
    glVertex2f (0.85, -0.65);
    glEnd();

    //main c
    glColor3f(0.88, 0.88, 0.88);
    glBegin(GL_POLYGON);
    glVertex2f(0.96, -0.45);
    glVertex2f(0.96, -0.45);

    glVertex2f(0.53, -0.5);
    glVertex2f(0.44, -0.5);
    glVertex2f(0.36, -0.5);
    glColor3f(0.44, 0.43, 0.38);


    glVertex2f(0.36, -0.33);
    glVertex2f(0.28, -0.26);
    glVertex2f(0.23, -0.2);
    glVertex2f(0.18, -0.14);
    glVertex2f(0.16, -0.1);
    glVertex2f(0.12, -0.04);
    glColor3f(0.44, 0.43, 0.38);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.09, 0.05);
    glVertex2f(0.08, 0.11);

    glVertex2f(0.06, 0.19);
    glVertex2f(0.08, 0.30);
    glVertex2f(0.09, 0.38);
    glVertex2f(0.13, 0.46);
    glVertex2f(0.15, 0.53);
    glColor3f(0.44, 0.43, 0.38);
    glVertex2f(0.25, 0.64);
    glVertex2f(0.37, 0.75);
    glVertex2f(0.51, 0.82);
    glVertex2f(0.68, 0.86);
    glVertex2f(0.82, 0.85);
    glVertex2f(0.96, 0.81);
    glColor3f(0.44, 0.43, 0.38);
    glEnd();

    //1st row
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);

    glVertex2f(0.96, -0.12);
    glVertex2f(0.76, -0.12);
    glVertex2f(0.59, -0.13);
    glVertex2f(0.43, -0.14);
    glVertex2f(0.3, -0.17);
    glVertex2f(0.23, -0.2);

    glVertex2f(0.28, -0.26);
    glVertex2f(0.33, -0.24);
    glVertex2f(0.47, -0.22);
    glVertex2f(0.55, -0.21);
    glVertex2f(0.61, -0.2);
    glVertex2f(0.76, -0.2);
    glVertex2f(0.96, -0.2);
    glColor3f(55, 0.67, 84);
    glEnd();

    //2nd row
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(0.96, 0.11);
    glVertex2f(0.76, 0.12);
    glVertex2f(0.54, 0.1);
    glVertex2f(0.35, 0.07);
    glVertex2f(0.21, 0.03);
    glVertex2f(0.14, 0.01);
    glVertex2f(0.1, 0.0);

    glVertex2f(0.16, -0.09);
    glVertex2f(0.17, -0.08);
    glVertex2f(0.23, -0.06);
    glVertex2f(0.27, -0.05);

    glVertex2f(0.55, 0.01);
    glVertex2f(0.76, 0.02);
    glVertex2f(0.96, 0.02);
    glColor3f(55, 0.67, 84);
    glEnd();

    //3rd row
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(0.96, 0.32);
    glVertex2f(0.76, 0.33);
    glVertex2f(0.60, 0.32);
    glVertex2f(0.45, 0.30);
    glVertex2f(0.31, 0.27);
    glVertex2f(0.2, 0.23);
    glVertex2f(0.09, 0.20);
    glVertex2f(0.06, 0.19);
    glVertex2f(0.08, 0.11);
    glVertex2f(0.32, 0.17);
    glVertex2f(0.45, 0.21);
    glVertex2f(0.60, 0.23);
    glVertex2f(0.76, 0.23);
    glVertex2f(0.96, 0.23);
    glColor3f(55, 0.67, 84);
    glEnd();

    //4th row
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);

    glVertex2f(0.96, 0.51);
    glVertex2f(0.84, 0.52);
    glVertex2f(0.67, 0.52);
    glVertex2f(0.5, 0.49);
    glVertex2f(0.37, 0.44);
    glVertex2f(0.24, 0.41);
    glVertex2f(0.14, 0.38);
    glVertex2f(0.08, 0.33);

    glVertex2f(0.07, 0.25);
    glVertex2f(0.16, 0.29);
    glVertex2f(0.25, 0.34);
    glVertex2f(0.35, 0.35);
    glVertex2f(0.5, 0.42);
    glVertex2f(0.68, 0.41);
    glVertex2f(0.96, 0.42);
    glColor3f(55, 0.67, 84);
    glEnd();

    //5th row
    glColor3f(0.3098, 0.537, 0.69);
    glBegin(GL_POLYGON);
    glVertex2f(0.96, 0.67);
    glVertex2f(0.83, 0.68);
    glVertex2f(0.67, 0.67);
    glVertex2f(0.52, 0.65);
    glVertex2f(0.37, 0.61);
    glVertex2f(0.24, 0.56);
    glVertex2f(0.15, 0.51);
    glVertex2f(0.12, 0.44);
    glVertex2f(0.23, 0.49);
    glVertex2f(0.36, 0.54);
    glVertex2f(0.52, 0.58);
    glVertex2f(0.67, 0.59);
    glVertex2f(0.83, 0.60);
    glVertex2f(0.96, 0.59);
    glColor3f(55, 0.67, 84);
    glEnd();

    ///ROAD
    glColor3f(0.69, 0.66, 0.59);

    glBegin(GL_POLYGON);

    glVertex2f(0.96, -0.96);
    glVertex2f(0.71, -0.96);
    glVertex2f(-0.32, -0.96);
    glVertex2f(-0.71, -0.96);
    glVertex2f(-0.96, -0.96);
    glVertex2f(-0.96, -0.79);
    glColor3f(0.58, 0.56, 0.51);
    glVertex2f(-0.72, -0.6);
    glVertex2f(-0.58, -0.45);
    glVertex2f(-0.4, -0.48);
    glVertex2f(-0.43, -0.51);
    glColor3f(0.58, 0.56, 0.51);
    glVertex2f(-0.37, -0.52);

    //  glVertex2f(-0.37, -0.52);
    glVertex2f(-0.29, -0.52);
    glVertex2f(-0.17, -0.51);
    glColor3f(0.58, 0.56, 0.51);
    glVertex2f(-0.15, -0.56);
    glVertex2f(-0.04, -0.56);
    glVertex2f(0.04, -0.56);
    glVertex2f(0.1, -0.57);
    glVertex2f(0.13, -0.59);
    glColor3f(0.58, 0.56, 0.51);
    glVertex2f (0.11, -0.62);
    glVertex2f(0.11, -0.65);
    glVertex2f(0.28, -0.69);
    glVertex2f(0.70, -0.79);
    glVertex2f(0.96, -0.85);
    glEnd();

    //red
    glColor3f(0.64, 0.16, 0.16);
    glBegin(GL_POLYGON);
    glVertex2f(-0.11, -0.35);
    glVertex2f(-0.13, -0.33);
    glVertex2f(0.16, -0.3);
    glVertex2f(0.53, -0.33);
    glVertex2f(0.53, -0.34);
    glVertex2f (0.16, -0.35);
    glVertex2f(0.09, -0.35);
    glVertex2f(-0.05, -0.35);
    glEnd();

    //red-2
    glBegin(GL_POLYGON);
    glVertex2f(-0.13, -0.33);
    glVertex2f(-0.15, -0.32);
    glVertex2f(0.16, -0.28);
    glVertex2f(0.54, -0.31);
    glVertex2f(0.54, -0.33);
    glVertex2f (0.16, -0.3);
    glEnd();

    //leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.1, -0.56);
    glVertex2f(-0.10, -0.35);
    glEnd();
    //leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.05, -0.56);
    glVertex2f(-0.05, -0.35);
    glEnd();
    //leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.1, -0.57);
    glVertex2f(0.10, -0.35);
    glEnd();
    //leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.17, -0.56);
    glVertex2f(0.17, -0.35);
    glEnd();
    //leg5
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.22, -0.56);
    glVertex2f(0.22, -0.35);
    glEnd();
    //leg6
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.34, -0.53);
    glVertex2f(0.34, -0.345);
    glEnd();
    //leg7
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.44, -0.5);
    glVertex2f(0.44, -0.345);
    glEnd();
    //leg8
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.1, -0.56);
    glVertex2f(-0.10, -0.35);
    glEnd();

    //Annex-1
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(-0.96, -0.61);
    glVertex2f(-0.59, -0.49);
    glVertex2f(-0.59, -0.45);
    glVertex2f(-0.96, -0.33);
    glEnd();

    //Annex-1 p-2
    glColor3f(0.52, 0.34, 0.27);
    glBegin(GL_POLYGON);

    glVertex2f(-0.96, -0.61);
    glVertex2f(-0.96, -0.74);
    glVertex2f(-0.58, -0.5);
    glVertex2f(-0.59, -0.47);
    glEnd();

    //Annex-1 p-3
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(-0.96, -0.74);
    glVertex2f(-0.96, -0.79);
    glVertex2f(-0.57, -0.5);
    glVertex2f(-0.58, -0.5);
    glEnd();

    //Annex-1 terrace
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.88, -0.35);
    glVertex2f(-0.7, -0.37);
    glVertex2f(-0.9, -0.27);
    // glColor3f(0.83, 0.73, 0.67);
    glVertex2f(-0.96, -0.27);
    glVertex2f(-0.96, -0.33);
    //glColor3f(0.98, 0.95, 0.95);
    glEnd();

    //Anex-1 terrace
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.89, -0.39);
    glVertex2f(-0.71, -0.42);
    glVertex2f(-0.57, -0.45);
    glColor3f(99, 99, 0.82);
    glVertex2f(-0.57, -0.44);
    glVertex2f(-0.71, -0.4);
    glVertex2f(-0.89, -0.38);
    //glColor3f(0.98, 0.95, 0.95);
    glEnd();

    //anex1 door1
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.84, -0.56);
    glVertex2f(-0.84, -0.42);
    glVertex2f(-0.88, -0.42);
    glVertex2f(-0.88, -0.57);
    glEnd();

    //anex1 door2
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.8, -0.54);
    glVertex2f(-0.77, -0.53);
    glVertex2f(-0.77, -0.43);
    glVertex2f(-0.8, -0.43);
    glEnd();

    //anex1 door3
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.71, -0.505);
    glVertex2f(-0.68, -0.495);
    glVertex2f(-0.68, -0.44);
    glVertex2f(-0.71, -0.44);
    glEnd();
    //anex1-leg1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.9, -0.7);
    glVertex2f(-0.90, -0.31);
    glEnd();
    //anex1-leg2

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.81, -0.65);
    glVertex2f(-0.81, -0.34);
    glEnd();
    //anex1-leg3

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.75, -0.61);
    glVertex2f(-0.75, -0.36);
    glEnd();
    //anex1-leg4

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.72, -0.59);
    glVertex2f(-0.72, -0.37);
    glEnd();
    //anex1-leg5

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.67, -0.56);
    glVertex2f(-0.67, -0.42);
    glEnd();
    //annex1-leg6

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.65, -0.55);
    glVertex2f(-0.65, -0.43);
    glEnd();
    //annex1-leg7

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.63, -0.53);
    glVertex2f(-0.63, -0.43);
    glEnd();
    //annex1-leg8

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.61, -0.52);
    glVertex2f(-0.61, -0.44);
    glEnd();

    //annex1-leg9


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.59, -0.505);
    glVertex2f(-0.59, -0.45);
    glEnd();
    //annex1-leg10


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.58, -0.5);
    glVertex2f(-0.58, -0.45);
    glEnd();

    //Annex-2
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(-0.67, -0.28);
    glVertex2f(-0.67, -0.41);
    glColor3f(0.52, 0.34, 0.27);
    glVertex2f(-0.56, -0.435);
    glVertex2f(-0.58, -0.435);
    glVertex2f(-0.58, -0.49);
    glVertex2f(-0.44, -0.49);
    //glVertex2f(-0.41, -0.49);
    glVertex2f(-0.36, -0.49);
    glVertex2f(-0.36, -0.32);
    glVertex2f(-0.38, -0.3);
    glVertex2f(-0.38, -0.28);
    glEnd();

    //annex-2 top head
    glColor3f(0.99, 0.99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.67, -0.28);
    glVertex2f(-0.67, -0.29);
    glVertex2f(-0.38, -0.29);
    glVertex2f(-0.38, -0.28);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.35, -0.35);
    glVertex2f(-0.68, -0.35);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.67, -0.41);
    glVertex2f(-0.31, -0.41);
    glEnd();

    //Anex-2-font1
    glColor3f(0.35,0.38,0.38);
    glBegin(GL_POLYGON);
    glVertex2f(-0.15, -0.50);
    glVertex2f(-0.15, -0.32);
    glVertex2f(-0.36, -0.32);
    glVertex2f(-0.36, -0.50);
    glEnd();

    //Anex-2-font2
    glColor3f(0.64,0.72,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(-0.15, -0.32);
    glVertex2f(-0.13, -0.3);
    glVertex2f(-0.25, -0.25);
    glVertex2f(-0.38, -0.30);
    glVertex2f(-0.36, -0.32);
    glEnd();

    //road mark 1
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04, -0.95);
    glVertex2f(-0.0, -0.95);
    glVertex2f(-0.1, -0.84);
    glVertex2f(-0.13, -0.85);
    glEnd();

    //road mark 2
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.18, -0.78);
    glVertex2f(-0.15, -0.77);
    glVertex2f(-0.23, -0.68);
    glVertex2f(-0.26, -0.69);
    glEnd();

    //road mark 3
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.32, -0.62);
    glVertex2f(-0.29, -0.61);
    glVertex2f(-0.35, -0.55);
    glVertex2f(-0.38, -0.55);
    glEnd();

    //Road border p1
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(0.96, -0.86);
    glVertex2f(0.96, -0.81);
    glVertex2f(0.29, -0.67);
    glVertex2f(0.29, -0.71);
    glEnd();

    //Road border p2
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(0.33, -0.68);
    glVertex2f(0.29, -0.71);
    glVertex2f(0.12, -0.58);
    glVertex2f(0.15, -0.57);
    glEnd();

    //Road border p3
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(-0.36, -0.52);
    glVertex2f(-0.36, -0.5);
    glVertex2f(-0.15, -0.5);
    glVertex2f(-0.15, -0.52);
    glEnd();

    //annex2-2nd line
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.36, -0.42);
    glVertex2f(-0.15, -0.42);
    glEnd();

    //annex2-1st line
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.36, -0.36);
    glVertex2f(-0.15, -0.36);
    glEnd();

    //annex2- lines
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.34, -0.32);
    glVertex2f(-0.34, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.32, -0.32);
    glVertex2f(-0.32, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.30, -0.32);
    glVertex2f(-0.30, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.28, -0.32);
    glVertex2f(-0.28, -0.36);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.26, -0.32);
    glVertex2f(-0.26, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.24, -0.32);
    glVertex2f(-0.24, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.22, -0.32);
    glVertex2f(-0.22, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.2, -0.32);
    glVertex2f(-0.2, -0.36);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.18, -0.32);
    glVertex2f(-0.18, -0.36);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.34, -0.36);
    glVertex2f(-0.34, -0.42);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.32, -0.36);
    glVertex2f(-0.32, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.3, -0.36);
    glVertex2f(-0.3, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.28, -0.36);
    glVertex2f(-0.28, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.26, -0.36);
    glVertex2f(-0.26, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.24, -0.36);
    glVertex2f(-0.24, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.22, -0.36);
    glVertex2f(-0.22, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.2, -0.36);
    glVertex2f(-0.2, -0.42);
    glEnd();

    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.18, -0.36);
    glVertex2f(-0.18, -0.42);
    glEnd();

    //flag1
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.29, -0.43);
    glVertex2f(-0.26, -0.43);
    glVertex2f(-0.26, -0.41);
    glVertex2f(-0.29, -0.41);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.29, -0.43);
    glVertex2f(-0.29, -0.5);
    glEnd();

    //flag2
    glColor3f(0.4, 0.57, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.24, -0.42);
    glVertex2f(-0.24, -0.4);
    glVertex2f(-0.27, -0.4);
    glVertex2f(-0.27, -0.42);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.27, -0.42);
    glVertex2f(-0.27, -0.5);
    glEnd();

    //flag3
    glColor3f(0, 0, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(-0.25, -0.41);
    glVertex2f(-0.25, -0.43);
    glVertex2f(-0.22, -0.43);
    glVertex2f(-0.22, -0.41);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.25, -0.43);
    glVertex2f(-0.25, -0.5);
    glEnd();

    //flag4
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.23, -0.42);
    glVertex2f(-0.2, -0.42);
    glVertex2f(-0.2, -0.4);
    glVertex2f(-0.23, -0.4);
    glEnd();
    glColor3f(0.85,0.82,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.23, -0.42);
    glVertex2f(-0.23, -0.5);
    glEnd();

    //annex2 window1
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.58, -0.34);
    glVertex2f(-0.54, -0.34);

    glVertex2f(-0.54, -0.31);
    glVertex2f(-0.58, -0.31);
    glEnd();

    //annex2 window2
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.65, -0.34);
    glVertex2f(-0.61, -0.34);

    glVertex2f(-0.61, -0.31);
    glVertex2f(-0.65, -0.31);
    glEnd();

    //annex2 window3
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.51, -0.34);
    glVertex2f(-0.47, -0.34);

    glVertex2f(-0.47, -0.31);
    glVertex2f(-0.51, -0.31);
    glEnd();

    //annex2 window4
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(-0.43, -0.34);
    glVertex2f(-0.39, -0.34);

    glVertex2f(-0.39, -0.31);
    glVertex2f(-0.43, -0.31);
    glEnd();

    //road of c building
    glColor3f(0.69, 0.66, 0.59);
    glBegin(GL_POLYGON);
    glVertex2f(0.1, -0.6);
    glVertex2f(0.53, -0.5);
    glColor3f(0.58, 0.56, 0.51);
    glVertex2f(0.44, -0.5);
    glVertex2f(-0.11, -0.56);
    glEnd();

    //door of c building
    glColor3f(99, 99, 0.82);
    glBegin(GL_POLYGON);
    glVertex2f(0.38, -0.5);
    glVertex2f(0.42, -0.5);
    glVertex2f(0.42, -0.37);
    glVertex2f(0.38, -0.38);
    glEnd();

    //annex2leg1
    glColor3f(99, 99, 0.82);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.56, -0.41);
    glVertex2f(-0.56, -0.49);
    glEnd();

    //annex2leg2
    glColor3f(99, 99, 0.82);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.5, -0.41);
    glVertex2f(-0.5, -0.49);
    glEnd();

    //annex2leg2
    glColor3f(99, 99, 0.82);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.44, -0.41);
    glVertex2f(-0.44, -0.49);
    glEnd();

    //annex2leg3
    glColor3f(99, 99, 0.82);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.38, -0.41);
    glVertex2f(-0.38, -0.49);
    glEnd();
    //glFlush();

    //car
    glColor3f(0.75, 0.16,0.16);
    glBegin(GL_POLYGON);
    glVertex2f(-0.59, -0.78);
    glVertex2f(-0.59, -0.71);
    glVertex2f(-0.56, -0.66);
    glVertex2f(-0.45, -0.66);
    glVertex2f(-0.42, -0.7);
    glVertex2f(-0.42, -0.78);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.59, -0.8);
    glVertex2f(-0.57, -0.8);
    glVertex2f(-0.57, -0.78);
    glVertex2f(-0.59, -0.78);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.44, -0.8);
    glVertex2f(-0.42, -0.8);
    glVertex2f(-0.42, -0.77);
    glVertex2f(-0.44, -0.77);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.57, -0.7);
    glVertex2f(-0.44, -0.7);
    glVertex2f(-0.46, -0.67);
    glVertex2f(-0.545, -0.67);
    glEnd();

    //number plate
    glColor3f(1, 1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.53, -0.75);
    glVertex2f(-0.48, -0.75);
    glVertex2f(-0.48, -0.73);
    glVertex2f(-0.53, -0.73);
    glEnd();

    glPushMatrix();
    glTranslatef(0.55, 0, 0);
    //car

    glColor3f(0.75, 0.16,0.16);
    glBegin(GL_POLYGON);
    glVertex2f(-0.59, -0.78);
    glVertex2f(-0.59, -0.71);
    glVertex2f(-0.56, -0.66);
    glVertex2f(-0.45, -0.66);
    glVertex2f(-0.42, -0.7);
    glVertex2f(-0.42, -0.78);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.59, -0.8);
    glVertex2f(-0.57, -0.8);
    glVertex2f(-0.57, -0.78);
    glVertex2f(-0.59, -0.78);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.44, -0.8);
    glVertex2f(-0.42, -0.8);
    glVertex2f(-0.42, -0.77);
    glVertex2f(-0.44, -0.77);
    glEnd();

    glColor3f(0, 0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.57, -0.7);
    glVertex2f(-0.44, -0.7);
    glVertex2f(-0.46, -0.67);
    glVertex2f(-0.545, -0.67);
    glEnd();

    //number plate
    glColor3f(1, 1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.53, -0.75);
    glVertex2f(-0.48, -0.75);
    glVertex2f(-0.48, -0.73);
    glVertex2f(-0.53, -0.73);
    glEnd();
    glPopMatrix();
    glFlush();

}


void cB(){
    glPushMatrix();
    glTranslatef(0, -0.4, 0);
glColor3f(0.66, 0.66, 0.66);
    glBegin(GL_POLYGON);
    glVertex2f(-0.10, 0.18);
    glVertex2f(-0.13, 0.23);
    glVertex2f(-0.24, 0.35);
    glVertex2f(-0.30, 0.48);
    glVertex2f(-0.29, 0.63);
    glVertex2f(-0.29, 0.66);
    glVertex2f(-0.21, 0.83);
    glVertex2f(-0.09, 0.92);
    glVertex2f(0.04, 0.96);
    glVertex2f(0.10, 0.96);
    glVertex2f(0.16, 0.96);
    glVertex2f(0.28, 0.92);

    glVertex2f(0.39, 0.83);
    glVertex2f(0.49, 0.69);
    glVertex2f(0.50, 0.66);
    glVertex2f(0.50, 0.54);
    glVertex2f(0.48, 0.44);
    glVertex2f(0.43, 0.34);
    glVertex2f(0.36, 0.25);
    glVertex2f(0.33, 0.19);
    glColor3f(0.88,0.88,0.88);
    //glVertex2f(0.30, 0.10);
    //glVertex2f(0.37, 0.75);


    glEnd();


   // glLoadIdentity();

    //1st row
     glColor3f(0, 0.73, 1);
    glBegin(GL_POLYGON);

     glVertex2f(0.49, 0.69);
    glVertex2f(0.40, 0.73);
    glVertex2f(0.20, 0.75);
    glVertex2f(0.07, 0.75);
    glVertex2f(-0.04, 0.74);
    glVertex2f(-0.16, 0.72);

    glVertex2f(-0.27, 0.69);
    glVertex2f(-0.29, 0.66);
    glVertex2f(-0.29, 0.63);
    glVertex2f(-0.24, 0.66);
    glVertex2f(-0.16, 0.68);
    glVertex2f(-0.06, 0.71);
    glVertex2f(0.06, 0.73);

    glVertex2f(0.20, 0.71);
    glVertex2f(0.33, 0.69);
    glVertex2f(0.43, 0.68);
    glVertex2f(0.50, 0.66);
    //glVertex2f(-0.16, 0.68);
    //glVertex2f(-0.06, 0.70);
    //glVertex2f(0.06, 0.71);


  glEnd();

  //2nd row
    glColor3f(0, 0.73, 1);
    glBegin(GL_POLYGON);
     glVertex2f(-0.29, 0.58);
    glVertex2f(-0.20, 0.62);
    glVertex2f(0.0, 0.63);
    glVertex2f(0.20, 0.64);
    glVertex2f(0.40, 0.62);
    glVertex2f(0.50, 0.61);
    glVertex2f(0.50, 0.57);
    glVertex2f(0.40, 0.60);
    glVertex2f(0.20, 0.60);
    glVertex2f(0.0, 0.60);
    glVertex2f(-0.19, 0.58);
    glVertex2f(-0.30, 0.55);
    //glVertex2f(0.06, 0.71);
    glEnd();

    //3nd row
    glColor3f(0, 0.73, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.30, 0.49);
    glVertex2f(-0.20, 0.52);
    glVertex2f(0.0, 0.54);
    glVertex2f(0.20, 0.55);
    glVertex2f(0.40, 0.54);
    glVertex2f(0.50, 0.52);
    glVertex2f(0.49, 0.48);
    glVertex2f(0.40, 0.50);
    glVertex2f(0.20, 0.50);
    glVertex2f(0.0, 0.50);
    glVertex2f(-0.19, 0.47);
    glVertex2f(-0.29, 0.45);
    glEnd();

    //4th row
    glColor3f(0, 0.73, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.26, 0.40);
    glVertex2f(-0.18, 0.42);
    glVertex2f(0.0, 0.44);
    glVertex2f(0.20, 0.44);
    glVertex2f(0.39, 0.44);
    glVertex2f(0.47, 0.42);
    glVertex2f(0.45, 0.38);
    glVertex2f(0.39, 0.39);
    glVertex2f(0.20, 0.39);
    glVertex2f(0.0, 0.39);
    glVertex2f(-0.16, 0.37);
    glVertex2f(-0.24, 0.35);
    glEnd();


    //5th row
    glColor3f(0, 0.73, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.19, 0.30);
    glVertex2f(-0.15, 0.31);
    glVertex2f(0.0, 0.32);
    glVertex2f(0.20, 0.32);
    glVertex2f(0.34, 0.32);
    glVertex2f(0.41, 0.31);
    glVertex2f(0.38, 0.28);
    glVertex2f(0.33, 0.29);
    glVertex2f(0.20, 0.29);
    glVertex2f(0.0, 0.28);
    glVertex2f(-0.13, 0.27);
    glVertex2f(-0.17, 0.27);
    glEnd();
    glPopMatrix();
    ///road
    glPushMatrix();
    glTranslatef(0, -0.4, 0);
     glColor3f(0.69,0.66,0.59);
    glBegin(GL_POLYGON);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.19,0.18);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(0.33,0.19);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(0.34,0.060);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.19, 0.060);
    glEnd();



    ///wall
    glColor3f(0.66,0.66,0.66);
    glBegin(GL_POLYGON);

     glVertex2f(-0.15, 0.19);
    glVertex2f(-0.15, 0.17);
    glVertex2f(-0.03, 0.15);
    glVertex2f(0.09, 0.15);
    glVertex2f(0.21, 0.15);
    glVertex2f(0.32, 0.16);

    glVertex2f(0.41, 0.19);
    glVertex2f(0.40, 0.21);
    glVertex2f(0.32, 0.19);
    glVertex2f(0.20, 0.19);
    glVertex2f(0.09, 0.17);
    glVertex2f(-0.02, 0.18);
    glEnd();
    glPopMatrix();


    //road

    glColor3f(0.69,0.66,0.59);
    glBegin(GL_POLYGON);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.34,-0.14);
    glVertex2f(-0.19,-0.16);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.12,-0.34);
    glVertex2f(-0.05, -0.41);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.10,-0.41);
    glVertex2f(-0.76,-1);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-1,-1);
    glVertex2f(-0.20, -0.99);
    glEnd();

     glColor3f(0.96,0.75,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.40,-0.42);
    glVertex2f(-0.35,-0.36);
    glVertex2f(-0.32,-0.38);
    glVertex2f(-0.37, -0.44);

    glEnd();

    glPushMatrix();
    glTranslatef(0.17, 0.10, 0);
    glColor3f(0.96,0.75,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.40,-0.42);
    glVertex2f(-0.35,-0.36);
    glVertex2f(-0.32,-0.38);
    glVertex2f(-0.37, -0.44);

    glEnd();
    glPopMatrix();


   //road
    glColor3f(0.69,0.66,0.59);
    glBegin(GL_POLYGON);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.50,-0.05);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.40,-0.05);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.19,-0.16);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(-0.34, -0.14);

    glEnd();




   // human1

    //head
    glPushMatrix();
    glTranslatef(-0.02, 0.18, 0);
    glColor3f(0.88,0.88,0.88);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2662, -0.3169);
    glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2361, -0.3176);
    glVertex2f(-0.2368, -0.3241);
    glVertex2f(-0.2392, -0.3286);
    glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
    glVertex2f(-0.2636, -0.3280);
    glVertex2f(-0.2658, -0.3233);
    glEnd();

    //hair
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2712, -0.3148);
    glVertex2f(-0.2675, -0.3151);
     glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2336, -0.3101);
    glVertex2f(-0.2465, -0.3015);
    glVertex2f(-0.2611, -0.3026);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();

    //eye1,nose,lips
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2609, -0.3110);
    glVertex2f (-0.2558, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2468, -0.3110);
    glVertex2f (-0.2422, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2536, -0.3174);
    glVertex2f (-0.2535, -0.3194);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2535, -0.3194);
    glVertex2f (-0.2512, -0.3193);
    glEnd();
     glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2568, -0.3236);
    glVertex2f (-0.2456, -0.3236);
    glEnd();

    //neck
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
     glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();
    //body
    glColor3f(0.72,0.39,0.28);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
     glVertex2f(-0.2173, -0.3460);
    glVertex2f(-0.2060, -0.3705);
    glVertex2f(-0.2148, -0.3988);
    glVertex2f(-0.2209, -0.3986);
    glVertex2f(-0.2130, -0.3705);
    glVertex2f(-0.2248, -0.3536);
    glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
    glVertex2f(-0.2718, -0.3548);
    glVertex2f(-0.2823, -0.3730);
    glVertex2f(-0.2723, -0.3989);
    glVertex2f(-0.2778, -0.3996);
    glVertex2f(-0.2903, -0.3733);
    glVertex2f(-0.28, -0.35);

    glEnd();

    //leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
     glVertex2f(-0.2628, -0.4203);
    glVertex2f(-0.2707, -0.4201);
    glVertex2f(-0.2710, -0.4256);
    glVertex2f(-0.2573, -0.4263);
    glVertex2f(-0.2572, -0.4202);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.24, -0.42);
    glVertex2f(-0.2378, -0.4267);
    glVertex2f(-0.2249, -0.4274);
    glVertex2f(-0.2256, -0.4213);
    glVertex2f(-0.2339, -0.4214);
    glEnd();
    glPopMatrix();

    // human2

    //head
    //glPushMatrix();
   //glTranslatef(0, -0.5, 0);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2662, -0.3169);
    glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2361, -0.3176);
    glVertex2f(-0.2368, -0.3241);
    glVertex2f(-0.2392, -0.3286);
    glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
    glVertex2f(-0.2636, -0.3280);
    glVertex2f(-0.2658, -0.3233);
    glEnd();

    //hair
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2712, -0.3148);
    glVertex2f(-0.2675, -0.3151);
     glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2336, -0.3101);
    glVertex2f(-0.2465, -0.3015);
    glVertex2f(-0.2611, -0.3026);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();

    //eye1,nose,lips
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2609, -0.3110);
    glVertex2f (-0.2558, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2468, -0.3110);
    glVertex2f (-0.2422, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2536, -0.3174);
    glVertex2f (-0.2535, -0.3194);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2535, -0.3194);
    glVertex2f (-0.2512, -0.3193);
    glEnd();
     glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2568, -0.3236);
    glVertex2f (-0.2456, -0.3236);
    glEnd();

    //neck
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
     glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();
    //body
    glColor3f(0.72,0.39,0.28);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
     glVertex2f(-0.2173, -0.3460);
    glVertex2f(-0.2060, -0.3705);
    glVertex2f(-0.2148, -0.3988);
    glVertex2f(-0.2209, -0.3986);
    glVertex2f(-0.2130, -0.3705);
    glVertex2f(-0.2248, -0.3536);
    glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
    glVertex2f(-0.2718, -0.3548);
    glVertex2f(-0.2823, -0.3730);
    glVertex2f(-0.2723, -0.3989);
    glVertex2f(-0.2778, -0.3996);
    glVertex2f(-0.2903, -0.3733);
    glVertex2f(-0.28, -0.35);

    glEnd();

    //leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
     glVertex2f(-0.2628, -0.4203);
    glVertex2f(-0.2707, -0.4201);
    glVertex2f(-0.2710, -0.4256);
    glVertex2f(-0.2573, -0.4263);
    glVertex2f(-0.2572, -0.4202);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.24, -0.42);
    glVertex2f(-0.2378, -0.4267);
    glVertex2f(-0.2249, -0.4274);
    glVertex2f(-0.2256, -0.4213);
    glVertex2f(-0.2339, -0.4214);
    glEnd();
   // glPopMatrix();

    // human3

    //head
    glPushMatrix();
   glTranslatef(-0.22, -0.02, 0);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2662, -0.3169);
    glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2361, -0.3176);
    glVertex2f(-0.2368, -0.3241);
    glVertex2f(-0.2392, -0.3286);
    glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
    glVertex2f(-0.2636, -0.3280);
    glVertex2f(-0.2658, -0.3233);
    glEnd();

    //hair
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

     glVertex2f(-0.2712, -0.3148);
    glVertex2f(-0.2675, -0.3151);
     glVertex2f(-0.2640, -0.3106);
    glVertex2f(-0.2590, -0.3063);
    glVertex2f(-0.2540, -0.3043);
    glVertex2f(-0.2465, -0.3048);
    glVertex2f(-0.2409, -0.3079);

    glVertex2f(-0.2378, -0.3122);
    glVertex2f(-0.2336, -0.3101);
    glVertex2f(-0.2465, -0.3015);
    glVertex2f(-0.2611, -0.3026);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();

    //eye1,nose,lips
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2609, -0.3110);
    glVertex2f (-0.2558, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2468, -0.3110);
    glVertex2f (-0.2422, -0.3110);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2536, -0.3174);
    glVertex2f (-0.2535, -0.3194);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2535, -0.3194);
    glVertex2f (-0.2512, -0.3193);
    glEnd();
     glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2568, -0.3236);
    glVertex2f (-0.2456, -0.3236);
    glEnd();

    //neck
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2444, -0.3328);
    glVertex2f(-0.2508, -0.3344);
    glVertex2f(-0.2586, -0.3325);
     glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
    //glVertex2f(-0.25, -0.30);

    //glVertex2f(-0.26, -0.30);
    //glVertex2f(-0.27, -0.31);

    glEnd();
    //body
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2668, -0.3424);
    glVertex2f(-0.2550, -0.3472);
    glVertex2f(-0.2450, -0.3477);
    glVertex2f(-0.2362, -0.3457);
    glVertex2f(-0.2318, -0.3390);
     glVertex2f(-0.2173, -0.3460);
    glVertex2f(-0.2060, -0.3705);
    glVertex2f(-0.2148, -0.3988);
    glVertex2f(-0.2209, -0.3986);
    glVertex2f(-0.2130, -0.3705);
    glVertex2f(-0.2248, -0.3536);
    glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
    glVertex2f(-0.2718, -0.3548);
    glVertex2f(-0.2823, -0.3730);
    glVertex2f(-0.2723, -0.3989);
    glVertex2f(-0.2778, -0.3996);
    glVertex2f(-0.2903, -0.3733);
    glVertex2f(-0.28, -0.35);

    glEnd();

    //leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
      glVertex2f(-0.2335, -0.3783);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.2631, -0.3776);
     glVertex2f(-0.2628, -0.4203);
    glVertex2f(-0.2707, -0.4201);
    glVertex2f(-0.2710, -0.4256);
    glVertex2f(-0.2573, -0.4263);
    glVertex2f(-0.2572, -0.4202);
    glVertex2f(-0.2495, -0.38);
    glVertex2f(-0.24, -0.42);
    glVertex2f(-0.2378, -0.4267);
    glVertex2f(-0.2249, -0.4274);
    glVertex2f(-0.2256, -0.4213);
    glVertex2f(-0.2339, -0.4214);
    glEnd();
    glPopMatrix();



 ///Tiles
glBegin(GL_LINE_LOOP);

{
    glColor3f(0,0,0);

    glVertex2f(-0.69138, -1);
    glVertex2f(-0.54,-1);
    glVertex2f(-0.00713, -0.41868);
    glVertex2f(-0.01092, -0.34651);
    glVertex2f(-0.06,-0.34);
    glVertex2f(-0.69138, -1);
     glEnd();

}

}

void tree1(){
    glBegin(GL_POLYGON);
{
    glColor3f(0.34, 0.82, 0.24);

    glVertex2f(-0.31889, -0.5841);
    glVertex2f(-0.35324, -0.58586);
    glVertex2f(-0.39975, -0.61334);
    glVertex2f(-0.38005, -0.56693);
    glVertex2f(-0.36139, -0.54978);
    glVertex2f(-0.42031, -0.55738);
    glVertex2f(-0.47258, -0.57639);
    glVertex2f(-0.50964, -0.59444);
    glVertex2f(-0.48113, -0.55738);
    glVertex2f(-0.43742, -0.53552);
    glVertex2f(-0.3785, -0.52982);
    glVertex2f(-0.36215, -0.53113);
    glVertex2f(-0.37279, -0.51081);
    glVertex2f(-0.42696, -0.49846);
    glVertex2f(-0.45928, -0.49465);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.54486, -0.50189);
    glVertex2f(-0.51179, -0.48385);
    glVertex2f(-0.45466, -0.47332);
    glVertex2f(-0.37648, -0.48986);
    glVertex2f(-0.33889, -0.5094);
    glVertex2f(-0.38303, -0.44313);
    glVertex2f(-0.42928, -0.41257);
    glVertex2f(-0.4524, -0.38118);
    glVertex2f(-0.41651, -0.38822);
    glVertex2f(-0.41651, -0.38822);
    glVertex2f(-0.36614, -0.42433);
    glVertex2f(-0.33478, -0.46044);
    glVertex2f(-0.27718, -0.54294);
    glVertex2f(-0.31889, -0.5841);


    glEnd();
}

glBegin(GL_LINE_LOOP);
{
    glColor3f(0,0,0);

    glVertex2f(-0.31889, -0.5841);
    glVertex2f(-0.35324, -0.58586);
    glVertex2f(-0.39975, -0.61334);
    glVertex2f(-0.38005, -0.56693);
    glVertex2f(-0.36139, -0.54978);
    glVertex2f(-0.42031, -0.55738);
    glVertex2f(-0.47258, -0.57639);
    glVertex2f(-0.50964, -0.59444);
    glVertex2f(-0.48113, -0.55738);
    glVertex2f(-0.43742, -0.53552);
    glVertex2f(-0.3785, -0.52982);
    glVertex2f(-0.36215, -0.53113);
    glVertex2f(-0.37279, -0.51081);
    glVertex2f(-0.42696, -0.49846);
    glVertex2f(-0.45928, -0.49465);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.54486, -0.50189);
    glVertex2f(-0.51179, -0.48385);
    glVertex2f(-0.45466, -0.47332);
    glVertex2f(-0.37648, -0.48986);
    glVertex2f(-0.33889, -0.5094);
    glVertex2f(-0.38303, -0.44313);
    glVertex2f(-0.42928, -0.41257);
    glVertex2f(-0.4524, -0.38118);
    glVertex2f(-0.41651, -0.38822);
    glVertex2f(-0.41651, -0.38822);
    glVertex2f(-0.36614, -0.42433);
    glVertex2f(-0.33478, -0.46044);
    glVertex2f(-0.27718, -0.54294);
    glVertex2f(-0.31889, -0.5841);


    glEnd();
}
}

void tree2(){
    glBegin(GL_POLYGON);
{
    glColor3f(0.34, 0.82, 0.24);

    glVertex2f(-0.25057, -0.52167);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.31838, -0.46632);
    glVertex2f(-0.29451, -0.46632);
    glVertex2f(-0.30143, -0.4466);
    glVertex2f(-0.29901, -0.42688);
    glVertex2f(-0.27964, -0.42895);
    glVertex2f(-0.2696, -0.45352);
    glVertex2f(-0.27375, -0.41857);
    glVertex2f(-0.27133, -0.40128);
    glVertex2f(-0.2558, -0.40871);
    glVertex2f(-0.25112, -0.42325);
    glVertex2f(-0.24988, -0.44494);
    glVertex2f(-0.25112, -0.42325);
    glVertex2f(-0.22721, -0.41124);
    glVertex2f(-0.22642, -0.42973);
    glVertex2f(-0.23879, -0.45439);
    glVertex2f(-0.22615, -0.44002);
    glVertex2f(-0.2082, -0.44134);
    glVertex2f(-0.21285, -0.4557);
    glVertex2f(-0.23682, -0.47697);
    glVertex2f(-0.22179, -0.47081);
    glVertex2f(-0.20257, -0.46736);
    glVertex2f(-0.22186, -0.49296);
    glVertex2f(-0.25057, -0.52167);

    glEnd();
}
glBegin(GL_LINE_LOOP);
{
    glColor3f(0,0,0);

    glVertex2f(-0.25057, -0.52167);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.31838, -0.46632);
    glVertex2f(-0.29451, -0.46632);
    glVertex2f(-0.30143, -0.4466);
    glVertex2f(-0.29901, -0.42688);
    glVertex2f(-0.27964, -0.42895);
    glVertex2f(-0.2696, -0.45352);
    glVertex2f(-0.27375, -0.41857);
    glVertex2f(-0.27133, -0.40128);
    glVertex2f(-0.2558, -0.40871);
    glVertex2f(-0.25112, -0.42325);
    glVertex2f(-0.24988, -0.44494);
    glVertex2f(-0.25112, -0.42325);
    glVertex2f(-0.22721, -0.41124);
    glVertex2f(-0.22642, -0.42973);
    glVertex2f(-0.23879, -0.45439);
    glVertex2f(-0.22615, -0.44002);
    glVertex2f(-0.2082, -0.44134);
    glVertex2f(-0.21285, -0.4557);
    glVertex2f(-0.23682, -0.47697);
    glVertex2f(-0.22179, -0.47081);
    glVertex2f(-0.20257, -0.46736);
    glVertex2f(-0.22186, -0.49296);
    glVertex2f(-0.25057, -0.52167);

    glEnd();
}
}

void tree3(){
    glBegin(GL_POLYGON);
{
    glColor3f(0.34, 0.82, 0.24);

    glVertex2f(-0.19238, -0.4611);
    glVertex2f(-0.19626, -0.44488);
    glVertex2f(-0.18885, -0.43394);
    glVertex2f(-0.18004, -0.43571);
    glVertex2f(-0.18392, -0.41525);
    glVertex2f(-0.17651, -0.40185);
    glVertex2f(-0.16169, -0.40255);
    glVertex2f(-0.15535, -0.40749);
    glVertex2f(-0.15819, -0.39029);
    glVertex2f(-0.15664, -0.37324);
    glVertex2f(-0.15199, -0.36239);
    glVertex2f(-0.13805, -0.35154);
    glVertex2f(-0.14289, -0.36387);
    glVertex2f(-0.14724, -0.37749);
    glVertex2f(-0.1484, -0.3888);
    glVertex2f(-0.14463, -0.39402);
    glVertex2f(-0.13589, -0.38249);
    glVertex2f(-0.13353, -0.36718);
    glVertex2f(-0.12686, -0.37817);
    glVertex2f(-0.12701, -0.38351);
    glVertex2f(-0.11506, -0.37555);
    glVertex2f(-0.11838, -0.36526);
    glVertex2f(-0.11639, -0.35431);
    glVertex2f(-0.10809, -0.35298);
    glVertex2f(-0.09747, -0.3553);
    glVertex2f(-0.09084, -0.349);
    glVertex2f(-0.08341, -0.35387);
    glVertex2f(-0.19238, -0.4611);
    glEnd();
}

glBegin(GL_LINE_LOOP);
{
    glColor3f(0,0,0);

    glVertex2f(-0.19238, -0.4611);
    glVertex2f(-0.19626, -0.44488);
    glVertex2f(-0.18885, -0.43394);
    glVertex2f(-0.18004, -0.43571);
    glVertex2f(-0.18392, -0.41525);
    glVertex2f(-0.17651, -0.40185);
    glVertex2f(-0.16169, -0.40255);
    glVertex2f(-0.15535, -0.40749);
    glVertex2f(-0.15819, -0.39029);
    glVertex2f(-0.15664, -0.37324);
    glVertex2f(-0.15199, -0.36239);
    glVertex2f(-0.13805, -0.35154);
    glVertex2f(-0.14289, -0.36387);
    glVertex2f(-0.14724, -0.37749);
    glVertex2f(-0.1484, -0.3888);
    glVertex2f(-0.14463, -0.39402);
    glVertex2f(-0.13589, -0.38249);
    glVertex2f(-0.13353, -0.36718);
    glVertex2f(-0.12686, -0.37817);
    glVertex2f(-0.12701, -0.38351);
    glVertex2f(-0.11506, -0.37555);
    glVertex2f(-0.11838, -0.36526);
    glVertex2f(-0.11639, -0.35431);
    glVertex2f(-0.10809, -0.35298);
    glVertex2f(-0.09747, -0.3553);
    glVertex2f(-0.09084, -0.349);
    glVertex2f(-0.08341, -0.35387);
    glVertex2f(-0.19238, -0.4611);
    glEnd();
}
}


void trees(){
    //trees

     tree2();
     tree1();
     tree3();
}

void fountain(){

     glBegin(GL_POLYGON);
 {
     glColor3f(0.49, 0.51, 0.51);

    glVertex2f(0.09792, -0.51992);
    glVertex2f(0.14328, -0.52012);
    glVertex2f(0.12371, -0.55874);
    glVertex2f(0.09792, -0.51992);

 glEnd();
 }

  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.09792, -0.51992);
    glVertex2f(0.14328, -0.52012);
    glVertex2f(0.12371, -0.55874);
    glVertex2f(0.09792, -0.51992);

 glEnd();
 }

      glBegin(GL_POLYGON);
 {
     glColor3f(0.49, 0.51, 0.51);

    glVertex2f(0.08988, -0.5599);
    glVertex2f(0.15607, -0.5592);
    glVertex2f(0.15693, -0.57743);
    glVertex2f(0.08953, -0.57808);
    glVertex2f(0.08988, -0.5599);

 glEnd();
 }
  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.08988, -0.5599);
    glVertex2f(0.15607, -0.5592);
    glVertex2f(0.15693, -0.57743);
    glVertex2f(0.08953, -0.57808);
    glVertex2f(0.08988, -0.5599);

 glEnd();
 }

 glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.09024, -0.49844);
    glVertex2f(0.04189, -0.4844);


    glVertex2f(0.02494, -0.48218);
    glVertex2f(0,-0.5);

    glVertex2f(0.12002, -0.50135);
    glVertex2f(0.09717, -0.47555);

    glVertex2f(0.08,-0.47);
    glVertex2f(0.03526, -0.46081);
    glVertex2f(0.11553, -0.46033);
    glVertex2f(0.09147, -0.43409);
    glVertex2f(0.12264, -0.46963);
    glVertex2f(0.12154, -0.43792);
    glVertex2f(0.13138, -0.48056);
    glVertex2f(0.13084, -0.44503);
    glVertex2f(0.14, -0.48);
    glVertex2f(0.18, -0.44);
    glVertex2f(0.13873, -0.49522);
    glVertex2f(0.17449, -0.47418);
    glVertex2f(0.18413, -0.47011);
    glVertex2f(0.23415, -0.46499);
    glVertex2f(0.12898, -0.50895);
    glVertex2f(0.17124, -0.49762);
    glVertex2f(0.1747, -0.49713);
    glVertex2f(0.20631, -0.50908);


 glEnd();
 }

}


void dB_surrounding(){


 glBegin(GL_POLYGON);
 {
     glColor3f(0.08, 0.34, 0.91);

    glVertex2f(-0.07,-0.34);
    glVertex2f(0.38, -0.34364);
    glVertex2f(0.45, -0.37608);
    glVertex2f(0.49, -0.39591);
    glVertex2f(0.49, -0.41661);
    glVertex2f(0.48, -0.4353);
    glVertex2f(0.47, -0.45642);
    glVertex2f(0.44, -0.47185);
    glVertex2f(0.42, -0.48485);
    glVertex2f(0.36, -0.50028);
    glVertex2f(0.30, -0.52302);
    glVertex2f(0.25, -0.54333);
    glVertex2f(0.62, -0.56609);
    glVertex2f(0.63, -0.59917);
    glVertex2f(0.64, -0.62547);
    glVertex2f(0.62, -0.65601);
    glVertex2f(0.59, -0.68686);
    glVertex2f(0.55, -0.7086);
    glVertex2f(0.53, -0.72726);
    glVertex2f(0.52, -0.75729);
    glVertex2f(0.50, -0.78174);
    glVertex2f(0.62, -0.81433);
    glVertex2f(0.70, -0.84285);
    glVertex2f(0.76, -0.8673);
    glVertex2f(0.84, -0.89175);
    glVertex2f(0.89, -0.92434);
    glVertex2f(0.95, -0.95694);
    glVertex2f(1, -1);
    glVertex2f(-0.70382, -0.99858);


 glEnd();
 }
glBegin(GL_POLYGON);
 {
     glColor3f(0.08, 0.34, 0.91);

    glVertex2f(-0.07,-0.34);
    glVertex2f(0.38, -0.34364);
    glVertex2f(0.45, -0.37608);
    glVertex2f(0.49, -0.39591);
    glVertex2f(0.49, -0.41661);
    glVertex2f(0.48, -0.4353);
    glVertex2f(0.47, -0.45642);


 glEnd();
 }


glBegin(GL_POLYGON);
 {
     glColor3f(0.91, 0.93, 0.93);

    glVertex2f(-1, 0.74651);
    glVertex2f(-0.52737, 0.53875);
    glVertex2f(-0.53038, 0.4424);
    glVertex2f(-0.45812, 0.40627);
    glVertex2f(-0.45812, 0.33099);
    glVertex2f(-0.45624, 0);
    glVertex2f(-0.7, 0);
    glVertex2f(-1, 0);



 glEnd();
 }

 glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(-1, 0.74651);
    glVertex2f(-0.52737, 0.53875);
    glVertex2f(-0.53038, 0.4424);
    glVertex2f(-0.45812, 0.40627);
    glVertex2f(-0.45812, 0.33099);
    glVertex2f(-0.45624, 0);
    glVertex2f(-0.7, 0);
    glVertex2f(-1, 0);
    glVertex2f(-1, 0.74651);



 glEnd();
 }


 glBegin(GL_POLYGON);
 {
     glColor3f(0.82, 0.84, 0.84);

    glVertex2f(-1, 0.55);
    glVertex2f(-0.75111, 0.50292);
    glVertex2f(-0.75853, 0.43457);
    glVertex2f(-0.68733, 0.39904);
    glVertex2f(-0.7, 0);
    glVertex2f(-1, 0);

 glEnd();
 }

  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(-1, 0.55);
    glVertex2f(-0.75111, 0.50292);
    glVertex2f(-0.75853, 0.43457);
    glVertex2f(-0.68733, 0.39904);
    glVertex2f(-0.7, 0);
    glVertex2f(-1, 0);
    glVertex2f(-1, 0.55);

 glEnd();
 }
//1st window
  glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.96807, 0.69109);
    glVertex2f(-0.56985, 0.51991);
    glVertex2f(-0.56857, 0.45498);
    glVertex2f(-0.96076, 0.62143);

 glEnd();
 }
 glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.71874, 0.47952);
    glVertex2f(-0.48041, 0.37889);
    glVertex2f(-0.48041, 0.33);
    glVertex2f(-0.71477, 0.4292);

 glEnd();
 }

 glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.66916, 0.38083);
    glVertex2f(-0.47198, 0.30614);
    glVertex2f(-0.47298, 0.25834);
    glVertex2f(-0.67109, 0.3242);

 glEnd();
 }
  glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.6701, 0.28781);
    glVertex2f(-0.47324, 0.23322);
    glVertex2f(-0.47159, 0.19012);
    glVertex2f(-0.67274, 0.22429);

 glEnd();
 }
  glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.67142, 0.19517);
    glVertex2f(-0.47266, 0.16538);
    glVertex2f(-0.47266, 0.11742);
    glVertex2f(-0.67539, 0.13561);

 glEnd();
 }
  glBegin(GL_POLYGON);
 {
     glColor3f(0.3098,0.537,0.69);

    glVertex2f(-0.67671, 0.10517);
    glVertex2f(-0.47135, 0.0945);
    glVertex2f(-0.47025, 0.04562);
    glVertex2f(-0.67804, 0.05223);

 glEnd();
 }

  glBegin(GL_POLYGON);
 {
     glColor3f(0.51, 0.98, 0.25);

    glVertex2f(-0.15926, -0.52861);
    glVertex2f(-0.09293, -0.51815);
    glVertex2f(-0.04161, -0.52955);
    glVertex2f(0.00543, -0.56804);
    glVertex2f(0.01595, -0.61369);
    glVertex2f(-0.017, -0.67384);
    glVertex2f(-0.09423, -0.69183);
    glVertex2f(-0.17336, -0.67148);
    glVertex2f(-0.20823, -0.62254);
    glVertex2f(-0.20411, -0.57802);
    glVertex2f(-0.15926, -0.52861);

 glEnd();
 }
   glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.15926, -0.52861);
    glVertex2f(-0.09293, -0.51815);
    glVertex2f(-0.04161, -0.52955);
    glVertex2f(0.00543, -0.56804);
    glVertex2f(0.01595, -0.61369);
    glVertex2f(-0.017, -0.67384);
    glVertex2f(-0.09423, -0.69183);
    glVertex2f(-0.17336, -0.67148);
    glVertex2f(-0.20823, -0.62254);
    glVertex2f(-0.20411, -0.57802);
    glVertex2f(-0.15926, -0.52861);

 glEnd();
 }
  glBegin(GL_POLYGON);
 {
     glColor3f(0.51, 0.98, 0.25);

    glVertex2f(0.0331, -1);
    glVertex2f(0.06043, -0.92544);
    glVertex2f(0.11327, -0.8726);
    glVertex2f(0.2, -0.85);
    glVertex2f(0.27088, -0.86895);
    glVertex2f(0.32007, -0.90175);
    glVertex2f(0.34741, -0.94183);
    glVertex2f(0.35834, -1);
    glVertex2f(0.0331, -1);


 glEnd();
 }
   glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.0331, -1);
    glVertex2f(0.06043, -0.92544);
    glVertex2f(0.11327, -0.8726);
    glVertex2f(0.2, -0.85);
    glVertex2f(0.27088, -0.86895);
    glVertex2f(0.32007, -0.90175);
    glVertex2f(0.34741, -0.94183);
    glVertex2f(0.35834, -1);
    glVertex2f(0.0331, -1);


 glEnd();
 }
    ///chata1
    // void chata() {
    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(-0.67, -0.20);
    glVertex2f(-0.64, -0.20);
    glVertex2f(-0.64, 0.21);
    glVertex2f(-0.67, 0.21);
    glEnd();

    //leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.57, 0.26);
    glEnd();

    //leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.66, 0.28);
    glEnd();

    //leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.71, 0.27);
    glEnd();

    //leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.77, 0.26);
    glEnd();

    //top
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.38, 0.31);
    glVertex2f(-0.48, 0.34);
    glVertex2f(-0.79, 0.35);
    glVertex2f(-0.99, 0.34);

    glEnd();

    //top
    glColor3f(0.44, 0.43, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.40, 0.27);
    glVertex2f(-1.0, 0.26);
    glEnd();

    ///seat
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(-0.58, -0.30);
    glVertex2f(-0.57, -0.30);
    glVertex2f(-0.57, -0.07);
    glVertex2f(-0.58, -0.07);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(-0.56, -0.30);
    glVertex2f(-0.55, -0.30);
    glVertex2f(-0.55, -0.07);
    glVertex2f(-0.56, -0.07);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.565, -0.30);
    glVertex2f(-0.565, -0.07);
    glEnd();

    //anex1-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.56, -0.30);
    glVertex2f(-0.61, -0.30);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.58, -0.30);
    glVertex2f(-0.61, -0.30);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.56, -0.07);
    glVertex2f(-0.61, -0.07);
    glEnd();

    //anex1-leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.58, -0.07);
    glVertex2f(-0.61, -0.07);
    glEnd();


    ///CHATA TRANSLATION2
    glPushMatrix();
    glTranslatef(0, -0.18, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(-0.67, -0.20);
    glVertex2f(-0.64, -0.20);
    glVertex2f(-0.64, 0.21);
    glVertex2f(-0.67, 0.21);
    glEnd();

    //leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.57, 0.26);
    glEnd();

    //leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.66, 0.28);
    glEnd();

    //leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.71, 0.27);
    glEnd();

    //leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.77, 0.26);
    glEnd();

    //top
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.38, 0.31);
    glVertex2f(-0.48, 0.34);
    glVertex2f(-0.79, 0.35);
    glVertex2f(-0.99, 0.34);

    glEnd();

    //top
    glColor3f(0.44, 0.43, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.40, 0.27);
    glVertex2f(-1.0, 0.26);
    glEnd();
    glPopMatrix();

     ///CHATA TRANSLATION3
    glPushMatrix();
    glTranslatef(0, -0.33, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(-0.67, -0.20);
    glVertex2f(-0.64, -0.20);
    glVertex2f(-0.64, 0.21);
    glVertex2f(-0.67, 0.21);
    glEnd();

    //leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.57, 0.26);
    glEnd();

    //leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.66, 0.28);
    glEnd();

    //leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.71, 0.27);
    glEnd();

    //leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.77, 0.26);
    glEnd();

    //top
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.38, 0.31);
    glVertex2f(-0.48, 0.34);
    glVertex2f(-0.79, 0.35);
    glVertex2f(-0.99, 0.34);

    glEnd();

    //top
    glColor3f(0.44, 0.43, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.40, 0.27);
    glVertex2f(-1.0, 0.26);
    glEnd();

    ///seat
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(-0.58, -0.30);
    glVertex2f(-0.57, -0.30);
    glVertex2f(-0.57, -0.07);
    glVertex2f(-0.58, -0.07);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(-0.56, -0.30);
    glVertex2f(-0.55, -0.30);
    glVertex2f(-0.55, -0.07);
    glVertex2f(-0.56, -0.07);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.565, -0.30);
    glVertex2f(-0.565, -0.07);
    glEnd();

    //anex1-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.56, -0.30);
    glVertex2f(-0.61, -0.30);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.58, -0.30);
    glVertex2f(-0.61, -0.30);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.56, -0.07);
    glVertex2f(-0.61, -0.07);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.58, -0.07);
    glVertex2f(-0.61, -0.07);
    glEnd();
    glPopMatrix();

    ///CHATA TRANSLATION4
    glPushMatrix();
    glTranslatef(0, -0.48, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(-0.67, -0.20);
    glVertex2f(-0.64, -0.20);
    glVertex2f(-0.64, 0.21);
    glVertex2f(-0.67, 0.21);
    glEnd();

    //leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.57, 0.26);
    glEnd();

    //leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.66, 0.28);
    glEnd();

    //leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.71, 0.27);
    glEnd();

    //leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.66, 0.21);
    glVertex2f (-0.77, 0.26);
    glEnd();

    //top
    glColor3f(0.96, 0.75, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.38, 0.31);
    glVertex2f(-0.48, 0.34);
    glVertex2f(-0.79, 0.35);
    glVertex2f(-0.99, 0.34);

    glEnd();

    //top
    glColor3f(0.44, 0.43, 0.38);
    glBegin(GL_POLYGON);

    glVertex2f(-0.99, 0.29);
    glVertex2f(-0.93, 0.29);
    glVertex2f(-0.92, 0.26);
    glVertex2f(-0.77, 0.26);
    glVertex2f(-0.71, 0.27);
    glVertex2f(-0.66, 0.28);

    glVertex2f(-0.57, 0.26);
    glVertex2f(-0.40, 0.28);
    glVertex2f(-0.40, 0.27);
    glVertex2f(-1.0, 0.26);
    glEnd();
    glPopMatrix();


    ///annex6 top
    glPushMatrix();
    glTranslatef(0, -0.44, 0);
    glColor3f(0.88, 0.88, 0.88);
    glBegin(GL_POLYGON);

    //glVertex2f(0.61, 0.54);
    glVertex2f(1.0, 0.82);
    glVertex2f(1.0, 0.88);
    glVertex2f(0.61, 0.58);
    glVertex2f(0.58, 0.55);
    glVertex2f(0.61, 0.54);
    glEnd();

    //annex6 body
    glColor3f(0.72, 0.39, 0.28);
    glBegin(GL_POLYGON);
    glVertex2f(1.0, 0.82);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.38, 0.10);
    glVertex2f(0.61, 0.54);
    glEnd();

    //annex6 walking
    glColor3f(0.69, 0.66, 0.59);
    glBegin(GL_POLYGON);
     glColor3f(0.58,0.56,0.51);
    glVertex2f(1.0, 0.09);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(1.0, 0.03);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(0.38, 0.10);
    glColor3f(0.58,0.56,0.51);
    glVertex2f(0.40, 0.15);
    glColor3f(0.58,0.56,0.51);

    glEnd();
    //annex6 window
    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.88, 0.88);


    glVertex2f(0.84, 0.18);
    glVertex2f(0.94, 0.18);
    glVertex2f(0.94, 0.32);
    glVertex2f(0.84, 0.32);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.88, 0.88, 0.88);


    glVertex2f(0.65, 0.18);
    glVertex2f(0.78, 0.18);
    glVertex2f(0.78, 0.32);
    glVertex2f(0.65, 0.32);


    glEnd();

    //anex1-leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.88, 0.73);
    glVertex2f(0.90, 0.10);
    glEnd();

    //anex1-leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.79, 0.67);
    glVertex2f(0.79, 0.12);
    glEnd();

    //anex1-leg3
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.70, 0.60);
    glVertex2f(0.70, 0.12);
    glEnd();


    //anex1-leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.61, 0.54);
    glVertex2f(0.60, 0.13);
    glEnd();
    glPopMatrix();

    ///chata1 with annex
    glPushMatrix();
    glTranslatef(0, -0.4, 0);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(0.56, 0.0);
    glVertex2f(0.60, 0.0);
    glVertex2f(0.59, 0.27);
    glVertex2f(0.55, 0.27);
    glEnd();

    //anex6-leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.59, 0.27);
    glVertex2f(0.76, 0.43);
    glEnd();

    //anex1-leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.59, 0.27);
    glVertex2f(0.57, 0.41);
    glEnd();

    //anex1-leg3


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.55, 0.27);
    glVertex2f(0.46, 0.44);
    glEnd();


    //anex1-leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.55, 0.27);
    glVertex2f(0.68, 0.41);
    glEnd();

    ///chata1 with annex top

    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.75, 0);

    glVertex2f(0.40, 0.46);
    glVertex2f(0.46, 0.44);
    glVertex2f(0.99, 0.45);
    glVertex2f(1.0, 0.55);
    glVertex2f(0.43, 0.53);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(0.37, 0.41);
    glVertex2f(1.0, 0.42);
    glVertex2f(0.99, 0.45);
    glVertex2f(0.46, 0.44);
    glVertex2f(0.40, 0.46);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    //glVertex2f(0.99, 0.26);
    glVertex2f(1.0, 0.01);
    glVertex2f(0.97, 0.01);
    glVertex2f(0.97, 0.20);
    glVertex2f(0.99, 0.27);
    glVertex2f(1.0, 0.23);

    glEnd();

    //anex6-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.78, 0.41);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.92, 0.42);
    glEnd();

    //anex1-leg3


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.99, 0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    //glVertex2f(0.99, 0.26);
    glVertex2f(1.0, 0.11);
    glVertex2f(1.0, 0.08);
    glVertex2f(0.54, 0.08);
    glVertex2f(0.54, 0.11);
    //glVertex2f(1.0, 0.23);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.66, 0.66, 0.66);


    glVertex2f(1.0, 0.08);
    glVertex2f(1.0, 0.07);
    glVertex2f(0.54, 0.07);
    glVertex2f(0.54, 0.08);


    glEnd();
    ///seat

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, 0.04);
    glVertex2f(1.0, 0.03);
    glVertex2f(0.54, 0.03);
    glVertex2f(0.54, 0.04);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, 0.02);
    glVertex2f(1.0, 0.01);
    glVertex2f(0.54, 0.01);
    glVertex2f(0.54, 0.02);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (1.0, 0.025);
    glVertex2f(0.54, 0.025);
    glEnd();

    //anex6-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, 0.04);
    glVertex2f(0.54, 0.0);
    glEnd();



    //anex6-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, 0.02);
    glVertex2f(0.54, 0.0);
    glEnd();

    ///seat

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, -0.03);
    glVertex2f(0.54, -0.03);
    glVertex2f(0.54, -0.04);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, -0.02);
    glVertex2f(1.0, -0.01);
    glVertex2f(0.54, -0.01);
    glVertex2f(0.54, -0.02);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (1.0, -0.025);
    glVertex2f(0.54, -0.025);
    glEnd();

    //anex1-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, -0.04);
    glVertex2f(0.54, -0.06);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, -0.02);
    glVertex2f(0.54, -0.04);
    glEnd();
    glPopMatrix();

     ///chata1 translate with annex
    glPushMatrix();
    glTranslatef(0, -0.6, 0);
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(0.56, 0.0);
    glVertex2f(0.60, 0.0);
    glVertex2f(0.59, 0.27);
    glVertex2f(0.55, 0.27);
    glEnd();

    //anex6-leg1
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.59, 0.27);
    glVertex2f(0.76, 0.43);
    glEnd();

    //anex1-leg2
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.59, 0.27);
    glVertex2f(0.57, 0.41);
    glEnd();

    //anex1-leg3


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.55, 0.27);
    glVertex2f(0.46, 0.44);
    glEnd();


    //anex1-leg4
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.55, 0.27);
    glVertex2f(0.68, 0.41);
    glEnd();

    ///chata1 with annex top

    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.75, 0);

    glVertex2f(0.40, 0.46);
    glVertex2f(0.46, 0.44);
    glVertex2f(0.99, 0.45);
    glVertex2f(1.0, 0.55);
    glVertex2f(0.43, 0.53);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.44, 0.43, 0.38);

    glVertex2f(0.37, 0.41);
    glVertex2f(1.0, 0.42);
    glVertex2f(0.99, 0.45);
    glVertex2f(0.46, 0.44);
    glVertex2f(0.40, 0.46);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    //glVertex2f(0.99, 0.26);
    glVertex2f(1.0, 0.01);
    glVertex2f(0.97, 0.01);
    glVertex2f(0.97, 0.20);
    glVertex2f(0.99, 0.27);
    glVertex2f(1.0, 0.23);

    glEnd();

    //anex6-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.78, 0.41);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.92, 0.42);
    glEnd();

    //anex1-leg3


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.99, 0.26);
    glVertex2f(0.99, 0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);

    //glVertex2f(0.99, 0.26);
    glVertex2f(1.0, 0.11);
    glVertex2f(1.0, 0.08);
    glVertex2f(0.54, 0.08);
    glVertex2f(0.54, 0.11);
    //glVertex2f(1.0, 0.23);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.66, 0.66, 0.66);


    glVertex2f(1.0, 0.08);
    glVertex2f(1.0, 0.07);
    glVertex2f(0.54, 0.07);
    glVertex2f(0.54, 0.08);


    glEnd();
    ///seat

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, 0.04);
    glVertex2f(1.0, 0.03);
    glVertex2f(0.54, 0.03);
    glVertex2f(0.54, 0.04);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, 0.02);
    glVertex2f(1.0, 0.01);
    glVertex2f(0.54, 0.01);
    glVertex2f(0.54, 0.02);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (1.0, 0.025);
    glVertex2f(0.54, 0.025);
    glEnd();

    //anex6-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, 0.04);
    glVertex2f(0.54, 0.0);
    glEnd();



    //anex6-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, 0.02);
    glVertex2f(0.54, 0.0);
    glEnd();

    ///seat

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, -0.03);
    glVertex2f(0.54, -0.03);
    glVertex2f(0.54, -0.04);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);


    glVertex2f(1.0, -0.02);
    glVertex2f(1.0, -0.01);
    glVertex2f(0.54, -0.01);
    glVertex2f(0.54, -0.02);


    glEnd();

    //line1

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (1.0, -0.025);
    glVertex2f(0.54, -0.025);
    glEnd();

    //anex1-leg1


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, -0.04);
    glVertex2f(0.54, -0.06);
    glEnd();



    //anex1-leg2


    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.54, -0.02);
    glVertex2f(0.54, -0.04);
    glEnd();
    glPopMatrix();


    //pyramid

 glColor3f(0.44, 0.43, 0.38);
 glPushMatrix();
    glTranslatef(0, -0.42, 0);
    glBegin(GL_POLYGON);

     glVertex2f(0.23, 0.33);
    glVertex2f(0.16, 0.26);
    glVertex2f(0.17, 0.24);
    glVertex2f(0.09, 0.16);
    glVertex2f(0.09, 0.08);
    glVertex2f(0.40, 0.08);

    glVertex2f(0.40, 0.16);
    glVertex2f(0.30, 0.25);
    glVertex2f(0.31, 0.26);
    glEnd();
     glPopMatrix();

///from below the water
fountain();


  glPushMatrix();
  glTranslatef(0.0f,-0.22f ,0.0f);

  fountain();
  glPopMatrix();

 glBegin(GL_POLYGON);
 {
     glColor3f(0.08, 0.34, 0.91);

    glVertex2f(-0.69138, -1);
    glVertex2f(-0.54,-1);
    glVertex2f(-0.00713, -0.41868);
    glVertex2f(0.0067, -0.34339);
    glVertex2f(-0.06,-0.34);
    glVertex2f(-0.69138, -1);

 glEnd();
 }
  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.69138, -1);
    glVertex2f(-0.54,-1);
    glVertex2f(-0.00713, -0.41868);
    glVertex2f(0.0067, -0.34339);
    glVertex2f(-0.06,-0.34);
    glVertex2f(-0.69138, -1);

 glEnd();
 }

   glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.61537, -0.99833);
    glVertex2f(0.0067, -0.34339);
    glVertex2f(-0.61537, -0.99833);

 glEnd();
 }

    glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.13,-0.42);
    glVertex2f(-0.06,-0.42);
    glVertex2f(-0.08,-0.5);
    glVertex2f(-0.06,-0.42);
 glEnd();
 }
 glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.22,-0.51);
    glVertex2f(-0.14,-0.5);
    glVertex2f(-0.15,-0.57);
    glVertex2f(-0.14,-0.5);
 glEnd();
 }
 glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.22,-0.59);
    glVertex2f(-0.22885, -0.66217);
    glVertex2f(-0.22,-0.59);
 glEnd();
 }
 glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.39,-0.68);
    glVertex2f(-0.31,-0.67);
    glVertex2f(-0.31,-0.75);
    glVertex2f(-0.31,-0.67);
 glEnd();
 }

  glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.49,-0.79);
    glVertex2f(-0.41,-0.78);
    glVertex2f(-0.40179, -0.85242);
    glVertex2f(-0.41,-0.78);
 glEnd();
 }
  glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(-0.58,-0.88);
    glVertex2f(-0.5,-0.87);
    glVertex2f(-0.49,-0.95);
    glVertex2f(-0.5,-0.87);
 glEnd();
 }
  glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.08,-0.34);
    glVertex2f(0.08,-0.42);
 glEnd();
 }

   glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.0067, -0.34339);
    glVertex2f(0.38235, -0.34339);
    glVertex2f(0.39002, -0.4176);
    glVertex2f(-0.00713, -0.41868);
    glVertex2f(0.0067, -0.34339);

 glEnd();
 }
   glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.17,-0.34);
    glVertex2f(0.17,-0.42);
 glEnd();
 }
    glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.25,-0.34);
    glVertex2f(0.25,-0.42);
 glEnd();
 }
     glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.32,-0.34);
    glVertex2f(0.32,-0.42);
 glEnd();
 }

  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.39002, -0.4176);
    glVertex2f(0.38235, -0.34339);
    glVertex2f(0.49058, -0.40201);
    glVertex2f(0.4919, -0.41851);
    glVertex2f(0.46508, -0.45441);
    glVertex2f(0.41958, -0.48629);
    glVertex2f(0.39572, -0.49671);
    glVertex2f(0.61802, -0.57146);
    glVertex2f(0.63951, -0.62903);
    glVertex2f(0.62409, -0.65793);
    glVertex2f(0.58615, -0.68808);
    glVertex2f(0.5418, -0.71783);
    glVertex2f(1, -1);
    glVertex2f(0.9, -1);
    glVertex2f(0.49333, -0.74248);
    glVertex2f(0.49508, -0.71886);
    glVertex2f(0.52184, -0.69207);
    glVertex2f(0.60352, -0.62169);
    glVertex2f(0.58901, -0.59098);
    glVertex2f(0.5465, -0.57596);
    glVertex2f(0.48556, -0.55853);
    glVertex2f(0.42,-0.54);
    glVertex2f(0.38279, -0.52738);
    glVertex2f(0.35695, -0.50949);
    glVertex2f(0.35994, -0.49111);
    glVertex2f(0.37248, -0.47359);
    glVertex2f(0.38287, -0.46377);
    glVertex2f(0.42611, -0.44046);
    glVertex2f(0.4245, -0.43496);
    glVertex2f(0.41734, -0.42955);
    glVertex2f(0.39002, -0.4176);

 glEnd();
 }

  glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.35964, -0.54367);
    glVertex2f(0.35695, -0.50949);
    glVertex2f(0.38279, -0.52738);
    glVertex2f(0.42,-0.54);
    glVertex2f(0.48556, -0.55853);
    glVertex2f(0.5465, -0.57596);
    glVertex2f(0.58901, -0.59098);
    glVertex2f(0.60352, -0.62169);
    glVertex2f(0.35964, -0.54367);
    glVertex2f(0.35964, -0.54367);

 glEnd();
 }
 glBegin(GL_LINE_LOOP);
 {
     glColor3f(0,0,0);

    glVertex2f(0.49333, -0.74248);
    glVertex2f(0.9, -1);
    glVertex2f(0.84,-1);
    glVertex2f(0.49633, -0.77688);
    glVertex2f(0.49333, -0.74248);


 glEnd();
 }
   glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.35695, -0.50949);
    glVertex2f(0.35964, -0.54367);
    glVertex2f(0.42,-0.54);
    glVertex2f(0.42,-0.56);
    glVertex2f(0.48556, -0.55853);
    glVertex2f(0.48604, -0.58268);
    glVertex2f(0.5465, -0.57596);
    glVertex2f(0.54937, -0.60331);
    glVertex2f(0.49333, -0.74248);
    glVertex2f(0.49633, -0.77688);
    glVertex2f(0.56,-0.78);
    glVertex2f(0.56,-0.82);
    glVertex2f(0.63,-0.83);
    glVertex2f(0.63,-0.86);
    glVertex2f(0.69,-0.87);
    glVertex2f(0.69,-0.9);
    glVertex2f(0.76,-0.91);
    glVertex2f(0.76,-0.95);
    glVertex2f(0.84,-0.96);

 glEnd();
 }

    glBegin(GL_LINES);
 {
     glColor3f(0,0,0);

    glVertex2f(0.84,-0.96);
    glVertex2f(0.89,-0.93);
    glVertex2f(0.76,-0.91);
    glVertex2f(0.8,-0.88);
    glVertex2f(0.69,-0.87);
    glVertex2f(0.73,-0.83);
    glVertex2f(0.63,-0.83);
    glVertex2f(0.67,-0.79);
    glVertex2f(0.56,-0.78);
    glVertex2f(0.6,-0.75);
    glVertex2f(0.5,-0.72);
    glVertex2f(0.54,-0.72);
    glVertex2f(0.55,-0.66);
    glVertex2f(0.58615, -0.68808);
    glVertex2f(0.60352, -0.62169);
    glVertex2f(0.63951, -0.62903);
    glVertex2f(0.58901, -0.59098);
    glVertex2f(0.61802, -0.57146);
    glVertex2f(0.5465, -0.57596);
    glVertex2f(0.56,-0.55);
    glVertex2f(0.48556, -0.55853);
    glVertex2f(0.5,-0.53);
    glVertex2f(0.42,-0.54);
    glVertex2f(0.44,-0.51);
    glVertex2f(0.38279, -0.52738);
    glVertex2f(0.39572, -0.49671);
    glVertex2f(0.35994, -0.49111);
    glVertex2f(0.39572, -0.49671);
    glVertex2f(0.38287, -0.46377);
    glVertex2f(0.41958, -0.48629);
    glVertex2f(0.42611, -0.44046);
    glVertex2f(0.46508, -0.45441);
    glVertex2f(0.42611, -0.44046);
    glVertex2f(0.49058, -0.40201);
    glVertex2f(0.4245, -0.43496);
    glVertex2f(0.43,-0.37);

 glEnd();
 }

 trees();

 glPushMatrix();
 glTranslatef(-0.3f,-0.3f ,0.0f);
 trees();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-0.25f,-0.25f ,0.0f);
 trees();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-0.45f,-0.45f ,0.0f);
 trees();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-0.3f,-0.15f ,0.0f);
 tree1();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-0.3f,-0.15f ,0.0f);
 tree2();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(-0.29f,-0.19f ,0.0f);
 tree2();
 glPopMatrix();

  glPushMatrix();
 glTranslatef(-0.22f,-0.17f ,0.0f);
 tree2();
 glPopMatrix();




 // right side trees

 glPushMatrix();
 glTranslatef(0.71f,0.0f ,0.0f);
 tree2();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(0.77f,-0.02f ,0.0f);
 tree2();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(0.80f,-0.04f ,0.0f);
 tree2();
 glPopMatrix();

  glPushMatrix();
 glTranslatef(0.84f,-0.04f ,0.0f);
 tree2();
 glPopMatrix();


 glPushMatrix();
 glTranslatef(0.97f,-0.15f ,0.0f);
 tree1();
 glPopMatrix();


 glPushMatrix();
 glTranslatef(0.9f,-0.25f ,0.0f);
 tree2();
 glPopMatrix();

 glPushMatrix();
 glTranslatef(1.08f,-0.35f ,0.0f);
 tree2();
 glPopMatrix();

   glPushMatrix();
 glTranslatef(1.2f,-0.45f ,0.0f);
 tree2();
 glPopMatrix();

  glPushMatrix();
 glTranslatef(1.15f,-0.38f ,0.0f);
 tree2();
 glPopMatrix();

 ///fish
 glBegin(GL_POLYGON);
glColor3f(0.91, 0.44, 0.05);
glVertex2f(-0.20967, -0.89191);
glVertex2f(-0.17781, -0.86441);
glVertex2f(-0.15789, -0.90098);
  glEnd();


glBegin(GL_POLYGON);
glColor3f(0.91, 0.44, 0.05);

glVertex2f(-0.17781, -0.86441);
glVertex2f(-0.19341, -0.81326);
glVertex2f(-0.1466, -0.75865);
glVertex2f(-0.14314, -0.82106);


glEnd();
 // second

  glPushMatrix();
 glTranslatef(1.f,-0.2f ,0.0f);
 tree1();
 glPopMatrix();


 glPushMatrix();
 glTranslatef(1.02f,-0.32f ,0.0f);
 tree2();
 glPopMatrix();


 glPushMatrix();
 glTranslatef(-0.2f,-0.2f ,0.0f);
 tree3();
 glPopMatrix();


 glPushMatrix();
 glTranslatef(0.6f,-0.9f ,0.0f);
 tree1();
 glPopMatrix();



}

void bird(){

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(-0.55226, 0.85726);
    glVertex2f(-0.53773, 0.87792);
    glVertex2f(-0.5645, 0.87256);
    glVertex2f(-0.5492, 0.89245);
    glVertex2f(-0.5209, 0.89169);
    glVertex2f(-0.50254, 0.94064);
    glVertex2f(-0.4727, 0.95977);
    glVertex2f(-0.49642, 0.89169);
    glVertex2f(-0.4903, 0.86797);
    glVertex2f(-0.51401, 0.86415);
    glVertex2f(-0.57597, 0.79836);
    glVertex2f(-0.60122, 0.79224);
    glVertex2f(-0.58133, 0.82819);
    glVertex2f(-0.55226, 0.85726);

    glEnd();

}

void animate_bird(int value) {

    if (position_bird< -1)
        position_bird = 1.9f;
    position_bird -=speed_bird+0.01;

	glutPostRedisplay();

	glutTimerFunc(100, animate_bird, 0);
}

void animate_bird_2(int value) {

    if (position_bird_2> 1)
        position_bird_2 = -1.8f;
    position_bird_2 +=speed_bird+0.01;

	glutPostRedisplay();

	glutTimerFunc(100, animate_bird_2, 0);
}


/*
void sky(){
    //sky
    glColor3f(0.67, 0.82, 0.93);
    glBegin(GL_POLYGON);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glColor3f(0.88,0.88,0.88);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();
*/


void sky2(){
    //sky
    glColor3f(0.67, 0.82, 0.93);
    glBegin(GL_POLYGON);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glColor3f(0.88,0.88,0.88);
    glVertex2f(1,0.20);
    glVertex2f(-1,0.20);
    glEnd();

}

void surrounding(){
    //surrounding
    glColor3f(0.63, 0.96, 0.33);
    glBegin(GL_POLYGON);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glColor3f(0.88, 0.88, 0.88);
    glVertex2f(1,0.20);
    glVertex2f(-1,0.20);
    glEnd();

    glPushMatrix();
    glTranslatef(position_bird,0.0f ,0.0f);
    bird();
    glPopMatrix();

    // 2nd bird
    glPushMatrix();
    glTranslatef(position_bird_2, 0.05f,0.0f);
    glRotatef(180, 0, 1, 0);
    bird();
    glPopMatrix();
    glFlush();


}


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky2();
    surrounding();
    cB();
//    human();
    dB_surrounding();
    glPushMatrix();
    glTranslatef(0.12f,0.026f,0.f);
    glPopMatrix();

    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glEnd();
    glutSwapBuffers();
    glFlush(); // Render now
}


void coverPage(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0.2235f,.5176f,0.5686274509803922f);
    drawText("American International University-Bangladesh (AIUB)", -0.8f,.8f);
    glColor3f(0.2156862745098039f,0.403921568627451f,0.5490196078431373f);
    drawText("FACULTY OF SCIENCE and TECHNOLOGY",-0.8f,.65f);
    glColor3f(0.32156f,0.1333f,0.1411764705882353f);
    drawText("PROJECT ON : SEASONAL EVOLUTION",-0.8f,.5f);
    glColor3f(0.1764f,0.1764f,0.3803921568627451f);
    drawText("COURSE NAME: COMPUTER GRAPHICS",-0.8f,.35f);
    drawText("COURSE SUPERVISOR: Mahfujur Rahman (Lecturer, Computer Science)",-0.8f,.22f);
    glColor3f(0.7686274509803922f,0.0784313725490196f,0.0784313725490196f);
    drawText("GROUP MEMBERS:",-0.2f,.05f);
    glColor3f(0.7686274509803922f,0.0784313725490196f,0.0784313725490196f);
    drawText1("1.   WASIFA TASNIM MRITTIKA                       (ID:21-45108-2)",-0.7f,-.1f);
    drawText1("2.   MD. MEHEDI HASAN RATUL                        (ID:21-45007-2)",-0.7f,-.2f);
    drawText1("3.   MAISHA SHAMS                                           (ID:20-43359-1)",-0.7f,-.3f);
    drawText1("4.   LUBNA YEASMIN URME                              (ID:21-44930-2)",-0.7f,-.4f);
    drawText1("5.   MD. KAMRUJJAMAN                                    (ID:19-40665-1)",-0.7f,-.5f);
    drawText("Press 'D' to see D-building",0.4f,-0.62f);
    drawText("Press 'C' to see C-building",0.4f,-0.72f);
    drawText("Press 'B' to see Birds",0.4f,-0.82f);
    drawText("Press 'P' to come back here.",0.4f,-0.92f);
    glPopMatrix();
    glutSwapBuffers();
    glPopMatrix();

}

void d_building()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    db();
    annex();
    field();
    gallery();
    net();
    goalpost();
    football();
    glutSwapBuffers();
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
    {
    case 'D':
        glutDisplayFunc(d_building);
         sndPlaySound("sound.wav", SND_ASYNC);
        break;
    case 'C':
        glutDisplayFunc(c_building);
        break;
    case 'B':
        glutDisplayFunc(display);
        break;
    case 'P':
        glutDisplayFunc(coverPage);//
        break;

    glutPostRedisplay();
	}
}

void reshape(GLsizei width, GLsizei height) {  //GLsizei for non-negative integer
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;

   // Set the view port to cover the new window
   glViewport(0, 0, width, height);

   // Set the aspect ratio of the clipping area to match the view port
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();             // Reset the projection matrix
   if (width >= height) {
     // aspect >= 1, set the height from -1 to 1, with larger width
      gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
   } else {
      // aspect < 1, set the width to -1 to 1, with larger height
     gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
   }
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("CG PROJECT");
    //glutDisplayFunc(display);
    glutDisplayFunc(coverPage);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, animate_bird, 0);
    glutTimerFunc(100, animate_bird_2, 0);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
