#include<graphics.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int gd = DETECT, gm;
    int xa, ya, xb, yb;

    printf("Enter x1 and y1\n");
    scanf("%d%d", &xa, &ya);

    printf("Enter x2 and y2\n");
    scanf("%d%d", &xb, &yb);

    initgraph(&gd, &gm, "c:\\TurboC3\\BGI");

    int dx = abs(xb - xa);
    int dy = abs(yb - ya);
    int P ;

    if(dy < dx ) P = 2*dy - dx;
    else P = 2*dx - dy;

    if(xa > xb) {
        int temp = xa;
        xa = xb;
        xb = temp;

        temp = ya;
        ya = yb;
        yb = temp;
    }

    int x = xa, y = ya;

    while((x <= xb) && (y <= yb)) {
        delay(100);
        putpixel(x, y, WHITE);

        if(dy >= dx) {
            if(P >= 0) {
                x++,y++;
                P = P + 2*(dx - dy);
            }else {
                y++;
                P = P + 2*dx;
            }
        }else {
            if(P >= 0) {
                x++, y++;
                P = P + 2*(dy-dx);
            }else {
                x++;
                P = P + 2*dy;
            }
        }
    }

    outtextxy(200,20,"Bresenham Line");
    outtextxy(xa+10,ya-5,"(x1,y1)");
    outtextxy(xb+5,yb+5,"(x2,y2)");

    getch();
    closegraph();

    return 0;
}

/*
100 100
200 200

100 100
200 100

*/
