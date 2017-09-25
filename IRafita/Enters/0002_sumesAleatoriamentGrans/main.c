#include <stdlib.h>

#include "IR_Enter.h"

int
main ()
{
	IR_Enter a, b, c;

	a.size = 2;
	b.size = 4;

	a.digit = (unsigned char *) malloc (2 * sizeof (unsigned char));
	b.digit = (unsigned char *) malloc (4 * sizeof (unsigned char));

	a.digit[0] = 200;
	a.digit[1] = 200;

	b.digit[0] = 100;
	b.digit[1] = 250;
	b.digit[2] = 255;
	b.digit[3] = 8;

	c = IR_Enter_sumar_imutables (a, b);

	IR_Enter_Show (c);


	free (a.digit);
	free (b.digit);
	free (c.digit);
return 0;
}
