/* Ei Program Crash Kore
Emnete Sample er jonno raka
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int x,y,p,r,d,a,b;
void mid();
void pixel(int a,int b);

int main()
{
    int gm,gr;
    detectgraph(&gm,&gr);
    initgraph(&gm,&gr,"d:\\tc\\BGI");
    printf("Enter the center point:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the radius:\n");
    scanf("%d",&r);
    mid();
    getch();
}
void mid()
{
    x=0;
    y=r;
    p=1-r;
    while(x<y)
    {
        pixel(a,b);
        if(p<0)
            x=x+1;
        else
        {
            x=x+1;
            y=y-1;
        }
        if(p<0)
            p=p+2*x+1; // bcz x, y er value age inc/dec korci
        else
            p=p+2*(x-y)+1;
    }
}
void pixel(int a,int b)
{
    putpixel(a+x,b+y,10);
    putpixel(a-x,b+y,10);
    putpixel(a+x,b-y,10);
    putpixel(a-x,b-y,10);
    putpixel(a+y,b+x,10);
    putpixel(a-y,b-x,10);
    putpixel(a+y,b-x,10);
    putpixel(a-y,b+x,10);
}

