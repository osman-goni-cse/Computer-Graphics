#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
	int gm, gd = DETECT;
	int x1, y1, x2, y2, x3, y3;

	x1 = 150, y1 = 150, x2 = 200, y2 = 200, x3 = 250, y3 = 150;

	//x1 = 50, y1 = 100, x2 = 0, y2 = 200, x3 = 100, y3 = 200;

	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cleardevice();

	line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
	line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

//	outtextxy(getmaxx() / 2 + x1, getmaxy() / 2 + y1, "(150, 150)");
//	outtextxy(getmaxx() / 2 + x1, getmaxy() / 2 - y1, "(150, -150)");
//	outtextxy(getmaxx() / 2 - x1, getmaxy() / 2 + y1, "(-150, 150)");
//	outtextxy(getmaxx() / 2 - x1, getmaxy() / 2 - y1, "(-150, -150)");

	delay(1000);
	setcolor(14);
	outtextxy(x1, y1-30, ("Before Reflection"));
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);


//	delay(1000);
//	setcolor(4);
//	//outtextxy(getmaxx() - x1, getmaxy() - y1, "origin");
//	line(getmaxx() - x1, getmaxy() - y1, getmaxx() - x2, getmaxy() - y2);
//	line(getmaxx() - x2, getmaxy() - y2, getmaxx() - x3, getmaxy() - y3);
//	line(getmaxx() - x3, getmaxy() - y3, getmaxx() - x1, getmaxy() - y1);

	delay(1000);
	setcolor(3);

    outtextxy(getmaxx() - x1 - 100, y1-30, ("After Reflection along x-axis"));
	line(getmaxx() - x1, y1, getmaxx() - x2, y2);
	line(getmaxx() - x2, y2, getmaxx() - x3, y3);
	line(getmaxx() - x3, y3, getmaxx() - x1, y1);

	delay(1000);
	setcolor(2);

	outtextxy(x1-100, getmaxy() - y1+30, "After Reflection along y-axis");
	line(x1, getmaxy() - y1, x2, getmaxy() - y2);
	line(x2, getmaxy() - y2, x3, getmaxy() - y3);
	line(x3, getmaxy() - y3, x1, getmaxy() - y1);

	getch();
	closegraph();

	return 0;
}
