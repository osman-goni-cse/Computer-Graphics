#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int max_x = getmaxx();
    int max_y = getmaxy();
    int mid_x = max_x/2;
    int mid_y = max_y/2;

    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);

    int xa, ya, xb, yb; // bottom right, top left
    xa = 100, ya = 20, xb = 60, yb = 90;

    bar3d(mid_x+xa,mid_y-ya,mid_x+xb,mid_y-yb,30,1);
//    line(mid_x+xa,mid_y-ya,mid_x+xb,mid_y-yb);
//    outtextxy(mid_x+xa, mid_y-ya, "(xa,ya)");
//    outtextxy(mid_x+xb, mid_y-yb, "(xb, yb)");

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

    int x1, y1, x2, y2;

    x1 = xa*cos(theta)-ya*sin(theta);
    y1 = xa*sin(theta)+ya*sin(theta);
    x2 = xb*cos(theta)-yb*sin(theta);
    y2 = xb*sin(theta)+yb*sin(theta);

    cleardevice();
    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);

    if(opt == 1) {
        bar3d(mid_x+x1,mid_y-y1,mid_x+x2,mid_y-y2,30,1);
    }
    else if(opt == 2) {
        bar3d(mid_x+x1, mid_y-ya, mid_x+x2, mid_y-yb, 30, 1);
    }
    else {

        bar3d(mid_x+xa, mid_y-x1, mid_x+xb, mid_y-x2, 30, 1);
    }


    getch();
    closegraph();

    return 0;
}
