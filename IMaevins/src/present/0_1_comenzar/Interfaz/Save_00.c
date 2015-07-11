/* Aquest funciona be :) */
#include <curses.h>

WINDOW *wnd;
int x, y;

void
Init_interfaz ()
{
	wnd	= initscr ();		/* Curses call to initialize windows */
/*	init_pair
	init_color*//* Init diferents que te el curses*/

	cbreak ();			/* No espera Enter */
	noecho ();			/* Curses call to set no echoing */
	getmaxyx(wnd, x, y);		/* Curses call to find size of window */
	clear  (); /* Netejem pantalla */
	refresh(); /* Mostrem */
}
