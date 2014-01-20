#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

#define MAXX getmaxx()
#define MAXY getmaxy()

//#define DOTEXT
#define NEW

void rot1(int angle)
{
	int poly1[10], poly2[10], r1, r2, r3, a, b, unit;

	unit = MAXY / 16;

	r1 = 3 * sqrt(2) * unit;
	r2 = sqrt(10) * unit;
	r3 = sqrt(2) * unit;

	a = 320;
	b = 120;

	poly1[0] = r1 * cos((angle + 135) / 57.3) + a;
	poly1[1] = r1 * sin((angle + 135) / 57.3) + b;

	poly1[2] = r2 * cos((angle + 71.56) / 57.3) + a;
	poly1[3] = r2 * sin((angle + 71.56) / 57.3) + b;

	poly1[4] = r3 * cos((angle - 45) / 57.3) + a;
	poly1[5] = r3 * sin((angle - 45) / 57.3) + b;

	poly1[6] = r2 * cos((angle - 161.56) / 57.3) + a;
	poly1[7] = r2 * sin((angle - 161.56) / 57.3)+ b;

	poly1[8] = poly1[0];
	poly1[9] = poly1[1];



	poly2[0] = r3 * cos((angle + 135) / 57.3) + a;
	poly2[1] = r3 * sin((angle + 135) / 57.3) + b;

	poly2[2] = r2 * cos((angle + 18.43) / 57.3) + a;
	poly2[3] = r2 * sin((angle + 18.43) / 57.3) + b;

	poly2[4] = r1 * cos((angle - 45) / 57.3) + a;
	poly2[5] = r1 * sin((angle - 45) / 57.3) + b;

	poly2[6] = r2 * cos((angle - 108.43) / 57.3) + a;
	poly2[7] = r2 * sin((angle - 108.43) / 57.3)+ b;

	poly2[8] = poly2[0];
	poly2[9] = poly2[1];

	setfillstyle(SOLID_FILL, BLUE);
	setcolor(YELLOW);
	fillpoly(5, poly1);
	line(poly1[0], poly1[1], poly2[0], poly2[1]);
	line(poly1[2], poly1[3], poly2[2], poly2[3]);
	line(poly1[4], poly1[5], poly2[4], poly2[5]);
	line(poly1[6], poly1[7], poly2[6], poly2[7]);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	fillpoly(5, poly2);

#ifdef NEW
	setcolor(BLACK);
	line(poly1[2], poly1[3], poly2[2], poly2[3]);
	line(poly1[6], poly1[7], poly2[6], poly2[7]);
	line(poly2[2], poly2[3], poly2[4], poly2[5]);
	line(poly1[6], poly1[7], poly1[0], poly1[1]);
	line(poly1[2], poly1[3], poly1[0], poly1[1]);
	line(poly2[4], poly2[5], poly2[6], poly2[7]);
	setlinestyle(DOTTED_LINE, 1, 1);
	setcolor(YELLOW);
	line(poly1[2], poly1[3], poly2[2], poly2[3]);
	line(poly1[6], poly1[7], poly2[6], poly2[7]);
	line(poly2[2], poly2[3], poly2[4], poly2[5]);
	line(poly1[6], poly1[7], poly1[0], poly1[1]);
	line(poly1[2], poly1[3], poly1[0], poly1[1]);
	line(poly2[4], poly2[5], poly2[6], poly2[7]);
	setlinestyle(SOLID_LINE, 1, 1);
#endif
}

void rot2(int angle)
{
	int poly1[10], poly2[10], r1, r2, r3, r4, r5, a, b, unit;
	unit = MAXY / 24;

	r1 = sqrt(72) * unit;
	r2 = sqrt(40) * unit;
	r3 = sqrt(32) * unit;
	r4 = sqrt(16) * unit;
	r5 = sqrt(8) * unit;

	a = 160;
	b = 320;

	poly1[0] = r1 * cos((angle + 135) / 57.3) + a;
	poly1[1] = r1 * sin((angle + 135) / 57.3) + b;

	poly1[2] = r2 * cos((angle + 108.43) / 57.3) + a;
	poly1[3] = r2 * sin((angle + 108.43) / 57.3) + b;

	poly1[4] = r5 * cos((angle + 135) / 57.3) + a;
	poly1[5] = r5 * sin((angle + 135) / 57.3) + b;

	poly1[6] = r2 * cos((angle + 161.56) / 57.3) + a;
	poly1[7] = r2 * sin((angle + 161.56) / 57.3)+ b;

	poly1[8] = poly1[0];
	poly1[9] = poly1[1];


	poly2[0] = r3 * cos((angle + 135) / 57.3) + a;
	poly2[1] = r3 * sin((angle + 135) / 57.3) + b;

	poly2[2] = r4 * cos((angle + 90) / 57.3) + a;
	poly2[3] = r4 * sin((angle + 90) / 57.3) + b;

	poly2[4] = 0 + a;
	poly2[5] = 0 + b;

	poly2[6] = r4 * cos((angle + 180) / 57.3) + a;
	poly2[7] = r4 * sin((angle + 180) / 57.3)+ b;

	poly2[8] = poly2[0];
	poly2[9] = poly2[1];

	setfillstyle(SOLID_FILL, RED);
	fillpoly(5, poly1);
	line(poly1[0], poly1[1], poly2[0], poly2[1]);
	line(poly1[2], poly1[3], poly2[2], poly2[3]);
	line(poly1[4], poly1[5], poly2[4], poly2[5]);
	line(poly1[6], poly1[7], poly2[6], poly2[7]);
	setfillstyle(SOLID_FILL, LIGHTRED);
	fillpoly(5, poly2);
}

void rot3(int angle)
{
	int poly1[10], poly2[10], r3, r4, a, b, unit;
	unit = MAXY / 24;

	r3 = sqrt(32) * unit;
	r4 = sqrt(16) * unit;

	a = 510;
	b = 320;

	poly1[0] = r3 * cos((angle + 135) / 57.3) + a - unit;
	poly1[1] = r3 * sin((angle + 135) / 57.3) + b - unit;

	poly1[2] = r4 * cos((angle + 90) / 57.3) + a - unit;
	poly1[3] = r4 * sin((angle + 90) / 57.3) + b - unit;

	poly1[4] = 0 + a - unit;
	poly1[5] = 0 + b - unit;

	poly1[6] = r4 * cos((angle + 180) / 57.3) + a - unit;
	poly1[7] = r4 * sin((angle + 180) / 57.3)+ b - unit;

	poly1[8] = poly1[0];
	poly1[9] = poly1[1];


	poly2[0] = r3 * cos((angle + 135) / 57.3) + a + unit;
	poly2[1] = r3 * sin((angle + 135) / 57.3) + b + unit;

	poly2[2] = r4 * cos((angle + 90) / 57.3) + a + unit;
	poly2[3] = r4 * sin((angle + 90) / 57.3) + b + unit;

	poly2[4] = 0 + a + unit;
	poly2[5] = 0 + b + unit;

	poly2[6] = r4 * cos((angle + 180) / 57.3) + a + unit;
	poly2[7] = r4 * sin((angle + 180) / 57.3)+ b + unit;

	poly2[8] = poly2[0];
	poly2[9] = poly2[1];

	setfillstyle(SOLID_FILL, GREEN);
	fillpoly(5, poly1);
	line(poly1[0], poly1[1], poly2[0], poly2[1]);
	line(poly1[2], poly1[3], poly2[2], poly2[3]);
	line(poly1[4], poly1[5], poly2[4], poly2[5]);
	line(poly1[6], poly1[7], poly2[6], poly2[7]);
	setfillstyle(SOLID_FILL, LIGHTGREEN);
	fillpoly(5, poly2);
}

void rotate(int angle)
{
	char text[25];
	sprintf(text, "Rotation angle: %d%c", angle%360, 248);
	setcolor(WHITE);
	cleardevice();
#ifdef DOTEXT

	settextjustify(1, 2);
	settextstyle(1, 0, 1);
	outtextxy(MAXX / 2, MAXY / 2 - 20, "Rotation about Centroid");
	settextstyle(1, 0, 1);
	outtextxy(MAXX / 4, MAXY - 30, "Rotation about a Corner");
	settextstyle(1, 0, 1);
	outtextxy(MAXX / 4 * 3, MAXY - 30, "Rotation about an Edge");
	settextstyle(3, 0, 1);
	outtextxy(MAXX / 2, MAXY * 2 / 3, text);
#endif
	rectangle(0, 0, MAXX, MAXY);
	rot1(angle);
	rot2(angle);
	rot3(angle);
}

int main()
{
	int gdriver = DETECT, gmode, angle;
	char ch = 'n';
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

	angle = 0;
	while(ch != 'q')
	{
		switch(getch())
		{
			case 77:  	angle++;
					rotate(angle);
					break;

			case 75:  	angle--;
					rotate(angle);
					break;

			case 113:	ch = 'q';
					break;
		}
	}
	closegraph();
	return 0;
}
