#include <stdio.h>
/*
Ho fem amb 26 perque es el teclat 'normal' d'abecedari
*/

/* Definim el vector de punters */
int (*vectorFuncions[2][26])(void);

/* Saga de 26 funcions, 0, tot be, 1 error general per ara */
int Funcio_a () { printf ("a"); return 0;}
int Funcio_b () { printf ("b"); return 0;}
int Funcio_c () { printf ("c"); return 0;}
int Funcio_d () { printf ("d"); return 0;}
int Funcio_e () { printf ("e"); return 0;}
int Funcio_f () { printf ("f"); return 0;}
int Funcio_g () { printf ("g"); return 0;}
int Funcio_h () { printf ("h"); return 0;}
int Funcio_i () { printf ("i"); return 0;}
int Funcio_j () { printf ("j"); return 0;}
int Funcio_k () { printf ("k"); return 0;}
int Funcio_l () { printf ("l"); return 0;}
int Funcio_m () { printf ("m"); return 0;}
int Funcio_n () { printf ("n"); return 0;}
int Funcio_o () { printf ("o"); return 0;}
int Funcio_p () { printf ("p"); return 0;}
int Funcio_q () { printf ("q"); return 0;}
int Funcio_r () { printf ("r"); return 0;}
int Funcio_s () { printf ("s"); return 0;}
int Funcio_t () { printf ("t"); return 0;}
int Funcio_u () { printf ("u"); return 0;}
int Funcio_v () { printf ("v"); return 0;}
int Funcio_w () { printf ("w"); return 0;}
int Funcio_x () { printf ("x"); return 0;}
int Funcio_y () { printf ("y"); return 0;}
int Funcio_z () { printf ("z"); return 0;}

int Funcio_A () { printf ("A"); return 0;}
int Funcio_B () { printf ("B"); return 0;}
int Funcio_C () { printf ("C"); return 0;}
int Funcio_D () { printf ("D"); return 0;}
int Funcio_E () { printf ("E"); return 0;}
int Funcio_F () { printf ("F"); return 0;}
int Funcio_G () { printf ("G"); return 0;}
int Funcio_H () { printf ("H"); return 0;}
int Funcio_I () { printf ("I"); return 0;}
int Funcio_J () { printf ("J"); return 0;}
int Funcio_K () { printf ("K"); return 0;}
int Funcio_L () { printf ("L"); return 0;}
int Funcio_M () { printf ("M"); return 0;}
int Funcio_N () { printf ("N"); return 0;}
int Funcio_O () { printf ("O"); return 0;}
int Funcio_P () { printf ("P"); return 0;}
int Funcio_Q () { printf ("Q"); return 0;}
int Funcio_R () { printf ("R"); return 0;}
int Funcio_S () { printf ("S"); return 0;}
int Funcio_T () { printf ("T"); return 0;}
int Funcio_U () { printf ("U"); return 0;}
int Funcio_V () { printf ("V"); return 0;}
int Funcio_W () { printf ("W"); return 0;}
int Funcio_X () { printf ("X"); return 0;}
int Funcio_Y () { printf ("Y"); return 0;}
int Funcio_Z () { printf ("Z"); return 0;}
int /* standard error */
definitionMatriu ()
{
	vectorFuncions[0][0]	= Funcio_a;
	vectorFuncions[0][1]	= Funcio_b;
	vectorFuncions[0][2]	= Funcio_c;
	vectorFuncions[0][3]	= Funcio_d;
	vectorFuncions[0][4]	= Funcio_e;
	vectorFuncions[0][5]	= Funcio_f;
	vectorFuncions[0][6]	= Funcio_g;
	vectorFuncions[0][7]	= Funcio_h;
	vectorFuncions[0][8]	= Funcio_i;
	vectorFuncions[0][9]	= Funcio_j;
	vectorFuncions[0][10]	= Funcio_k;
	vectorFuncions[0][11]	= Funcio_l;
	vectorFuncions[0][12]	= Funcio_m;
	vectorFuncions[0][13]	= Funcio_n;
	vectorFuncions[0][14]	= Funcio_o;
	vectorFuncions[0][15]	= Funcio_p;
	vectorFuncions[0][16]	= Funcio_q;
	vectorFuncions[0][17]	= Funcio_r;
	vectorFuncions[0][18]	= Funcio_s;
	vectorFuncions[0][19]	= Funcio_t;
	vectorFuncions[0][20]	= Funcio_u;
	vectorFuncions[0][21]	= Funcio_v;
	vectorFuncions[0][22]	= Funcio_w;
	vectorFuncions[0][23]	= Funcio_x;
	vectorFuncions[0][24]	= Funcio_y;
	vectorFuncions[0][25]	= Funcio_z;

	vectorFuncions[1][0]	= Funcio_A;
	vectorFuncions[1][1]	= Funcio_B;
	vectorFuncions[1][2]	= Funcio_C;
	vectorFuncions[1][3]	= Funcio_D;
	vectorFuncions[1][4]	= Funcio_E;
	vectorFuncions[1][5]	= Funcio_F;
	vectorFuncions[1][6]	= Funcio_G;
	vectorFuncions[1][7]	= Funcio_H;
	vectorFuncions[1][8]	= Funcio_I;
	vectorFuncions[1][9]	= Funcio_J;
	vectorFuncions[1][10]	= Funcio_K;
	vectorFuncions[1][11]	= Funcio_L;
	vectorFuncions[1][12]	= Funcio_M;
	vectorFuncions[1][13]	= Funcio_N;
	vectorFuncions[1][14]	= Funcio_O;
	vectorFuncions[1][15]	= Funcio_P;
	vectorFuncions[1][16]	= Funcio_Q;
	vectorFuncions[1][17]	= Funcio_R;
	vectorFuncions[1][18]	= Funcio_S;
	vectorFuncions[1][19]	= Funcio_T;
	vectorFuncions[1][20]	= Funcio_U;
	vectorFuncions[1][21]	= Funcio_V;
	vectorFuncions[1][22]	= Funcio_W;
	vectorFuncions[1][23]	= Funcio_X;
	vectorFuncions[1][24]	= Funcio_Y;
	vectorFuncions[1][25]	= Funcio_Z;
return 0;
}

int main (void)
{
int i;
	definitionMatriu ();

	for (i = 0; i < 26; i++)
	{
		vectorFuncions[0][i] ();
		vectorFuncions[1][i] ();
	}

	printf ("\ntamany %u byts -i- %u", sizeof (vectorFuncions), sizeof (vectorFuncions[0]));

	printf ("\n");
return 0;
}
