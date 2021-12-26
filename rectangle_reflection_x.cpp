#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gm, gd = DETECT;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

    int x1 = 100, x2 = 200, x3 = 100, x4 = 200;
    int y1 = 100, y2 = 100, y3 = 200, y4 = 200;

    cleardevice();
    line(getmaxx()/2, 0, getmaxx()/2, getmaxy());
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    outtextxy(x1, y1-20, "Before Reflection");
    setcolor(14);
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x4, y4);
    line(x4, y4, x3, y3);


    delay(500);

    outtextxy(getmaxx() - x2-50, y1-30, "After Reflection along x-axis");
    setcolor(3);
    line(getmaxx() - x1, y1,getmaxx() - x2, y2);
    line(getmaxx() - x1, y1,getmaxx() - x3, y3);
    line(getmaxx() - x2, y2,getmaxx() - x4, y4);
    line(getmaxx() - x4, y4,getmaxx() - x3, y3);


    outtextxy(x1-50, getmaxy() - y1+10, "After Reflection along y-axis");
    setcolor(2);
    line(x1, getmaxy() - y1, x2,getmaxy() - y2);
    line(x1, getmaxy() - y1, x3,getmaxy() - y3);
    line(x2, getmaxy() - y2, x4,getmaxy() - y4);
    line(x4, getmaxy() - y4, x3,getmaxy() - y3);

    getch();
    closegraph();

    return 0;
}
