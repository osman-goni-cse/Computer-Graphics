#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int xa, ya, xb, yb, tx, ty;

    printf("Enter Top Left point: ");
    scanf("%d%d", &xa, &ya);

    printf("Enter Bottom Right point: ");
    scanf("%d%d", &xb, &yb);

    printf("Enter Translation Factor: ");
    scanf("%d%d", &tx, &ty);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy((xa+xb)/3, ya/2, "Before Translation");

    rectangle(xa, ya, xb, yb);

    xa += tx; ya += ty;
    xb += tx; yb += ty;

    setcolor(GREEN);

    delay(555);

    outtextxy(xa, (ya-15), "After Translation");

    rectangle(xa, ya, xb, yb);

    getch();
    closegraph();

    return 0;
}

/*
80 80
160 160
120 120

*/
