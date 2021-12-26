#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    float xa, ya, xb, yb, xc, yc;

    xa = 100, ya = 200, xb = 250, yb = 50, xc = 400, yc = 200;


    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    float x = (xa + xb + xc) / 3.0;
    float y = (ya + yb + yc) / 3.0;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    float shy;

    printf("Enter Shear Factor along y-axis: ");
    scanf("%f", &shy);

    ya += (xa*shy);

    yb += (xb*shy);

    yc += (xc*shy);

    setcolor(BLUE);

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
shy = 0.8
*/




