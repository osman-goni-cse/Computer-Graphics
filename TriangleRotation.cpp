#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	int xa, ya, xb, yb, xc, yc;
	xa = 350, ya = 100, xb = 350, yb = 200;
	xc = 500, yc = 200;

    outtextxy(xa, ya-20, "Before Rotation");
	line(xa, ya, xb, yb);
	line(xb, yb, xc, yc);
	line(xc, yc, xa, ya);

	float ang;
	printf("Enter Rotation Angle: ");
	scanf("%f", &ang);

	ang = (ang*3.1416)/180;

	xa = xa * cos(ang) - ya * sin(ang);
	xb = xb * cos(ang) - yb * sin(ang);
	xc = xc * cos(ang) - yc * sin(ang);

	ya = xa * cos(ang) + ya * sin(ang);
	yb = xb * cos(ang) + yb * sin(ang);
	yc = xc * cos(ang) + yc * sin(ang);

	delay(1000);

	setcolor(CYAN);

	outtextxy(xa, ya - 20, "After Rotation");
	line(xa, ya, xb, yb);
	line(xb, yb, xc, yc);
	line(xc, yc, xa, ya);

	getch();
	closegraph();

	return 0;
}
