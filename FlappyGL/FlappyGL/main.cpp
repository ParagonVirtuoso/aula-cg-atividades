#include <GL/glut.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//Variaveis para funcionamento do jogo
int ini = 1;
int aleatorio;
int vezal;
int Nvezal;
int npass = 1;
int contav = 0;
//variaveis para desenho do passaro
double pPassaro0_x = 118;
double pPassaro1_x = 115;
double pPassaro2_y = 256 - 129;
double pPassaro3_y = 256 - 122;
double pPassaro4_x = 120;
double pPassaro5_y = 256 - 119;
double pPassaro6_x = 125;
double pPassaro7_x = 134;
BOOLEAN restart = true;
//variaveis para desenho do cano superior
double fCano1x = 256;
double fCano1y = 180;
double fCano2x = 277;
double fCano2y = 256;
double fCano3x = 253;
double fCano4x = 280;
double fCano5y = 201;
//variaveis para desenho do cano inferior
double fCano1x1 = 256;
double fCano3x1 = 253;
double fCano1y1 = 0;
double fCano2x1 = 277;
double fCano4x1 = 280;
double fCano2y1 = 76;
double fCano5y1 = 55;

double corA = 0.4;
double corR = 1.0;
double corG = 1.0;
double corB = 0;


double varAsPass = 4;
double varAsPassLat = 0;

//velocidade que o passaro cai
double variacao = 0.07;
//velocidade que os canos passam
double velocidadeCano = 0.06;
//variavel para velocidade do salto do passaro
int vsalto = 25;

double variacaoNuvem = 8;
double variacaoNuvemG = 8;
double nuvemAleatorio;
double nNuvemx = -100;
double nNuvemy = 20;
double nuvemG = 0;
double nuvemP = 0;
double velNugra = 0.05;
double velNupe = 0.025;
BOOLEAN movPassMais = true;
void init(void);
void display(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char key, int x, int y);

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(256, 256);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("FlappyGL");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

//25.600‬
void init(void) {
	glClearColor(0.29, 0.72, 0.96, 1.0);
	glOrtho(0, 256, 0, 256, -1, 1);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);


	//tes
	glPushMatrix();
	glRotatef(variacaoNuvem, 0.0, 0.0, 1.0);

	glPushMatrix();
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glScalef(0.5, 0.5, 1.0);
	glTranslatef(nuvemP + 400.0, 220.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(70, 200);
	glVertex2i(80, 200);
	glVertex2i(80, 195);
	glVertex2i(85, 195);
	glVertex2i(85, 190);
	glVertex2i(87, 190);
	glVertex2i(87, 180);
	glVertex2i(87, 185);
	glVertex2i(92, 185);
	glVertex2i(92, 180);
	glVertex2i(97, 180);
	glVertex2i(97, 178);
	glVertex2i(100, 178);
	glVertex2i(100, 170);
	glVertex2i(98, 170);
	glVertex2i(98, 168);
	glVertex2i(95, 168);
	glVertex2i(95, 166);
	glColor4f(0.40, 0.80, 0.90, 0.4);
	glVertex2i(93, 166);
	glVertex2i(93, 164);
	glVertex2i(90, 164);
	glVertex2i(90, 160);
	glVertex2i(73, 160);
	glVertex2i(73, 164);
	glVertex2i(65, 164);
	glVertex2i(65, 160);
	glVertex2i(51, 160);
	glVertex2i(51, 164);
	glVertex2i(46, 164);
	glVertex2i(46, 168);
	glVertex2i(44, 168);
	glVertex2i(44, 170);
	glVertex2i(42, 170);
	glVertex2i(42, 185);
	glVertex2i(44, 185);
	glVertex2i(44, 187);
	glVertex2i(48, 187);
	glVertex2i(48, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 192);
	glVertex2i(55, 192);
	glVertex2i(55, 185);
	glVertex2i(57, 185);
	glVertex2i(55, 185);
	glVertex2i(55, 192);
	glVertex2i(57, 192);
	glVertex2i(57, 196);
	glVertex2i(62, 196);
	glVertex2i(62, 197);
	glVertex2i(64, 197);
	glVertex2i(64, 198);
	glVertex2i(66, 198);
	glVertex2i(66, 199);
	glVertex2i(68, 199);
	glVertex2i(68, 200);
	glVertex2i(70, 200);
	glEnd();
	glPopMatrix();
	//tes



	//tes

	glPushMatrix();
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glScalef(0.5, 0.5, 1.0);

	glTranslatef(nuvemP + 400.0, 220.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(70, 200);
	glVertex2i(80, 200);
	glVertex2i(80, 195);
	glVertex2i(85, 195);
	glVertex2i(85, 190);
	glVertex2i(87, 190);
	glVertex2i(87, 180);
	glVertex2i(87, 185);
	glVertex2i(92, 185);
	glVertex2i(92, 180);
	glVertex2i(97, 180);
	glVertex2i(97, 178);
	glVertex2i(100, 178);
	glVertex2i(100, 170);
	glVertex2i(98, 170);
	glVertex2i(98, 168);
	glVertex2i(95, 168);
	glVertex2i(95, 166);
	glVertex2i(93, 166);
	glVertex2i(93, 164);
	glVertex2i(90, 164);
	glVertex2i(90, 160);
	glVertex2i(73, 160);
	glVertex2i(73, 164);
	glVertex2i(65, 164);
	glVertex2i(65, 160);
	glVertex2i(51, 160);
	glVertex2i(51, 164);
	glVertex2i(46, 164);
	glVertex2i(46, 168);
	glVertex2i(44, 168);
	glVertex2i(44, 170);
	glVertex2i(42, 170);
	glVertex2i(42, 185);
	glVertex2i(44, 185);
	glVertex2i(44, 187);
	glVertex2i(48, 187);
	glVertex2i(48, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 192);
	glVertex2i(55, 192);
	glVertex2i(55, 185);
	glVertex2i(57, 185);
	glVertex2i(55, 185);
	glVertex2i(55, 192);
	glVertex2i(57, 192);
	glVertex2i(57, 196);
	glVertex2i(62, 196);
	glVertex2i(62, 197);
	glVertex2i(64, 197);
	glVertex2i(64, 198);
	glVertex2i(66, 198);
	glVertex2i(66, 199);
	glVertex2i(68, 199);
	glVertex2i(68, 200);
	glVertex2i(70, 200);
	glEnd();
	glPopMatrix();
	//tes

	glPopMatrix();

	glPushMatrix();
	glRotatef(-variacaoNuvemG, 0.0, 0.0, 1.0);

	glPushMatrix();
	glColor4f(0.25, 0.85, .97, 0.5);
	glScalef(0.75, 0.75, 1.0);
	glTranslatef(nuvemG + 100.0, 60.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(70, 200);
	glVertex2i(80, 200);
	glColor4f(0.40, 0.80, 0.90, 0.4);
	glVertex2i(80, 195);
	glVertex2i(85, 195);
	glVertex2i(85, 190);
	glVertex2i(87, 190);
	glVertex2i(87, 180);
	glVertex2i(87, 185);
	glVertex2i(92, 185);
	glVertex2i(92, 180);
	glVertex2i(97, 180);
	glVertex2i(97, 178);
	glVertex2i(100, 178);
	glVertex2i(100, 170);
	glVertex2i(98, 170);
	glVertex2i(98, 168);
	glVertex2i(95, 168);
	glVertex2i(95, 166);
	glVertex2i(93, 166);
	glVertex2i(93, 164);
	glVertex2i(90, 164);
	glVertex2i(90, 160);
	glVertex2i(73, 160);
	glVertex2i(73, 164);
	glVertex2i(65, 164);
	glVertex2i(65, 160);
	glVertex2i(51, 160);
	glVertex2i(51, 164);
	glVertex2i(46, 164);
	glVertex2i(46, 168);
	glVertex2i(44, 168);
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glVertex2i(44, 170);
	glVertex2i(42, 170);
	glVertex2i(42, 185);
	glVertex2i(44, 185);
	glVertex2i(44, 187);
	glVertex2i(48, 187);
	glVertex2i(48, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 192);
	glColor4f(0.40, 0.80, 0.90, 0.4);
	glVertex2i(55, 192);
	glVertex2i(55, 185);
	glVertex2i(57, 185);
	glVertex2i(55, 185);
	glVertex2i(55, 192);
	glVertex2i(57, 192);
	glVertex2i(57, 196);
	glVertex2i(62, 196);
	glVertex2i(62, 197);
	glVertex2i(64, 197);
	glVertex2i(64, 198);
	glVertex2i(66, 198);
	glVertex2i(66, 199);
	glVertex2i(68, 199);
	glVertex2i(68, 200);
	glVertex2i(70, 200);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glScalef(0.75, 0.75, 1.0);
	glTranslatef(nuvemG + 100.0 + velNugra, 60.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(70, 200);
	glVertex2i(80, 200);
	glVertex2i(80, 195);
	glVertex2i(85, 195);
	glVertex2i(85, 190);
	glVertex2i(87, 190);
	glVertex2i(87, 180);
	glVertex2i(87, 185);
	glVertex2i(92, 185);
	glVertex2i(92, 180);
	glVertex2i(97, 180);
	glVertex2i(97, 178);
	glVertex2i(100, 178);
	glVertex2i(100, 170);
	glVertex2i(98, 170);
	glVertex2i(98, 168);
	glVertex2i(95, 168);
	glVertex2i(95, 166);
	glVertex2i(93, 166);
	glVertex2i(93, 164);
	glVertex2i(90, 164);
	glVertex2i(90, 160);
	glVertex2i(73, 160);
	glVertex2i(73, 164);
	glVertex2i(65, 164);
	glVertex2i(65, 160);
	glVertex2i(51, 160);
	glVertex2i(51, 164);
	glVertex2i(46, 164);
	glVertex2i(46, 168);
	glVertex2i(44, 168);
	glVertex2i(44, 170);
	glVertex2i(42, 170);
	glVertex2i(42, 185);
	glVertex2i(44, 185);
	glVertex2i(44, 187);
	glVertex2i(48, 187);
	glVertex2i(48, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 192);
	glVertex2i(55, 192);
	glVertex2i(55, 185);
	glVertex2i(57, 185);
	glVertex2i(55, 185);
	glVertex2i(55, 192);
	glVertex2i(57, 192);
	glVertex2i(57, 196);
	glVertex2i(62, 196);
	glVertex2i(62, 197);
	glVertex2i(64, 197);
	glVertex2i(64, 198);
	glVertex2i(66, 198);
	glVertex2i(66, 199);
	glVertex2i(68, 199);
	glVertex2i(68, 200);
	glVertex2i(70, 200);
	glEnd();
	glPopMatrix();

	glPopMatrix();





	//Preenchimento POLIGONO PASSARO
	glColor4f(corR, corG, corB, corA);
	glBegin(GL_POLYGON);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y + 8);
	glVertex2i(pPassaro0_x + 18, pPassaro2_y + 8);
	glVertex2i(pPassaro0_x + 18, pPassaro2_y + 6);
	glVertex2i(pPassaro0_x + 20, pPassaro2_y + 6);
	glVertex2i(pPassaro0_x + 20, pPassaro2_y + 4);
	glVertex2i(pPassaro0_x + 22, pPassaro2_y + 4);
	glVertex2i(pPassaro0_x + 22, pPassaro2_y + 2);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y + 2);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 5);
	glVertex2i(pPassaro0_x + 26, pPassaro2_y - 5);
	glVertex2i(pPassaro0_x + 26, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y - 11);
	glVertex2i(pPassaro0_x + 7, pPassaro2_y - 11);
	glVertex2i(pPassaro0_x + 7, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 4, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 4, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 2, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 2, pPassaro2_y - 3);
	glVertex2i(pPassaro0_x, pPassaro2_y - 3);
	glVertex2i(pPassaro0_x, pPassaro2_y);
	glVertex2i(pPassaro1_x, pPassaro2_y);
	glVertex2i(pPassaro1_x, pPassaro3_y);
	glVertex2i(pPassaro4_x, pPassaro3_y);
	glVertex2i(pPassaro4_x, pPassaro5_y);
	glVertex2i(pPassaro6_x, pPassaro5_y);
	glVertex2i(pPassaro6_x, pPassaro5_y + 2);
	glVertex2i(pPassaro7_x, pPassaro5_y + 2);
	glEnd();
	//FIM preenchimento POLIGONO PASSARO


	//CONTORNO PASSARO
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y + 8);
	glVertex2i(pPassaro0_x + 18, pPassaro2_y + 8);
	glVertex2i(pPassaro0_x + 18, pPassaro2_y + 6);
	glVertex2i(pPassaro0_x + 20, pPassaro2_y + 6);
	glVertex2i(pPassaro0_x + 20, pPassaro2_y + 4);
	glVertex2i(pPassaro0_x + 22, pPassaro2_y + 4);
	glVertex2i(pPassaro0_x + 22, pPassaro2_y + 2);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y + 2);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 5);
	glVertex2i(pPassaro0_x + 26, pPassaro2_y - 5);
	glVertex2i(pPassaro0_x + 26, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 24, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 16, pPassaro2_y - 11);
	glVertex2i(pPassaro0_x + 7, pPassaro2_y - 11);
	glVertex2i(pPassaro0_x + 7, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 4, pPassaro2_y - 9);
	glVertex2i(pPassaro0_x + 4, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 2, pPassaro2_y - 7);
	glVertex2i(pPassaro0_x + 2, pPassaro2_y - 3);
	glVertex2i(pPassaro0_x, pPassaro2_y - 3);
	glVertex2i(pPassaro0_x, pPassaro2_y);
	glVertex2i(pPassaro1_x, pPassaro2_y);
	glVertex2i(pPassaro1_x, pPassaro3_y);
	glVertex2i(pPassaro4_x, pPassaro3_y);
	glVertex2i(pPassaro4_x, pPassaro5_y);
	glVertex2i(pPassaro6_x, pPassaro5_y);
	glVertex2i(pPassaro6_x, pPassaro5_y + 2);
	glVertex2i(pPassaro7_x, pPassaro5_y + 2);
	glEnd();
	//FIM CONTORNO PASSARO



	//INICIO ASAS
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(pPassaro0_x, pPassaro2_y - 1);
	glVertex2i(pPassaro6_x + 2, pPassaro2_y - 1);
	glVertex2i(pPassaro6_x + 2 - varAsPassLat, pPassaro2_y - varAsPass);
	glVertex2i(pPassaro0_x + varAsPassLat, pPassaro2_y - varAsPass);
	glEnd();

	//Contorno asas
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(pPassaro0_x, pPassaro2_y - 1);
	glVertex2i(pPassaro6_x + 2, pPassaro2_y - 1);
	glVertex2i(pPassaro6_x + 2 - varAsPassLat, pPassaro2_y - varAsPass);
	glVertex2i(pPassaro0_x + varAsPassLat, pPassaro2_y - varAsPass);
	glEnd();
	//FIM ASAS


	//INICIO CANO SUPERIOR
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(fCano1x, fCano1y);
	glVertex2i(fCano1x, fCano2y);
	glVertex2i(fCano2x, fCano2y);
	glVertex2i(fCano2x, fCano1y);
	glEnd();
	//contorno cano superior
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(fCano1x, fCano1y);
	glVertex2i(fCano1x, fCano2y);
	glVertex2i(fCano2x, fCano2y);
	glVertex2i(fCano2x, fCano1y);
	glEnd();
	//topo do cano superior
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(fCano3x, fCano1y);
	glVertex2i(fCano4x, fCano1y);
	glVertex2i(fCano4x, fCano5y);
	glVertex2i(fCano3x, fCano5y);
	glEnd();
	//contorno do topo do cano superior
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(fCano3x, fCano1y);
	glVertex2i(fCano4x, fCano1y);
	glVertex2i(fCano4x, fCano5y);
	glVertex2i(fCano3x, fCano5y);
	glEnd();
	//FIM CANO

	//INICIO CANO INFERIOR
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(fCano1x1, fCano1y1);
	glVertex2i(fCano1x1, fCano2y1);
	glVertex2i(fCano2x1, fCano2y1);
	glVertex2i(fCano2x1, fCano1y1);
	glEnd();
	//CONTORNO CANO
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(fCano1x1, fCano1y1);
	glVertex2i(fCano1x1, fCano2y1);
	glVertex2i(fCano2x1, fCano2y1);
	glVertex2i(fCano2x1, fCano1y1);
	glEnd();
	//BORDAS CANO
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(fCano3x1, fCano2y1);
	glVertex2i(fCano4x1, fCano2y1);
	glVertex2i(fCano4x1, fCano5y1);
	glVertex2i(fCano3x1, fCano5y1);
	glEnd();
	//CONTORNO BORDAS CANO
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(fCano3x1, fCano2y1);
	glVertex2i(fCano4x1, fCano2y1);
	glVertex2i(fCano4x1, fCano5y1);
	glVertex2i(fCano3x1, fCano5y1);
	glEnd();
	//FIM CANO

	//condição para que tudo fique em movimento
	if (restart == false) {
		//variavel para determinar a altura maxima e minima da posição atual 
		int val = pPassaro5_y - 2;
		int val1 = pPassaro2_y - 8;

		//colisor dos Canos superior e inferior com o passaro
		if ((pPassaro0_x + 26 >= fCano1x) && (fCano2x >= pPassaro1_x)) {
			if ((val >= fCano1y) || (val1 <= fCano2y1)) {
				npass = 2;
			}

		}

		//Reposicionar canos inferiores
		if (fCano2x1 <= 0) {

			//valor aleatorio para mecher nas alturas do cano
			aleatorio = rand() % 50 + 1;

			//variavel para determinar se o espaço para o passaro passar vai ser em cima ou em baixo
			vezal = rand() % 2 + 1;
			//condicional que movimenta para cima ou para baixo a altura do cano inferior
			if (vezal == 1) {
				fCano2y1 = 76 + aleatorio;
				fCano5y1 = 55 + aleatorio;
			}
			if (vezal == 2) {
				fCano2y1 = 76 - aleatorio;
				fCano5y1 = 55 - aleatorio;
			}

			//incrementar velocidade do cano a cada DUAS VEZES que passar !
			if (contav == 2) {

				velocidadeCano = velocidadeCano + 0.01;
				velNugra = velNugra + 0.01;
				velNupe = velNupe + 0.01;
				contav = 0;
			}

			else {
				contav++;
			}
			//Reposicionando os canos
			fCano1x1 = 256;
			fCano2x1 = 277;
			fCano3x1 = 253;
			fCano4x1 = 280;



		}
		if (nuvemP <= -500) {

			nuvemP = 180;
			Nvezal = rand() % 2 + 1;
			nuvemAleatorio = rand() % 8 + 1;

			if (Nvezal == 1) {
				variacaoNuvem = nuvemAleatorio;
			}
			if (Nvezal == 2) {

				variacaoNuvem = variacaoNuvem - nuvemAleatorio;

			}

		}

		if (nuvemG <= -256) {

			vezal = rand() % 2 + 1;
			nuvemAleatorio = rand() % 8 + 1;
			nuvemG = 256;

			if (vezal == 1) {
				variacaoNuvemG = nuvemAleatorio;
			}
			if (vezal == 2) {

				variacaoNuvemG = variacaoNuvem - nuvemAleatorio;

			}


		}

		//Reposicionar canos superiores
		if (fCano2x <= 0) {
			//condicional que movimenta para cima ou para baixo a altura do cano superior
			if (vezal == 1) {
				fCano1y = 180 + aleatorio;
				fCano5y = 201 + aleatorio;
			}
			if (vezal == 2) {
				fCano1y = 180 - aleatorio;
				fCano5y = 201 - aleatorio;
			}

			// Reposicionando os canos
			fCano1x = 256;
			fCano2x = 277;
			fCano3x = 253;
			fCano4x = 280;
		}

		//Colisor altura maxima
		if (val >= 255) {
			npass = 2;
		}
		//Colisor altura minima
		if (val1 <= 2) {
			npass = 2;
		}

		//condicional que mantem o passaro caindo e os canos andando caso ela seja negada
		if (npass == 2) {
			restart = true;
		}

		else {



			if (movPassMais == true) {
				varAsPass = varAsPass + 0.02;
				if (varAsPassLat > -1) {
					varAsPassLat = varAsPassLat - 0.01;
				}
				if (varAsPass > 10) {
					movPassMais = false;
				}
			}
			if (movPassMais == false) {
				varAsPass = varAsPass - 0.02;
				if (varAsPass < -4) {
					varAsPassLat = varAsPassLat + 0.01;
				}
				if (varAsPass < -10) {
					movPassMais = true;
				}
			}

			//movimento de queda do passaro
			pPassaro2_y = pPassaro2_y - variacao;
			pPassaro3_y = pPassaro3_y - variacao;
			pPassaro5_y = pPassaro5_y - variacao;
			//movimento do cano superior e inferior
			nuvemG = nuvemG - velNugra;
			nuvemP = nuvemP - velNupe;
			fCano1x = fCano1x - velocidadeCano;
			fCano2x = fCano2x - velocidadeCano;
			fCano3x = fCano3x - velocidadeCano;
			fCano4x = fCano4x - velocidadeCano;
			fCano1x1 = fCano1x1 - velocidadeCano;
			fCano2x1 = fCano2x1 - velocidadeCano;
			fCano3x1 = fCano3x1 - velocidadeCano;
			fCano4x1 = fCano4x1 - velocidadeCano;
		}


		glutPostRedisplay();
	}

	glFlush();
	glutSwapBuffers();
}


void mouse(int button, int state, int x, int y) {
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN) {
			//condicional para que ao abrir o passaro nao comece a cair
			if (ini == 1) {
				restart = false;
				ini = 0;
			}
			//iniciando a movimentação toda e movimentando o passaro para cima
			if (restart == false) {

				pPassaro2_y = pPassaro2_y + vsalto;
				pPassaro3_y = pPassaro3_y + vsalto;
				pPassaro5_y = pPassaro5_y + vsalto;
			}
			glutPostRedisplay();
		}
		break;
	}
}
void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 27:
		exit(0);
		break;
	default:
		corA = (GLfloat)rand() / (RAND_MAX + 1.0);
		corR = (GLfloat)rand() / (RAND_MAX + 1.0);
		corG = (GLfloat)rand() / (RAND_MAX + 1.0);
		corB = (GLfloat)rand() / (RAND_MAX + 1.0);
		glutPostRedisplay();
		break;
	}

}