#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    float xa, ya, xb, yb, xc, yc;

    //xa = 100, ya = 200, xb = 250, yb = 50, xc = 400, yc = 200;
    xa = 50, ya = 200, xb = 200, yb = 50, xc = 300, yc = 200;

    outtextxy(xa, 20, "Before Shearing");
    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    float x = (xa + xb + xc) / 3.0;
    float y = (ya + yb + yc) / 3.0;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    float shx, shy, x1, x2, x3, y1, y2, y3;

    printf("Enter Shear Factor along x-axis: ");
    scanf("%f", &shx);
    printf("Enter Shear Factor along y-axis: ");
    scanf("%f", &shy);

    x1 = xa + (ya*shx);

    x2 = xb + (yb*shx);

    x3 = xc + (yc*shx);

    setcolor(BLUE);

    outtextxy(x1, 20, "After Shearing along x-axis");
    line(x1, ya, x2, yb);
    line(x1, ya, x3, yc);
    line(x2, yb, x3, yc);

    x = (x1 + x2 + x3) / 3.0;
    y = (ya + yb + yc) / 3.0;

    line(x1, ya, x, y);
    line(x2, yb, x, y);
    line(x3, yc, x, y);

    ya += (xa*shy);

    yb += (xb*shy);

    yc += (xc*shy);

    setcolor(CYAN);

    outtextxy(xa, ya-20, "After Shearing along y-axis");

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
shx = 1.5
*/




