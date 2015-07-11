#include <curses.h>  // required

struct Windows
{
int r,c,  // current row and column (upper-left is (0,0))
    nrows,  // number of rows in window
    ncols;  // number of columns in window
} cnt;


int main ()
{
	WINDOW *wnd;

	wnd = initscr();  // curses call to initialize window
	cbreak (); // no espera Enter
	getmaxyx(wnd, cnt.nrows,cnt.ncols);  // curses call to find size of window
	move (4, 4);
	printw ("%d, %d", cnt.nrows, cnt.ncols);

	getch ();

	endwin ();
return 0;
}
