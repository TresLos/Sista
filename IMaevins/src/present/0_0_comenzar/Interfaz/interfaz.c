#include <curses.h>  // required

WINDOW *wnd;
struct
{
	int x, y;
} windows, cituation;

void
init_Interfaze ()
{
	cituation.x = 0;
	cituation.y = 0;
	wnd = initscr();	// curses call to initialize window
	cbreak ();		// no espera Enter
	noecho();  // curses call to set no echoing
	getmaxyx(wnd, windows.x, windows.y);  // curses call to find size of window
	clear();  // curses call to clear screen, send cursor to position (0,0)
	refresh();  // curses call to implement all changes since last refresh
}
