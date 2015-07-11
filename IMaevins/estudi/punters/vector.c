#include <stdio.h>
/*
Ho fem amb 26 perque es el teclat 'normal' d'abecedari
*/

/* Definim el vector de punters */
int (*vectorFuncions[26])(void);

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

int /* standard error */
definitionVector ()
{
	vectorFuncions[0]	= Funcio_a;
	vectorFuncions[1]	= Funcio_b;
	vectorFuncions[2]	= Funcio_c;
	vectorFuncions[3]	= Funcio_d;
	vectorFuncions[4]	= Funcio_e;
	vectorFuncions[5]	= Funcio_f;
	vectorFuncions[6]	= Funcio_g;
	vectorFuncions[7]	= Funcio_h;
	vectorFuncions[8]	= Funcio_i;
	vectorFuncions[9]	= Funcio_j;
	vectorFuncions[10]	= Funcio_k;
	vectorFuncions[11]	= Funcio_l;
	vectorFuncions[12]	= Funcio_m;
	vectorFuncions[13]	= Funcio_n;
	vectorFuncions[14]	= Funcio_o;
	vectorFuncions[15]	= Funcio_p;
	vectorFuncions[16]	= Funcio_q;
	vectorFuncions[17]	= Funcio_r;
	vectorFuncions[18]	= Funcio_s;
	vectorFuncions[19]	= Funcio_t;
	vectorFuncions[20]	= Funcio_u;
	vectorFuncions[21]	= Funcio_v;
	vectorFuncions[22]	= Funcio_w;
	vectorFuncions[23]	= Funcio_x;
	vectorFuncions[24]	= Funcio_y;
	vectorFuncions[25]	= Funcio_z;
return 0;
}

int main (void)
{
int i;
	definitionVector ();

	for (i = 0; i < 26; i++)
		vectorFuncions[i] ();

	printf ("\n");
return 0;
}
