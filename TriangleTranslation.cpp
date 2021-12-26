#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void draw(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
}

void tri(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int x, y, a1, a2, a3, b1, b2, b3;
    printf("Enter the Translation Factor: ");
    scanf("%d%d",&x,&y);

    a1=x1+x; b1=y1+y;
    a2=x2+x; b2=y2+y;
    a3=x3+x; b3=y3+y;

    setcolor(GREEN);

    outtextxy(a1-5, b1-20, "After Translation");
    draw(a1, b1, a2, b2, a3, b3);
}

int main()
{
    int gd = DETECT, gm;
    int c;
    initgraph(&gd, &gm,"\\TurboC3\\BGI");

    int x1, y1, x2, y2, x3, y3, mx, my;

    printf("Enter the 1st point for the triangle:");
    scanf("%d%d",&x1,&y1);

    printf("Enter the 2nd point for the triangle:");
    scanf("%d%d",&x2,&y2);

    printf("Enter the 3rd point for the triangle:");
    scanf("%d%d",&x3,&y3);

    cleardevice();

    outtextxy(x1-10, y1-20, "Before Translation");
    draw(x1,y1,x2,y2,x3,y3);

    delay(500);
    tri(x1,y1,x2,y2,x3,y3);
    getch();

    return 0;
}
/*

80 80
30 130
130 130
75 75

100 150
320 210
432 320

50 60
*/


