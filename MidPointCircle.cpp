#include<graphics.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int gd = DETECT, gm;
    int xa, ya, r;

    printf("Enter origin x and y\n");
    scanf("%d%d", &xa, &ya);

    printf("Enter Radius\n");
    scanf("%d", &r);

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int D = 1 - r;
    int x = 0, y = r;

    while(x < y) {

        delay(50);
        putpixel(xa+x,ya+y, GREEN);
        putpixel(xa+y, ya+x, GREEN);
        delay(50);
        putpixel(xa+y, ya-x, GREEN);
        putpixel(xa+x, ya-y, GREEN);
        delay(50);
        putpixel(xa-x, ya-y, GREEN);
        putpixel(xa-y, ya-x, GREEN);
        delay(50);
        putpixel(xa-y, ya+x, GREEN);
        putpixel(xa-x, ya+y, GREEN);
        delay(50);

        if(D < 0) {
            D += (2*x) + 3;
        }else {
            D += 2*(x - y) + 5;
            y--;
        }
        x++;
    }

    getch();
    closegraph();

    return 0;
}
/*

Input: 100 100
Input: 60

*/

