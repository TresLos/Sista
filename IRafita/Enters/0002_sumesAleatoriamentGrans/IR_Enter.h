typedef struct
{	char size;
	unsigned char *digit;

} IR_Enter;
/*IR_Enter IR_Enter_sumar_imutables (IR_Enter, IR_Enter);*/

void IR_Enter_Init (IR_Enter);

/* Aquestos els volia dins de la mateixa estructura TT, no ho se fer */
IR_Enter IR_Enter_sumar_imutables (IR_Enter, IR_Enter);
void IR_Enter_Show (IR_Enter);
