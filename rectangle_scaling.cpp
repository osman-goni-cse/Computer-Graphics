#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int xa, ya, xb, yb, sx, sy;

    printf("Enter Top Left Point: ");
    scanf("%d%d", &xa, &ya);

    printf("Enter Bottom Right Point: ");
    scanf("%d%d", &xb, &yb);

    printf("Enter Scaling Factor: ");
    scanf("%d%d", &sx, &sy);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy(xa-5, ya-15, "Before Scaling");
    rectangle(xa, ya, xb, yb);

    xa = xa*sx; ya = ya*sy;
    xb = xb*sx; yb = yb*sy;

    setcolor(GREEN);
    outtextxy(xa+5, ya-15, "After Scaling");
    rectangle(xa, ya, xb, yb);

    getch();
    closegraph();

    return 0;
}
/*
40 40
100 100
3 3
*/
