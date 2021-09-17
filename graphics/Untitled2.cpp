// C++ Implementation for drawing line
#include <graphics.h>

// driver code
int main()
{

	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");
	setcolor(RED);
	circle(200,200,100);
	outtextxy(200,200,"circle");
	moveto(300,300);
	outtext("function");
	getch();
	closegraph();

	line(150, 150, 450, 150);
	line(150, 200, 450, 200);

	line(150, 250, 450, 250);

	getch();


	closegraph();
}


