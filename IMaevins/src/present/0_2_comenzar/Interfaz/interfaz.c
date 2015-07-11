#include <curses.h>

WINDOW *wnd;
struct {int x, y;} max, write;

void
Init_interfaz ()
{
	/*write{0, 0};*/write.x=0;write.y=0;
	move (write.x, write.y);
	wnd	= initscr ();		/* Curses call to initialize windows */
/*	init_pair
	init_color*//* Init diferents que te el curses*/

	cbreak ();			/* No espera Enter */
	noecho ();			/* Curses call to set no echoing */
	getmaxyx(wnd, max.x, max.y);	/* Curses call to find size of window */
	clear  (); /* Netejem pantalla */
	refresh(); /* Mostrem */
}

char /* Teclat prensat */
Read_Key () { return getch(); }

void End_interfaz () {
int x, y;
printw
(" Adeu Inteto descobrir basicament si aixo peta quan escrius exesivament i teoricament t'hauries de sortir de la mateixa pantalla o no es aixi. Si noteu que escric massa nomes es per descobrir-ho");
getyx (wnd, x, y);
move (x+2, 0);
printw ("Estem a %d, %d", x, y);
getch(); endwin(); }


void addChar (e)
	char e; /* Caracter que se vol introduir */
{
	delch();  insch(e);  /* curses calls to replace character under cursor by dc */
	if (++write.y == max.y)
	{
		write.y = 0; write.x++;
	}
	move (write.x, write.y);
}
