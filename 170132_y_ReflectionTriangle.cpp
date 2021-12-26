#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>

int main()
{
    int x1[3], y1[3], rx1[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter the %d co-ordinate: ", i+1);
        scanf("%d%d", &x1[i], &y1[i]);
    }

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int max_x = getmaxx();
    int max_y = getmaxy();

    int mid_x = max_x/2;
    int mid_y = max_y/2;

    for(int i = 0; i < 3; i++) {
        x1[i] += mid_x;

        if(y1[i] < 0) {
            y1[i] = -y1[i];
            y1[i] += mid_y;
        }else {
            y1[i] = mid_y - y1[i];
        }
    }

    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);

    line(x1[0], y1[0], x1[1], y1[1]);
    line(x1[1], y1[1], x1[2], y1[2]);
    line(x1[2], y1[2], x1[0], y1[0]);

    int diff_x;

    for(int i = 0; i < 3; i++) {
        if(x1[i] > mid_x) {
            diff_x = x1[i] - mid_x;
            rx1[i] = mid_x - diff_x;
        }
        if(x1[i] < mid_x) {
            diff_x = mid_x - x1[i];
            rx1[i] = mid_x + diff_x;
        }
    }

    line(rx1[0], y1[0], rx1[1], y1[1]);
    line(rx1[1], y1[1], rx1[2], y1[2]);
    line(rx1[2], y1[2], rx1[0], y1[0]);

    getch();
    closegraph();

    return 0;
}
/*
Test Case:
50   50
100   100
150   50
Test Case:
10 10
100 10
100 100

*/
