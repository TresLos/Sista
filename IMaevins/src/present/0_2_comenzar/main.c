#include "Interfaz/interfaz.h"
//#include "Modes/modes.h"

int
main ()
{
	Init_interfaz	();
	Init_modes	();

	Read_Key	();

	End_interfaz	();
return 0;
}
