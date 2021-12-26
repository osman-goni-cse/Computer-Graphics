#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    float xa, ya, xb, yb;
    xa = 50, ya = 150, xb = 200, yb = 70;

    //rectangle(xa, ya, xb, yb); // bottom left, top right

    bar3d(xa, ya, xb, yb, 30, 1);

    float shx;

    printf("Enter shear factor along x-axis: ");
    scanf("%f", &shx);

    xa += (ya*shx);

    xb += (yb*shx);

    bar3d(xa, ya, xb, yb, 30*shx, 1);


    getch();
    closegraph();

    return 0;
}
/*
shx = 2;
*/
