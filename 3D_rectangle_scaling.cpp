#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int xa, ya, xb, yb, sx, sy, sz;

    printf("Enter Bottom-Left point of Rectangle: ");
    scanf("%d%d", &xa, &ya);

    printf("Enter Top-Right point of Rectangle: ");
    scanf("%d%d", &xb, &yb);

    printf("Enter Scaling Factor: ");
    scanf("%d%d%d", &sx, &sy, &sz);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy(20, 30, "Before Scaling");
    bar3d(xa, ya, xb, yb, 30, 1);
    delay(3000);

    xa *= sx;
    ya *= sy;
    xb *= sx;
    yb *= sy;

    setcolor(CYAN);
    outtextxy(xa, ya-80, "After Scaling");

    bar3d(xa, ya, xb, yb, 30*sz, 1);

    getch();
    closegraph();

    return 0;
}
/*
50 70
80 90
3 3 3
*/

