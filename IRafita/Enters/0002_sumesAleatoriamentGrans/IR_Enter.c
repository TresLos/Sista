#include <stdlib.h>
#include <stdio.h>

#include "IR_Enter.h"

IR_Enter /* El resultat de la suma corresponent */
IR_Enter_sumar_imutables (ea, eb)
	IR_Enter ea; /* valors d'entrada */
	IR_Enter eb; /* valors d'entrada */
{
	IR_Enter o; /* output */
	unsigned char ta, tb, to;
	int max, min, index;
	unsigned char *digitLong;
	if ( ea.size < eb.size )
	{	max = eb.size;
		min = ea.size;
		digitLong = eb.digit;
	} else
	{	max = ea.size;
		min = eb.size;
		digitLong = ea.digit;
	}

/* Per si acas demanarem un de mes gran que el que entren */
	o.digit = (unsigned char *) malloc ((max + 1) * sizeof (unsigned char));

	to = 0; /* inicialitzem el to */

	for (index = 0; index < min; index++)
	{
		ta = ea.digit[index]; tb = eb.digit[index];
/* BABA 
M'agradaria poder fer una suma que canvii depenent dels byts que hi hagi en cas.
Per poder fer aixo hauriem de coneixer serts parametres abans.
Quines sumes diferents tenim poder de fer.
	Si mai ho fem, com ho fem per definir correctament la sortida?
			A priori tot tribial :)
*/
		to += ta + tb;
		o.digit[index] = to; /* enmagatzemada la informacio */
		if ((to < ta) | (to < tb)) to = 1; /* en portem una */
		else to = 0; /* Reiniciem el valor de to */
	}


/* cas estrany, mes gran que els seus 2 pares */
	if (to)
	{
/* Ja em acabat la suma principal, pero el carry es possitiu */
		while (to & (index < max)) /* No tinc clar de si l'index esta correcte */
		{
			ta = digitLong[index];
			to += ta;
			o.digit[index++] = to;
			if (to < ta) to = 1;
			else to = 0;
		}

		if (to)
		{
			o.digit[max] = 1;
			o.size = max +1;
		}
		else
		{
			while (index < max)
			{
				o.digit[index] = digitLong[index];
				index++;
			}
			o.size = max;
		}
	}
	else
	{
/* Ja em acabat totes les sumes i carrys, netejem si necessari el fenomen de guardar tot en memoria */
		while (index < max)
		{
			o.digit[index] = digitLong[index];
			index++;
		}
		o.size = max;
	}


return o;
}

void
IR_Enter_Show (e)
	IR_Enter e; /* la entrada oficial */
{
	int index;
	printf ("\n%c\n", e.size + '0');

	for (index = 0; index < e.size; index++)
		printf (", %c", e.digit[index]);
	printf ("\n, %d\n", *e.digit);
}

void
IR_Enter_Init (e)
	IR_Enter e;
{
	e.size = 0;
	e.digit = NULL;

/*	e.IR_Enter_sumar_imutables = C_IR_Enter_sumar_imutables;
	e.IR_Enter_Show = C_IR_Enter_Show;*/
}
