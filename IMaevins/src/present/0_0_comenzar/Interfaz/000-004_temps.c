#include <sys/time.h>
#include <curses.h>
#include <signal.h>

#define FPS 200

int hT;
int nrows, ncols;
int r, c;
int tuTemps;

/**
 * timer
 * this method is executed every 1 / FPS seconds  
 */
void handleTimer()
{
	if(hT++ == tuTemps)
	{
		refresh ();
	}else
	{
		move (r, c);
		if (++r == nrows)
		{
			r = 0;
			if (++c == ncols) c = 0;
		}
	}
}

/**
 * set up timer
 */
void setUpTimer()
{
	struct itimerval myTimer;
	struct sigaction myAction;
	myTimer.it_value.tv_sec = 0;
	myTimer.it_value.tv_usec = 1000000 / FPS;
	myTimer.it_interval.tv_sec = 0;
	myTimer.it_interval.tv_usec = 1000000 / FPS;
	setitimer(ITIMER_REAL, &myTimer, NULL);
	
	myAction.sa_handler = &handleTimer;
	myAction.sa_flags = SA_RESTART;
	sigaction(SIGALRM, &myAction, NULL);
}

int
main ()
{
	WINDOW *wnd;
	int i; char d;
	int cont;

	wnd = initscr	();  // curses call to initialize window
	cbreak		();  // curses call to set no waiting for Enter key
	noecho		();  // curses call to set no echoing
	getmaxyx	(wnd,nrows,ncols);  // curses call to find size of window
	clear		();  // curses call to clear screen, send cursor to position (0,0)
	refresh		();  // curses call to implement all changes since last refresh

	setUpTimer	();

	r = 0; c = 0;
	cont = 1;
	while (cont)
	{
		switch (getch ())
		{
		case 'q': cont = 0; break;
		default: break;
		}
/*		d = getch();  // curses call to input from keyboard
		if (d == 'q') break;  // quit?
		else if (d == 'm') {tuTemps += 20;}
		else if (d == 'n') {tuTemps -= 20;}
*/	}

	endwin();  // curses call to restore the original window and leave

return 0;
}
/*
	struct timespec tm;
	struct tetris t;
	char cmd;
	int count=0;
	tetris_set_ioconfig();
	tetris_init(&t, w, h);
	srand(time(NULL));

	tm.tv_sec=0;
	tm.tv_nsec=1000000;

	tetris_new_block(&t);
	while (!t.gameover) {
		nanosleep(&tm, NULL);
*/
