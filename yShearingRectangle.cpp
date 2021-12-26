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

    printf("Enter Shear factor shy along y-axis: ");
    scanf("%f", &shy);

    outtextxy(xa, ya-15, "Before Shearing");
    drawRectangle();

    delay(500);

    ya = ya + (shy*xa);
    yb = yb + (shy*xb);
    yc = yc + (shy*xc);
    yd = yd + (shy*xd);

    outtextxy(xa, ya-15, "After Shearing");
    setcolor(GREEN);
    drawRectangle();

    getch();

    return 0;
}
/*

shy = 2

*/
