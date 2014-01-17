#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

#define MAXX getmaxx()
#define MAXY getmaxy()

int main()
{
	int gdriver = DETECT, gmode, poly1[10], poly2[10], angle, r1, r2, r3, r4, r5, a, b, ch, unit;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

	unit = MAXY / 18;

	r1 = sqrt(72) * unit;
	r2 = sqrt(40) * unit;
	r3 = sqrt(32) * unit;
	r4 = sqrt(16) * unit;
	r5 = sqrt(8) * unit;

	a = 320;
	b = 240;
	ch = 'S';

	angle = 90;

	while(ch != 'q')
	{
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

		rectangle(0, 0, MAXX, MAXY);
		setfillstyle(SOLID_FILL, DARKGRAY);
		fillpoly(5, poly1);
		line(poly1[0], poly1[1], poly2[0], poly2[1]);
		line(poly1[2], poly1[3], poly2[2], poly2[3]);
		line(poly1[4], poly1[5], poly2[4], poly2[5]);
		line(poly1[6], poly1[7], poly2[6], poly2[7]);
		setfillstyle(SOLID_FILL, LIGHTGRAY);
		fillpoly(5, poly2);
//		delay(200);
		switch(getch())
		{
			case 77:  	angle++;
					break;

			case 75:  	angle--;
					break;

			case 113:	ch = 'q';
					break;
		}
		cleardevice();
	}
	closegraph();
	return 0;
}