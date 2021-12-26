#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    int x4,y4,x1,y1,x2,y2,x3,y3,tx,ty,x5,y5,x6,y6,x7,y7,x8,y8,xx1,xx2,xx3,xx4,xx5,xx6,xx7,xx8,yy1,yy2,yy3,yy4,yy5,yy6,yy7,yy8;
    float t,a;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&x3,&y3);
    printf("Enter the value of fourth coordinate:");
    scanf("%d %d",&x4,&y4);

    printf("Enter the value of fifth coordinate:");
    scanf("%d %d",&x5,&y5);
    printf("Enter the value of sixth coordinate:");
    scanf("%d %d",&x6,&y6);
    printf("Enter the value of seventh coordinate:");
    scanf("%d %d",&x7,&y7);
    printf("Enter the value of eighth coordinate:");
    scanf("%d %d",&x8,&y8);
    //1st 3d rectangle
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);

    line(x5,y5,x6,y6);
    line(x6,y6,x7,y7);
    line(x7,y7,x8,y8);
    line(x8,y8,x5,y5);


    line(x1,y1,x5,y5);
    line(x2,y2,x6,y6);
    line(x3,y3,x7,y7);
    line(x4,y4,x8,y8);

    printf("Enter angle for rotation\n");
    scanf("%f",&a);

    t=a*(3.14/180);
    xx1=(x1*cos(t))-(y1*sin(t));
    yy1=(x1*sin(t))+(y1*cos(t));
    xx2=(x2*cos(t))-(y2*sin(t));
    yy2=(x2*sin(t))+(y2*cos(t));
    xx3=(x3*cos(t))-(y3*sin(t));
    yy3=(x3*sin(t))+(y3*cos(t));
    xx4=(x4*cos(t))-(y4*sin(t));
    yy4=(x4*sin(t))+(y4*cos(t));

    xx5=(x5*cos(t))-(y5*sin(t));
    yy5=(x5*sin(t))+(y5*cos(t));
    xx6=(x6*cos(t))-(y6*sin(t));
    yy6=(x6*sin(t))+(y6*cos(t));
    xx7=(x7*cos(t))-(y7*sin(t));
    yy7=(x7*sin(t))+(y7*cos(t));
    xx8=(x8*cos(t))-(y8*sin(t));
    yy8=(x8*sin(t))+(y8*cos(t));

    setcolor(12);
    //after rotation
    line(xx1,yy1,xx2,yy2);
    line(xx2,yy2,xx3,yy3);
    line(xx3,yy3,xx4,yy4);
    line(xx4,yy4,xx1,yy1);

    line(xx5,yy5,xx6,yy6);
    line(xx6,yy6,xx7,yy7);
    line(xx7,yy7,xx8,yy8);
    line(xx8,yy8,xx5,yy5);

    line(xx1,yy1,xx5,yy5);
    line(xx2,yy2,xx6,yy6);
    line(xx3,yy3,xx7,yy7);
    line(xx4,yy4,xx8,yy8);
    getch();
}
/*
100 0 200 0 200 100 100 100
150 20 250 20 250 150 150 150
30
*/

