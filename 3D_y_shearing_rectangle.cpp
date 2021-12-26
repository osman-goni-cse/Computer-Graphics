#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    float xa, ya, xb, yb;
    xa = 50, ya = 250, xb = 200, yb = 70;

    bar3d(xa, ya, xb, yb, 30, 1);

    float shy;

    printf("Enter shear factor along y-axis: ");
    scanf("%f", &shy);

    ya += (xa*shy);

    yb += (xb*shy);

    bar3d(xa, ya, xb, yb, 30, 1);

    getch();
    closegraph();

    return 0;
}
/*
shy = 2;
*/

