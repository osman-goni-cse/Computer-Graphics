#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int xa, ya, xb, yb, xc, yc, sx, sy;

void drawTriangle()
{
    line(xa, ya, xb, yb);
    line(xb, yb, xc, yc);
    line(xc, yc, xa, ya);
}

int main()
{
    printf("Enter the 1st point for the triangle:");
    scanf("%d%d", &xa, &ya);

    printf("Enter the 2nd point for the triangle:");
    scanf("%d%d", &xb, &yb);

    printf("Enter the 3rd point for the triangle:");
    scanf("%d%d", &xc, &yc);

    printf("Enter Scaling Factor: ");
    scanf("%d%d", &sx, &sy);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy(xa-10, ya-15, "Before Scaling");
    drawTriangle();

    xa = xa*sx; ya = ya*sy;
    xb = xb*sx; yb = yb*sy;
    xc = xc*sx; yc = yc*sy;

    setcolor(GREEN);
    outtextxy(xa-15, ya-15, "After Scaling");
    drawTriangle();

    getch();
    closegraph();

    return 0;
}

/*
80 80
30 130
130 130
2 2
*/

