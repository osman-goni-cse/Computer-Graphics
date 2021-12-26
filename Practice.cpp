#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void flood(int x,int y, int fill_col, int old_col)
{
    if(getpixel(x,y) == old_col)
    {
        delay(10);
        putpixel(x,y,fill_col);
        flood(x+1,y,fill_col,old_col);
        flood(x-1,y,fill_col,old_col);
        flood(x,y+1,fill_col,old_col);
        flood(x,y-1,fill_col,old_col);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

    circle(150, 150, 40);
    flood(150, 150, 9, 0);

    getch();
    closegraph();

    return 0;
}


