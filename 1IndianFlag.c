#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

#define MAXX getmaxx()
#define MAXY getmaxy()

int main()
{
	int gdriver = DETECT, gmode, h, w, marginx, marginy, shift = 0, i;
	struct linesettingstype style;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

	if(MAXX > MAXY)
	{
		h = MAXY / 4;
		w = MAXY ;
		marginx = (MAXX - w) / 2;
		marginy = MAXY / 8;
	}
	else
	{
		w = 8 * MAXX / 10;
		h = w / 4;
		marginx = MAXX / 10;
		marginy = (MAXY - h) / 2;
	}

//	printf("MAXX = %d, MAXY = %d, w = %d, h = %d, mx = %d, my = %d", MAXX, MAXY, w, h, marginx, marginy);

	setfillstyle(SOLID_FILL, LIGHTRED);
	bar(marginx, marginy, marginx + w, marginy + h);
	setfillstyle(SOLID_FILL, WHITE);
	bar(marginx, marginy + h, marginx + w, marginy + 2*h);
	setfillstyle(SOLID_FILL, GREEN);
	bar(marginx, marginy + 2*h, marginx + w, marginy + 3*h);

	setcolor(BLUE);
	getlinesettings( &style );
	style.thickness += 2;
	setlinestyle(style.linestyle, style.upattern, style.thickness);
	circle(MAXX / 2, MAXY / 2 - 2, h / 2);

	while(!kbhit())
	{
		setfillstyle(SOLID_FILL, WHITE);
		bar(marginx, marginy + h, marginx + w, marginy + 2*h);
		circle(MAXX / 2, MAXY / 2 - 2, h / 2);
		for(i = 0; i < 24; i++)
			pieslice(MAXX / 2, MAXY / 2 - 2, shift + 15*i, shift+1 + 15*i, h / 2);
		shift += 8;
//		getch();
		delay(200);
	}

	getch();
	closegraph();
	return 0;
}