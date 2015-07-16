/*#include <stdlib.h>
*/
#include "suma.h"

/* Fa una suma i retorna l'enter corresponent */
IR_enter/* Divertidament, penso que fer aixo a nivell ensamblador es molt mes facil que fer-ho amb c */
IR_enter_sumar_imutables (a, b)
	IR_enter a;
	IR_enter b;
{
	IR_enter *o; /* out */
	int i;

/* Init */
	if (a.size > b.size)
	{
		o	= &a;
		i	= b.size;
	}
	else
	{
		o	= &b;
		i	= a.size;
	}

	while (i-->=0)
	{
		o->digit[i] = a.digit[i] + b.digit[i];
	}

	return *o;
}
