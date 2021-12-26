#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int xa = 100, ya = 100, xb = 100, yb = 200;
int xc = 200, yc = 200, xd = 200, yd = 100;

void drawRectangle()
{
    line(xa, ya, xb, yb);
    line(xb, yb, xc, yc);
    line(xc, yc, xd, yd);
    line(xd, yd, xa, ya);
}

int main()
{
    int gd = DETECT, gm;
    float shx, shy;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter Shear factor shx along x-axis: ");
    scanf("%f", &shx);

    outtextxy(xa, ya-15, "Before Shearing");
    drawRectangle();

    delay(500);

    xa = xa + (shx*ya);
    xb = xb + (shx*yb);
    xc = xc + (shx*yc);
    xd = xd + (shx*yd);

    outtextxy(xa, ya-15, "After Shearing");
    setcolor(GREEN);
    drawRectangle();

    getch();

    return 0;
}
/*

shx = 2

*/
