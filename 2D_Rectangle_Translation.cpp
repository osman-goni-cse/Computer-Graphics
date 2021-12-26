#include <stdio.h>
#include <graphics.h>

void translateRectangle ( int P[][2], int T[])
{
	int gd = DETECT, gm, errorcode;
	initgraph (&gd, &gm, "c:\\tc\\bgi");
	setcolor (2);

	rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);

	P[0][0] = P[0][0] + T[0];
	P[0][1] = P[0][1] + T[1];
	P[1][0] = P[1][0] + T[0];
	P[1][1] = P[1][1] + T[1];

	delay(1000);
	rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
	delay(1000);
    closegraph();
}

int main()
{
	int P[2][2] = {50, 80, 120, 180};
	int T[] = {2, 1};
	translateRectangle (P, T);
	return 0;
}
