/* 3D-Rectangle Translation */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int xa, ya, xb, yb, tx, ty;

    printf("Enter Bottom-Left point of Rectangle: ");
    scanf("%d%d", &xa, &xb);

    printf("Enter Top-Right point of Rectangle: ");
    scanf("%d%d", &xb, &yb);

    printf("Enter Translation Factor: ");
    scanf("%d%d", &tx, &ty);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    bar3d(xa, ya, xb, yb, 30, 1);
    delay(3000);

    xa += tx;
    ya += ty;
    xb += tx;
    yb += ty;

    bar3d(xa, ya, xb, yb, 30  , 1);
    delay(3000);

    /*
    for(int i = 0, k = 0; i < 100; i+=10, k++) {
        setcolor(RED);
        bar3d(xa, ya, xb, yb, i, k%2);
        delay(1000);
        cleardevice();
    }
    */

    return 0;
}
/*
50 70
80 90
50 60
*/
