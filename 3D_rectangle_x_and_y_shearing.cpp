#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	float xa, ya, xb, yb;
    xa = 50, ya = 150, xb = 200, yb = 70;

    outtextxy(20, 20, "Before Shearing");
    bar3d(xa, ya, xb, yb, 30, 1);

    float shx, shy;

    printf("Enter shear factor along x-axis: ");
    scanf("%f", &shx);
    printf("Enter shear factor along y-axis: ");
    scanf("%f", &shy);

    float x1, y1, x2, y2;

    x1 = xa + (shx*ya);
    x2 = xb + (shx*yb);

    delay(500);
    setcolor(GREEN);

    outtextxy(x2, 20, "After Shearing along x-axis");
    bar3d(x1, ya, x2, yb, 30, 1);

    y1 = ya + (shy*xa);
    y2 = yb + (shy*xb);

    delay(500);
    setcolor(CYAN);

    outtextxy(xa, y1-40, "After Shearing along y-axis");
    bar3d(xa, y1, xb, y2, 30, 1);

	getch();
	closegraph();

	return 0;
}

