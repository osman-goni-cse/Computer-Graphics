#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int xa, ya, xb, yb, xc, yc;

    xa = 100, ya = 20, xb = 150, yb = 70, xc = 200, yc = 20;

    int max_x = getmaxx();
    int max_y = getmaxy();
    int mid_x = max_x/2;
    int mid_y = max_y/2;

    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);


    line(mid_x+xa, mid_y-ya, mid_x+xb, mid_y-yb);
    //outtextxy(mid_x+xa, mid_y-ya, "xa, ya");
    line(mid_x+xa, mid_y-ya, mid_x+xc, mid_y-yc);
    //outtextxy(mid_x+xb, mid_y-yb, "xb, yb");
    line(mid_x+xb, mid_y-yb, mid_x+xc, mid_y-yc);

    int x = (mid_x+xa + mid_x+xb +mid_x+ xc) / 3;
    int y = (mid_y-ya +mid_y- yb +mid_y- yc) / 3;

    line(mid_x+xa, mid_y-ya, x, y);
    line(mid_x+xb, mid_y-yb, x, y);
    line(mid_x+xc, mid_y-yc, x, y);

   float deg, theta;

    printf("Enter Rotation angle in degree: ");
    scanf("%f", &deg);

    theta = (deg * 3.1416) / 180;

    printf("Choose Rotation axis\n");
    printf("1.along z axis\n");
    printf("2.along x axis\n");
    printf("3.along y axis\n");

    int opt;
    scanf("%d", &opt);

    float x1, y1, x2, y2, x3, y3;

    x1 = xa*cos(theta)-ya*sin(theta);
    y1 = xa*sin(theta)+ya*sin(theta);
    x2 = xb*cos(theta)-yb*sin(theta);
    y2 = xb*sin(theta)+yb*sin(theta);
    x3 = xc*cos(theta)-yc*sin(theta);
    y3 = xc*sin(theta)+yc*sin(theta);

    cleardevice();
    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);

    if(opt == 1) {
        line(mid_x+x1, mid_y-y1, mid_x+x2, mid_y-y2);
    //outtextxy(mid_x+xa, mid_y-ya, "xa, ya");
        line(mid_x+x1, mid_y-y1, mid_x+x3, mid_y-y3);
        //outtextxy(mid_x+xb, mid_y-yb, "xb, yb");
        line(mid_x+x2, mid_y-y2, mid_x+x3, mid_y-y3);

        x = (mid_x+x1 + mid_x+x2 +mid_x+ x3) / 3;
        y = (mid_y-y1 +mid_y- y2 +mid_y- y3) / 3;

        line(mid_x+x1, mid_y-y1, x, y);
        line(mid_x+x2, mid_y-y2, x, y);
        line(mid_x+x3, mid_y-y3, x, y);
    }
    else if(opt == 2) {
        line(mid_x+x1, mid_y-ya, mid_x+x2, mid_y-yb);
    //outtextxy(mid_x+xa, mid_y-ya, "xa, ya");
        line(mid_x+x1, mid_y-ya, mid_x+x3, mid_y-yc);
        //outtextxy(mid_x+xb, mid_y-yb, "xb, yb");
        line(mid_x+x2, mid_y-yb, mid_x+x3, mid_y-yc);

        x = (mid_x+x1 + mid_x+x2 +mid_x+ x3) / 3;
        y = (mid_y-ya +mid_y- yb +mid_y- yc) / 3;

        line(mid_x+x1, mid_y-ya, x, y);
        line(mid_x+x2, mid_y-yb, x, y);
        line(mid_x+x3, mid_y-yc, x, y);
    }
    else {

        line(mid_x+xa, mid_y-x1, mid_x+xb, mid_y-x2);
        //outtextxy(mid_x+xa, mid_y-ya, "xa, ya");
        line(mid_x+xa, mid_y-x1, mid_x+xc, mid_y-x3);
        //outtextxy(mid_x+xb, mid_y-yb, "xb, yb");
        line(mid_x+xb, mid_y-x2, mid_x+xc, mid_y-x3);

        x = (mid_x+xa + mid_x+xb +mid_x+ xc) / 3;
        y = (mid_y-x1 +mid_y- x2 +mid_y- x3) / 3;

        line(mid_x+xa, mid_y-x1, x, y);
        line(mid_x+xb, mid_y-x2, x, y);
        line(mid_x+xc, mid_y-x3, x, y);
    }

    getch();
    closegraph();

    return 0;
}

/*
tx = 100
ty = 200
*/


