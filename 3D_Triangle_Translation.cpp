#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int xa, ya, xb, yb, xc, yc;

    xa = 100, ya = 200, xb = 250, yb = 50, xc = 400, yc = 200;

    outtextxy(200, 20, "Before Translation");

    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    int x = (xa + xb + xc) / 3;
    int y = (ya + yb + yc) / 3;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    int tx, ty;

    printf("Enter Translation Factor: ");
    scanf("%d%d", &tx, &ty);

    xa += tx;
    ya += ty;
    xb += tx;
    yb += ty;
    xc += tx;
    yc += ty;

    setcolor(CYAN);

    outtextxy(xb-50, yb-20, "After Translation");

    line(xa, ya, xb, yb);
    line(xa, ya, xc, yc);
    line(xb, yb, xc, yc);

    x = (xa + xb + xc) / 3;
    y = (ya + yb + yc) / 3;

    line(xa, ya, x, y);
    line(xb, yb, x, y);
    line(xc, yc, x, y);

    getch();
    closegraph();

    return 0;
}

/*
tx = 100
ty = 200
*/

