#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    int gm, gd = DETECT;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    int x1 = 100, x2 = 200, x3 = 100, x4 = 200;
    int y1 = 100, y2 = 100, y3 = 200, y4 = 200;
    cleardevice();

    line(getmaxx()/2, 0, getmaxx()/2,getmaxy());
    line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);

    outtextxy(x1, y1, "Before Reflection");
    setcolor(14);
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x4, y4);
    line(x4, y4, x3, y3);

    outtextxy(x1, getmaxy() - y1, "After Reflection");
    setcolor(2);
    line(x1, getmaxy() - y1, x2,getmaxy() - y2);
    line(x1, getmaxy() - y1, x3,getmaxy() - y3);
    line(x2, getmaxy() - y2, x4,getmaxy() - y4);
    line(x4, getmaxy() - y4, x3,getmaxy() - y3);

    getch();
    closegraph();

    return 0;
}

