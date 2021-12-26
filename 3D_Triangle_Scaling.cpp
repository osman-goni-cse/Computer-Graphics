#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    float xa, ya, xb, yb, xc, yc;

    //xa = 100, ya = 200, xb = 250, yb = 50, xc = 400, yc = 200;
    xa = 150, ya = 250, xb = 300, yb = 100, xc = 450, yc = 250;

    outtextxy(xb, yb-30, "Before Scaling");
    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    float x = (xa + xb + xc) / 3.0;
    float y = (ya + yb + yc) / 3.0;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    float sx, sy;

    printf("Enter Scaling Factor: ");
    scanf("%f%f", &sx, &sy);

    xa *= sx;
    ya *= sy;
    xb *= sx;
    yb *= sy;
    xc *= sx;
    yc *= sy;

    setcolor(CYAN);

    outtextxy(xb, yb-30, "After Scaling");

    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    x = (xa + xb + xc) / 3.0;
    y = (ya + yb + yc) / 3.0;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    getch();
    closegraph();

    return 0;
}

/*
sx = 0.4
sy = 0.4
*/


