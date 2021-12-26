#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int x, y, x1, y1, x2, y2;

void drawTriangle()
{
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
}

int main()
{
    int gd = DETECT, gm;
    float shx, shy;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter first point\n");
    scanf("%d%d", &x, &y);

    printf("Enter second point\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter third point\n");
    scanf("%d%d", &x2, &y2);

    printf("Enter shear factor along y-axis\n");
    scanf("%f", &shy);

    outtextxy(x+20, y1-15, "Before Shearing");
    drawTriangle();

    delay(500);

    y += (x*shy);
    y1 += (x1*shy);
    y2 += (x2*shy);

    outtextxy(x1+20, y1-15, "After Shearing");
    setcolor(BLUE);
    drawTriangle();
    getch();

    return 0;
}
/*
50 80
120 50
200 80
2

100 200
250 50
400 200
shx = 0.5, 2

*/
