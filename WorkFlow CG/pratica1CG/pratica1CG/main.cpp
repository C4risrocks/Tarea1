// Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************			Guevara Chávez Marco			******//
//*************			Moreno Marín Christian								******//
//************************************************************//
#include "Main.h"
#include<math.h>


//piso primer tramo 53 cuadros
//segundo tramo 15

float transX, transY = 0;

void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.41f, 0.72f, 0.87, 0.0f);				// Azul de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
														//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
														//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

	void colorRGB(float rojo,float verde, float azul) {

		float R, G, B;

		R = rojo / 255;
		G = verde/255;
		B = azul/255;
		glColor3f(R, G, B);

	}

	void poligono(void) {

		glBegin(GL_POLYGON);
		glVertex3f(-0.5, 0.5, -1.2);
		glVertex3f(0.5, 0.5, -1.2);
		glVertex3f(0.5, -0.5, -1.2);
		glVertex3f(-0.5, -0.5, -1.2);
		glEnd();
		glFlush();

	}

	void piso(void) {
	glBegin(GL_POLYGON);
	glColor3f(0.83, 0.4, 0.12);
	glVertex3f(0, 0, -1.2);
	glVertex3f(10, 0, -1.2);
	glVertex3f(10, -10, -1.2);
	glVertex3f(0, -10, -1.2);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
		glVertex3f(0, 0, -1.2);
		glVertex3f(10, 0, -1.2);
	glColor3f(0.0, 0.0, 0.0);
		glVertex3f(10, -10, -1.2);
		glVertex3f(0, -10, -1.2);
		glVertex3f(0, 0, -1.2);
		  glEnd();

		glBegin(GL_POLYGON);
	  glColor3f(1, 1, 1);
		  glVertex3f(5.8, 0, -1.2);
		  glVertex3f(6.3, 0, -1.2);
		  glVertex3f(6.3, -5.3, -1.2);
		  glVertex3f(5.8, -5.3, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(5.3, -5.3, -1.2);
		  glVertex3f(5.8, -5.3, -1.2);
		  glVertex3f(5.8, -6.3, -1.2);
		  glVertex3f(5.3, -6.3, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(5.3, -6.3, -1.2);
		  glVertex3f(4.8, -6.3, -1.2);
		  glVertex3f(4.8, -10, -1.2);
		  glVertex3f(5.3, -10, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(4.8, -6.3, -1.2);
		  glVertex3f(4.8, -6.8, -1.2);
		  glVertex3f(2.3, -6.8, -1.2);
		  glVertex3f(2.3, -6.3, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(2.3, -6.3, -1.2);
		  glVertex3f(2.3, -5.8, -1.2);
		  glVertex3f(1.3, -5.8, -1.2);
		  glVertex3f(1.3, -6.3, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(1.3, -5.3, -1.2);
		  glVertex3f(1.3, -5.8, -1.2);
		  glVertex3f(0, -5.8, -1.2);
		  glVertex3f(0, -5.3, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(1, 1, 1);
		  glVertex3f(6.3, -2.8, -1.2);
		  glVertex3f(6.3, -3.3, -1.2);
		  glVertex3f(10, -3.3, -1.2);
		  glVertex3f(10, -2.8, -1.2);
		  glEnd();

		 //

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(5.5, 0, -1.2);
		  glVertex3f(6, 0, -1.2);
		  glVertex3f(6, -5, -1.2);
		  glVertex3f(5.5, -5, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(5, -5, -1.2);
		  glVertex3f(5.5, -5, -1.2);
		  glVertex3f(5.5, -6, -1.2);
		  glVertex3f(5, -6, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(5, -6, -1.2);
		  glVertex3f(4.5, -6, -1.2);
		  glVertex3f(4.5, -10, -1.2);
		  glVertex3f(5, -10, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(4.5, -6, -1.2);
		  glVertex3f(4.5, -6.5, -1.2);
		  glVertex3f(2, -6.5, -1.2);
		  glVertex3f(2, -6, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(2, -6, -1.2);
		  glVertex3f(2, -5.5, -1.2);
		  glVertex3f(1, -5.5, -1.2);
		  glVertex3f(1, -6, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(1, -5, -1.2);
		  glVertex3f(1, -5.5, -1.2);
		  glVertex3f(0, -5.5, -1.2);
		  glVertex3f(0, -5, -1.2);
		  glEnd();

		  glBegin(GL_POLYGON);
		  glColor3f(0, 0, 0);
		  glVertex3f(6, -2.5, -1.2);
		  glVertex3f(6, -3, -1.2);
		  glVertex3f(10, -3, -1.2);
		  glVertex3f(10, -2.5, -1.2);
		  glEnd();
		  
		
	glFlush();
	}
	

	void modTab(void) {
	glBegin(GL_POLYGON);
		glColor3f(0.8, 0.39, 0.12);
		glVertex3f(0, 0, -1.2);
		glVertex3f(12, 0, -1.2);
		glVertex3f(12, -12, -1.2);
		glVertex3f(0, -12, -1.2);
		glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(0, 0, -1.2);
		glVertex3f(12, 0, -1.2);
		glVertex3f(12, -12, -1.2);
		glVertex3f(0, -12, -1.2);
		glVertex3f(0, 0, -1.2);
		glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(0, -3, -1.2);
		glVertex3f(12, -3, -1.2);
		glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
		glVertex3f(0, -6,  -1.2);
		glVertex3f(12, -6, -1.2);
		glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
		glVertex3f(0, -9, -1.2);
		glVertex3f(12, -9, -1.2);
		glEnd();

	//verticales
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(6, 0, -1.2);
		glVertex3f(6, -3, -1.2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(6, -6, -1.2);
		glVertex3f(6, -9, -1.2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(3, -3, -1.2);
		glVertex3f(3, -6, -1.2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(3, -9, -1.2);
		glVertex3f(3, -12, -1.2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(9, -3, -1.2);
		glVertex3f(9, -6, -1.2);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		glVertex3f(9, -9, -1.2);
		glVertex3f(9, -12, -1.2);
		glEnd();
		
		
		glFlush();

	}

	void tabiqueEscalera(void) {
		
		glBegin(GL_TRIANGLES);
		colorRGB(253, 187, 176);
		glVertex3f(-8, -8, -1.2);
		glVertex3f(-8, 8, -1.2);
		glVertex3f(8, 8, -1.2);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		colorRGB(0, 0, 0);
		glVertex3f(8, 8, -1.2);
		glVertex3f(8, -8, -1.2);
		glVertex3f(-8, -8, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		colorRGB(201,76,12);
		glVertex3f(-4, 4, -1.2);
		glVertex3f(4, 4, -1.2);
		glVertex3f(4, -4, -1.2);
		glVertex3f(-4, -4, -1.2);
		glEnd();


		//pixeles diagonales negros
		glPushMatrix();
		colorRGB(0, 0, 0);
		glTranslatef(-7.5,-7.5,0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glTranslatef(9, 9, 0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glTranslatef(1, 1, 0);
		poligono();
		glPopMatrix();

		//Pixeles diagonales marrones
		colorRGB(201, 76, 12);
		glPushMatrix();
		glTranslatef(-7.5, 7.5, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glTranslatef(9, -9, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glTranslatef(1, -1, 0);
		poligono();
		glPopMatrix();
		
		glFlush();
	}

	void tab1(void) {
		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(0, 0.5, -1.2);
		//glColor3f(0, 0, 0);
		glVertex3f(12.5, 0.5, -1.2);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(12.5, -12.5, -1.2);

		glVertex3f(0.5, -12.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.95, 0.73, 0.44);
		glVertex3f(0, 0, -1.2);
		glVertex3f(12, 0, -1.2);
		glVertex3f(12, -12, -1.2);
		glVertex3f(0, -12, -1.2);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(0, 0, -1.2);
		glVertex3f(12, 0, -1.2);
		glVertex3f(12, -12, -1.2);
		glVertex3f(0, -12, -1.2);
		glVertex3f(0, 0, -1.2);
		glEnd();

		glPointSize(4);
		glBegin(GL_POINTS);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(2, -2, -1.2);
		glEnd();
		glBegin(GL_POINTS);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(10, -2, -1.2);
		glEnd();
		glBegin(GL_POINTS);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(2, -10, -1.2);
		glEnd();
		glBegin(GL_POINTS);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(10, -10, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(3.5, -6.5, -1.2);
		glVertex3f(4.5, -6.5, -1.2);
		glVertex3f(4.5, -4.5, -1.2);
		glVertex3f(3.5, -4.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(4, -3.5, -1.2);
		glVertex3f(7.5, -3.5, -1.2);
		glVertex3f(7.5, -4.5, -1.2);
		glVertex3f(4, -4.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(7.5, -4, -1.2);
		glVertex3f(7.5, -6.5, -1.2);
		glVertex3f(8.5, -6.5, -1.2);
		glVertex3f(8.5, -4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(5.5, -6.5, -1.2);
		glVertex3f(8, -6.5, -1.2);
		glVertex3f(8, -7.5, -1.2);
		glVertex3f(5.5, -7.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(5.5, -7.5, -1.2);
		glVertex3f(6.5, -7.5, -1.2);
		glVertex3f(6.5, -8.5, -1.2);
		glVertex3f(5.5, -8.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(5.5, -9.5, -1.2);
		glVertex3f(5.5, -10.5, -1.2);
		glVertex3f(6.5, -10.5, -1.2);
		glVertex3f(6.5, -9.5, -1.2);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(3, -6, -1.2);
		glVertex3f(4, -6, -1.2);
		glVertex3f(4, -4, -1.2);
		glVertex3f(3, -4, -1.2);		
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(3.5, -3, -1.2);
		glVertex3f(7, -3, -1.2);
		glVertex3f(7, -4, -1.2);
		glVertex3f(3.5, -4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(7, -3.5, -1.2);
		glVertex3f(7, -6, -1.2);
		glVertex3f(8, -6, -1.2);
		glVertex3f(8, -3.5, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(5, -6, -1.2);
		glVertex3f(7.5, -6, -1.2);
		glVertex3f(7.5, -7, -1.2);
		glVertex3f(5, -7, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(5, -7, -1.2);
		glVertex3f(6, -7, -1.2);
		glVertex3f(6, -8, -1.2);
		glVertex3f(5, -8, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68, 0.37, 0.10);
		glVertex3f(5, -9, -1.2);
		glVertex3f(5, -10, -1.2);
		glVertex3f(6, -10, -1.2);
		glVertex3f(6, -9, -1.2);
		glEnd();

		glFlush();
	}
	
	void montania(void) {

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(0, 0, -1.2);
		glVertex3f(0, 2, -1.2);
		glVertex3f(2, 2, -1.2);
		glVertex3f(2, 0, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(2, 2, -1.2);
		glVertex3f(2, 4, -1.2);
		glVertex3f(4, 4, -1.2);
		glVertex3f(4, 2, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(4, 4, -1.2);
		glVertex3f(4, 6, -1.2);
		glVertex3f(6, 6, -1.2);
		glVertex3f(6, 4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(6, 6, -1.2);
		glVertex3f(6, 8, -1.2);
		glVertex3f(8, 8, -1.2);
		glVertex3f(8, 6, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(8, 8, -1.2);
		glVertex3f(8, 10, -1.2);
		glVertex3f(12, 10, -1.2);
		glVertex3f(12, 8, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(12, 10, -1.2);
		glVertex3f(12, 12, -1.2);
		glVertex3f(16, 12, -1.2);
		glVertex3f(16, 10, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(16, 12, -1.2);
		glVertex3f(16, 14, -1.2);
		glVertex3f(24, 14, -1.2);
		glVertex3f(24, 12, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(24, 12, -1.2);
		glVertex3f(28, 12, -1.2);
		glVertex3f(28, 10, -1.2);
		glVertex3f(24, 10, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(28, 10, -1.2);
		glVertex3f(28, 8, -1.2);
		glVertex3f(32, 8, -1.2);
		glVertex3f(32, 10, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(32, 6, -1.2);
		glVertex3f(32, 8, -1.2);
		glVertex3f(34, 8, -1.2);
		glVertex3f(34, 6, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(34, 4, -1.2);
		glVertex3f(34, 6, -1.2);
		glVertex3f(36, 6, -1.2);
		glVertex3f(36, 4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(36, 2, -1.2);
		glVertex3f(36, 4, -1.2);
		glVertex3f(38, 4, -1.2);
		glVertex3f(38, 2, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(38, 0, -1.2);
		glVertex3f(38, 2, -1.2);
		glVertex3f(40, 2, -1.2);
		glVertex3f(40, 0, -1.2);
		glEnd();

		//
		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(2, 2, -1.2);
		glVertex3f(2, 0, -1.2);
		glVertex3f(38, 0, -1.2);
		glVertex3f(38, 2, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(4, 2, -1.2);
		glVertex3f(4, 4, -1.2);
		glVertex3f(36, 4, -1.2);
		glVertex3f(36, 2, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(6, 4, -1.2);
		glVertex3f(6, 6, -1.2);
		glVertex3f(34, 6, -1.2);
		glVertex3f(34, 4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(8, 6, -1.2);
		glVertex3f(8, 8, -1.2);
		glVertex3f(32, 8, -1.2);
		glVertex3f(32, 6, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(2, 2, -1.2);
		glVertex3f(2, 0, -1.2);
		glVertex3f(38, 0, -1.2);
		glVertex3f(38, 2, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(12, 8, -1.2);
		glVertex3f(12, 10, -1.2);
		glVertex3f(28, 10, -1.2);
		glVertex3f(28, 8, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(.32, 0.66, 0.18);
		glVertex3f(16, 10, -1.2);
		glVertex3f(16, 12, -1.2);
		glVertex3f(24, 12, -1.2);
		glVertex3f(24, 10, -1.2);
		glEnd();

		//

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(24, 6, -1.2);
		glVertex3f(24, 7, -1.2);
		glVertex3f(26, 7, -1.2);
		glVertex3f(26, 6, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex3f(24.7, 5.4, -1.2);
		glVertex3f(24.7, 7.5, -1.2);
		glVertex3f(25.2, 7.5, -1.2);
		glVertex3f(25.2, 5.4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(22, 4, -1.2);
		glVertex3f(22, 6, -1.2);
		glVertex3f(21, 6, -1.2);
		glVertex3f(21, 4, -1.2);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(10, 4, -1.2);
		glVertex3f(10, 6, -1.2);
		glVertex3f(11, 6, -1.2);
		glVertex3f(11, 4, -1.2);
		glEnd();

		glFlush();
	}

	void mario(void) {

		glPointSize(3.5);
		glBegin(GL_POINTS);

		glColor3f(1, 0, 0);
		glVertex3f(4, 16, -1.2);
		glVertex3f(5, 16, -1.2);
		glVertex3f(6, 16, -1.2);
		glVertex3f(7, 16, -1.2);
		glVertex3f(8, 16, -1.2);

		glVertex3f(3, 15, -1.2);
		glVertex3f(4, 15, -1.2);
		glVertex3f(5, 15, -1.2);
		glVertex3f(6, 15, -1.2);
		glVertex3f(7, 15, -1.2);
		glVertex3f(8, 15, -1.2);
		glVertex3f(9, 15, -1.2);
		glVertex3f(10, 15, -1.2);
		glVertex3f(11, 15, -1.2);

		glVertex3f(3, 9, -1.2);
		glVertex3f(4, 9, -1.2);
		glVertex3f(6, 9, -1.2);
		glVertex3f(7, 9, -1.2);

		glVertex3f(2, 8, -1.2);
		glVertex3f(3, 8, -1.2);
		glVertex3f(4, 8, -1.2);
		glVertex3f(6, 8, -1.2);
		glVertex3f(7, 8, -1.2);
		glVertex3f(9, 8, -1.2);
		glVertex3f(10, 8, -1.2);
		glVertex3f(11, 8, -1.2);

		glVertex3f(1, 7, -1.2);
		glVertex3f(2, 7, -1.2);
		glVertex3f(3, 7, -1.2);
		glVertex3f(4, 7, -1.2);
		glVertex3f(9, 7, -1.2);
		glVertex3f(10, 7, -1.2);
		glVertex3f(11, 7, -1.2);
		glVertex3f(12, 7, -1.2);

		glVertex3f(3, 6, -1.2);
		glVertex3f(10, 6, -1.2);


		glColor3f(0.75, 0.52, 0.42);
		glVertex3f(6, 14, -1.2);
		glVertex3f(7, 14, -1.2);
		glVertex3f(9, 14, -1.2);

		glVertex3f(3, 13, -1.2);
		glVertex3f(5, 13, -1.2);
		glVertex3f(6, 13, -1.2);
		glVertex3f(7, 13, -1.2);
		glVertex3f(9, 13, -1.2);
		glVertex3f(10, 13, -1.2);
		glVertex3f(11, 13, -1.2);

		glVertex3f(3, 12, -1.2);
		glVertex3f(6, 12, -1.2);
		glVertex3f(7, 12, -1.2);
		glVertex3f(8, 12, -1.2);
		glVertex3f(10, 12, -1.2);
		glVertex3f(11, 12, -1.2);
		glVertex3f(12, 12, -1.2);

		glVertex3f(4, 11, -1.2);
		glVertex3f(5, 11, -1.2);
		glVertex3f(6, 11, -1.2);
		glVertex3f(7, 11, -1.2);

		glVertex3f(4, 10, -1.2);
		glVertex3f(5, 10, -1.2);
		glVertex3f(6, 10, -1.2);
		glVertex3f(7, 10, -1.2);
		glVertex3f(8, 10, -1.2);
		glVertex3f(9, 10, -1.2);
		glVertex3f(10, 10, -1.2);

		glVertex3f(1, 6, -1.2);
		glVertex3f(2, 6, -1.2);
		glVertex3f(5, 6, -1.2);
		glVertex3f(8, 6, -1.2);
		glVertex3f(11, 6, -1.2);
		glVertex3f(12, 6, -1.2);

		glVertex3f(1, 5, -1.2);
		glVertex3f(2, 5, -1.2);
		glVertex3f(3, 5, -1.2);
		glVertex3f(10, 5, -1.2);
		glVertex3f(11, 5, -1.2);
		glVertex3f(12, 5, -1.2);

		glVertex3f(1, 4, -1.2);
		glVertex3f(2, 4, -1.2);
		glVertex3f(11, 4, -1.2);
		glVertex3f(12, 4, -1.2);









		glColor3f(0.4235, 0.2313, 0.1647);

		glVertex3f(3, 14, -1.2);
		glVertex3f(4, 14, -1.2);
		glVertex3f(5, 14, -1.2);

		glVertex3f(2, 13, -1.2);
		glVertex3f(4, 13, -1.2);

		glVertex3f(2, 12, -1.2);
		glVertex3f(4, 12, -1.2);
		glVertex3f(5, 12, -1.2);
		glVertex3f(9, 12, -1.2);

		glVertex3f(2, 11, -1.2);
		glVertex3f(3, 11, -1.2);
		glVertex3f(8, 11, -1.2);
		glVertex3f(9, 11, -1.2);
		glVertex3f(10, 11, -1.2);
		glVertex3f(11, 11, -1.2);

		glVertex3f(1, 1, -1.2);
		glVertex3f(2, 1, -1.2);
		glVertex3f(3, 1, -1.2);
		glVertex3f(4, 1, -1.2);
		glVertex3f(9, 1, -1.2);
		glVertex3f(10, 1, -1.2);
		glVertex3f(11, 1, -1.2);
		glVertex3f(12, 1, -1.2);

		glVertex3f(2, 2, -1.2);
		glVertex3f(3, 2, -1.2);
		glVertex3f(4, 2, -1.2);
		glVertex3f(9, 2, -1.2);
		glVertex3f(10, 2, -1.2);
		glVertex3f(11, 2, -1.2);

		glColor3f(0, 0, 1);
		glVertex3f(3, 3, -1.2);
		glVertex3f(4, 3, -1.2);
		glVertex3f(5, 3, -1.2);
		glVertex3f(8, 3, -1.2);
		glVertex3f(9, 3, -1.2);
		glVertex3f(10, 3, -1.2);

		glVertex3f(3, 4, -1.2);
		glVertex3f(4, 4, -1.2);
		glVertex3f(5, 4, -1.2);
		glVertex3f(8, 4, -1.2);
		glVertex3f(9, 4, -1.2);
		glVertex3f(10, 4, -1.2);

		glVertex3f(4, 5, -1.2);
		glVertex3f(5, 5, -1.2);
		glVertex3f(6, 5, -1.2);
		glVertex3f(7, 5, -1.2);
		glVertex3f(8, 5, -1.2);
		glVertex3f(9, 5, -1.2);

		glVertex3f(4, 6, -1.2);
		glVertex3f(6, 6, -1.2);
		glVertex3f(7, 6, -1.2);
		glVertex3f(9, 6, -1.2);

		glVertex3f(5, 7, -1.2);
		glVertex3f(6, 7, -1.2);
		glVertex3f(7, 7, -1.2);
		glVertex3f(8, 7, -1.2);

		glVertex3f(5, 8, -1.2);
		glVertex3f(8, 8, -1.2);

		glVertex3f(5, 9, -1.2);

		glEnd();


		glFlush();
	}

	void orquito(void) {

		//cuerpo
		colorRGB(221, 164, 154);
		glPushMatrix();
		glScalef(8, 5, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-2,5,0);
		glScalef(3, 3, 1);
		poligono();
		glPopMatrix();



		//gorro de orco------------
		colorRGB(194, 73, 12);
		glPushMatrix();
		glTranslatef(0, 5, 0);
		glScalef(14, 5, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 4, 0);
		glScalef(16, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-5, 2, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(5, 2, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 8, 0);
		glScalef(12, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 9, 0);
		glScalef(10, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 10, 0);
		glScalef(8, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 11, 0);
		glScalef(6, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 12, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		//ojos-----------
		colorRGB(221, 164, 154);
		glPushMatrix();
		glTranslatef(-2.5, 5, 0);
		glScalef(3, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(2.5, 5, 0);
		glScalef(3, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-3.5, 7, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(3.5, 7, 0);
		poligono();
		glPopMatrix();

		glColor3f(0, 0, 0);
		glPushMatrix();
		glTranslatef(2.5, 6, 0);
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-2.5, 6, 0);
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4, 8, 0);
		glScalef(2, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(4, 8, 0);
		glScalef(2, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 6, 0);
		glScalef(4,1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4, -2, 0);
		glScalef(2, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-3.5, -3, 0);
		glScalef(3, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(4, -3, 0);
		glScalef(6, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(4.5, -2, 0);
		glScalef(5, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(5, -1, 0);
		glScalef(2, 1, 1);
		poligono();
		glPopMatrix();




	}

	void nube(void) {
		glScalef(3, 3, 1);

		glColor3f(1, 1, 1);

		glPushMatrix();
		glScalef(41,12,1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-10.5, 9, 0);
		glScalef(8, 6, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4.5, 8.5, 0);
		glScalef(4, 5, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-9.5, 13, 0);
		glScalef(6, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(7.5, 13, 0);
		glScalef(6, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-0.5, 7, 0);
		glScalef(4, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-15.5, 7, 0);
		glScalef(4, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-15, 8.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(16, 7, 0);
		glScalef(1, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(22, 4, 0);
		glScalef(3, 4, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(22, 6.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21.5, 0.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21, -1.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21.5, -4.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-21.5, 0, 0);
		glScalef(2, 8, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-23.5, -0.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();


		glPushMatrix();
		glTranslatef(1, 8.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(6, 9, 0);
		glScalef(9, 6, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(13, 8,0);
		glScalef(5, 4, 1);
		poligono();
		glPopMatrix();




		//---------------
		glPushMatrix();
		glTranslatef(1.5, -7, 0);
		glScalef(38, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-12.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(3.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(11.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		//-------------------

		

		//contorno de la figura

		glPushMatrix();

		glTranslatef(-19, 6.5, 0);
		glColor3f(0, 0, 0);

			glPushMatrix();
			
			glScalef(3, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2,1,0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 2, 0);
			glPushMatrix();
			glScalef(1,3,1);
			poligono();
			glPopMatrix();

			glTranslatef(1.5, 2, 0);
			glPushMatrix();
			glScalef(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(2.5, 1, 0);
			glPushMatrix();
			glScalef(4, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2.5, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1.5, 0);
			glPushMatrix();
			glScalef(1, 2, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1, -1.5, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1,-1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -2, 0);
			glPushMatrix();
			glScalef(1, 3, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 2, 0);
			glPushMatrix();
			glScalef(1, 3, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2, 2, 0);
			glPushMatrix();
			glScalef(3, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(2.5, 1, 0);
			glPushMatrix();
			glScalef(4, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2.5, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -2, 0);
			glPushMatrix();
			glScalef(1, 3, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1.5, 0);
			glPushMatrix();
			glScalef(1, 2, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2, -1.5, 0);
			glPushMatrix();
			glScalef(3, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(2, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -2.5, 0);
			glPushMatrix();
			glScalef(1, 4, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1, -2.5, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, -2, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();


			glTranslatef(-1, -2, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, -2, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-2, -1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-2, -1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, -1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-3, -1, 0);
			glPushMatrix();
			glScaled(4, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-3, 1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-2, -1, 0);
			glPushMatrix();
			glScaled(3, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-2.5, 1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, -1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-3, -1, 0);
			glPushMatrix();
			glScaled(4, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-3, 1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, -1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-2.5, -1, 0);
			glPushMatrix();
			glScaled(4, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-3, 1, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1.5, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-2, 1, 0);
			glPushMatrix();
			glScaled(3, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-2, 1.5, 0);
			glPushMatrix();
			glScaled(1, 2, 1);
			poligono();
			glPopMatrix();

			glTranslatef(-1, 1.5, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, 1, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(-1, 1.5, 0);
			glPushMatrix();
			glScaled(1, 2, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1.5, 1.5, 0);
			glPushMatrix();
			glScaled(2, 1, 1);
			poligono();
			glPopMatrix();

			glTranslatef(1.5, 2, 0);
			glPushMatrix();
			poligono();
			glPopMatrix();

			glTranslatef(1, 1.5, 0);
			glPushMatrix();
			glScaled(1, 2, 1);
			poligono();
			glPopMatrix();

			

		glPopMatrix();
	}

	void arbusto(void) {
		glScalef(3, 3, 1);
		colorRGB(116, 186, 15);
		glPushMatrix();
		glScalef(41, 12, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-10.5, 9, 0);
		glScalef(8, 6, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4.5, 8.5, 0);
		glScalef(4, 5, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-9.5, 13, 0);
		glScalef(6, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(7.5, 13, 0);
		glScalef(6, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-0.5, 7, 0);
		glScalef(4, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-15.5, 7, 0);
		glScalef(4, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-15, 8.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(16, 7, 0);
		glScalef(1, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(22, 4, 0);
		glScalef(3, 4, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(22, 6.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21.5, 0.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21, -1.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(21.5, -4.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-21.5, 0, 0);
		glScalef(2, 8, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-23.5, -0.5, 0);
		glScalef(2, 3, 1);
		poligono();
		glPopMatrix();


		glPushMatrix();
		glTranslatef(1, 8.5, 0);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(6, 9, 0);
		glScalef(9, 6, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(13, 8, 0);
		glScalef(5, 4, 1);
		poligono();
		glPopMatrix();




		//---------------
		glPushMatrix();
		glTranslatef(1.5, -7, 0);
		glScalef(38, 2, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-12.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-4.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(3.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(11.5, -8.5, 0);
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		//-------------------



		//contorno de la figura

		glPushMatrix();

		glTranslatef(-19, 6.5, 0);
		glColor3f(0, 0, 0);

		glPushMatrix();

		glScalef(3, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 2, 0);
		glPushMatrix();
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1.5, 2, 0);
		glPushMatrix();
		glScalef(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2.5, 1, 0);
		glPushMatrix();
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2.5, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1.5, 0);
		glPushMatrix();
		glScalef(1, 2, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1, -1.5, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -2, 0);
		glPushMatrix();
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 2, 0);
		glPushMatrix();
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2, 2, 0);
		glPushMatrix();
		glScalef(3, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2.5, 1, 0);
		glPushMatrix();
		glScalef(4, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2.5, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -2, 0);
		glPushMatrix();
		glScalef(1, 3, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1.5, 0);
		glPushMatrix();
		glScalef(1, 2, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2, -1.5, 0);
		glPushMatrix();
		glScalef(3, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(2, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -2.5, 0);
		glPushMatrix();
		glScalef(1, 4, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1, -2.5, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, -2, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();


		glTranslatef(-1, -2, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, -2, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-2, -1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-2, -1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, -1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-3, -1, 0);
		glPushMatrix();
		glScaled(4, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-3, 1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, -1, 0);
		glPushMatrix();
		glScaled(3, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-2.5, 1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, -1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-3, -1, 0);
		glPushMatrix();
		glScaled(4, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-3, 1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, -1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2.5, -1, 0);
		glPushMatrix();
		glScaled(4, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-3, 1, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1.5, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 1, 0);
		glPushMatrix();
		glScaled(3, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-2, 1.5, 0);
		glPushMatrix();
		glScaled(1, 2, 1);
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1.5, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1.5, 0);
		glPushMatrix();
		glScaled(1, 2, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1.5, 1.5, 0);
		glPushMatrix();
		glScaled(2, 1, 1);
		poligono();
		glPopMatrix();

		glTranslatef(1.5, 2, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1.5, 0);
		glPushMatrix();
		glScaled(1, 2, 1);
		poligono();
		glPopMatrix();



		glPopMatrix();
	}

	void sombraTuberia(void) {

		colorRGB(129, 207, 17);
		glPushMatrix();
		glScalef(6, 11, 1);
		poligono();
		glPopMatrix();

		colorRGB(1, 167, 1);

		glTranslatef(-1.5, -5, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(-2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(1, 1, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

		glTranslatef(2, 0, 0);
		glPushMatrix();
		poligono();
		glPopMatrix();

	}

	void tuberia(void) {

		//Sombra negra Base------

		glColor3f(0, 0, 0);
		glPushMatrix();
		glScalef(28, 50, 1);
		poligono();
		glPopMatrix();

		//Sombra negra parte superior

		glPushMatrix();
		glTranslatef(0, 32.5, 0);
		glScalef(32, 15, 1);
		poligono();
		glPopMatrix();

		colorRGB(1, 167, 1);

		glPushMatrix();
		glScalef(26, 48, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 32.5, 0);
		glScalef(30, 13, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(12, 31.5, 0);
		sombraTuberia();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(10, 18.5, 0);
		sombraTuberia();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(10, 8.5, 0);
		sombraTuberia();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(10, -1.5, 0);
		sombraTuberia();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(10, -11.5, 0);
		sombraTuberia();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(10, -17.5, 0);
		sombraTuberia();
		glPopMatrix();

		//Reflejos luz

		colorRGB(129, 207, 17);
		glPushMatrix();
		glTranslatef(-11.5, 0, 0);
		glScalef(3, 48, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-13.5, 31.5, 0);
		glScalef(3, 11, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-7, 32, 0);
		glScalef(6, 12, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 38.5, 0);
		glScalef(30, 1, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(-2, 31.5, 0);
		glScalef(2, 11, 1);
		poligono();
		glPopMatrix();

		colorRGB(129, 207, 17);
		glPushMatrix();
		glTranslatef(-5.5, 0, 0);
		glScalef(5, 48, 1);
		poligono();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, 31.5, 0);
		glScalef(2, 11, 1);
		poligono();
		glPopMatrix();

	}

	void escalera1(void) {

		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();

		glTranslatef(16, 16, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();


	}

	void escalera2(void) {

		glRotatef(270, 0, 0, 1);
		escalera1();

	}

	void escalera3(void) {

		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();

		glTranslatef(16, 16, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();

		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(0, -16, 0);
		tabiqueEscalera();
		glTranslatef(0, -16, 0);
		tabiqueEscalera();
		glTranslatef(0, -16, 0);
		tabiqueEscalera();

	}

	//Escalera del final

	void escalera4(void) {

		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();

		glTranslatef(16, 16, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();

		glTranslatef(16, 16, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();


		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();

		glTranslatef(16, 16, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();
		glTranslatef(16, 0, 0);
		tabiqueEscalera();

		glTranslatef(0, 16, 0);
		tabiqueEscalera();
		glTranslatef(-16, 0, 0);
		tabiqueEscalera();


	}

	
	void escenario(void) {

		tuberia();

		glPushMatrix();
		glTranslatef(-80, -70, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(10, 0, 0.0);
		piso();
		glTranslatef(0, 10, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glTranslatef(-10, 0, 0.0);
		piso();
		glPopMatrix();

		glPushMatrix();
		modTab();
		glTranslatef(24.5, 0, 0);
		modTab();
		glTranslated(24.5, 0, 0);
		modTab();
		glPopMatrix();

		glPushMatrix();
		glTranslated(12, 0, 0);
		tab1();
		glTranslated(24, 0, 0);
		tab1();
		glPopMatrix();

		glPushMatrix();
		glTranslated(24, 36, 0);
		tab1();
		glPopMatrix();

		glPushMatrix();
		glTranslated(-48, 0, 0);
		tab1();
		glPopMatrix();

		glPushMatrix();
		glTranslated(-70, -60, 0);
		montania();
		glTranslated(128, 0, 0);
		montania();
		glPopMatrix();

		glPushMatrix();
		glTranslated(24, -60, 0);
		mario();
		glPopMatrix();
		
		
		glFlush();
	}

	


	
	void display(void)   // Creamos la funcion donde se dibuja
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		glTranslatef(transX, transY,0);

		//Poner Código Aquí.
		escenario();
	
	}
	void reshape(int width, int height)   // Creamos funcion Reshape
	{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-80, 80, -80, 80, 0.1, 2);
	//glOrtho(-40, 40, -40, 40, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{

	case 'w':
	case 'W':
		transY += 5;
		printf("Posicion en Y: %f\n", transY);
		break;
	case 's':
	case 'S':
		transY -= 5;
		printf("Posicion en Y: %f\n", transY);
		break;
	case 'a':
	case 'A':
		transX -= 5;
		break;
	case 'd':
	case 'D':
		transX += 5;
		break;
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("TAREA 1"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}