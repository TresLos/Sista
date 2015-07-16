#include <stdio.h>
#include <stdlib.h>
#include "suma.h"


int
main ()
{
	int i;
	IR_enter a, b, c;

	a.size = 4;
	b.size = 4;
	a.digit= (char *) malloc (a.size);
	b.digit= (char *) malloc (b.size);

	a.digit[0] = 4;
	a.digit[1] = 3;
	a.digit[2] = 7;
	a.digit[3] = 1;
	b.digit[0] = '0';
	b.digit[1] = '0';
	b.digit[2] = '0';
	b.digit[3] = '0';

	c = IR_enter_sumar_imutables (a, b);

	for (i = c.size -1; i >= 0; i--)
		printf ("%c ", c.digit[i]);

	printf ("\n");



return 0;
}
