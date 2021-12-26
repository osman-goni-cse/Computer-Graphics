#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy(50, 60, "Before Translation");
    line(50, 150, 120, 70);

    int tx = 155, ty = 55;

    setcolor(CYAN);

    outtextxy(50+tx, 60+ty, "After Translation");
    line(50+tx, 150+ty, 120+tx, 70+ty);

    getch();
    closegraph();

    return 0;
}
