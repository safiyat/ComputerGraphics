#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

#define MAXX getmaxx()
#define MAXY getmaxy()

void l(int x0, int y0, int xn, int yn, int thick)
{
	int i;
	float m, y, x;
	m = ((float)yn - y0) / (xn - x0);

	x = x0;
	y = y0;
	thick /= 2;
	while(x <= xn)
	{
		for(i = -thick; i < thick; i++)
		{
			putpixel(x+i, y+i, WHITE);
		}
		x++;
		y += m;
	}
}

int main()
{
	int gdriver = DETECT, gmode, x0, y0, x, xn, yn, i;
	float m, y;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	rectangle(0, 0, MAXX, MAXY);

	l(20, 20, 300, 300, 10);


	getch();
	closegraph();
	return 0;
}
