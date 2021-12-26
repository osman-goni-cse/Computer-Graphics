#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	int xa, ya, xb, yb, xc, yc, xd, yd;
	xa = 200, ya = 200, xb = 200, yb = 300;
	xc = 300, yc = 300, xd = 300, yd = 200;

    outtextxy(xa, ya - 20, "Before Rotation");
	line(xa, ya, xb, yb);
	line(xb, yb, xc, yc);
	line(xc, yc, xd, yd);
	line(xd, yd, xa, ya);

	float ang;

	printf("Enter Rotation Angle: ");
	scanf("%f", &ang);

	ang = (ang*3.1416)/180;

	xa = xa * cos(ang) - ya * sin(ang);
	ya = xa * cos(ang) + ya * sin(ang);
	xb = xb * cos(ang) - yb * sin(ang);
	yb = xb * cos(ang) + yb * sin(ang);
	xc = xc * cos(ang) - yc * sin(ang);
	yc = xc * cos(ang) + yc * sin(ang);
	xd = xd * cos(ang) - yd * sin(ang);
	yd = xd * cos(ang) + yd * sin(ang);

	delay(500);
	setcolor(CYAN);

	outtextxy(xa, ya-20, "After Rotation");
	line(xa, ya, xb, yb);
	line(xb, yb, xc, yc);
	line(xc, yc, xd, yd);
	line(xd, yd, xa, ya);

	getch();
	closegraph();

	return 0;
}

