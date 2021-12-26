#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    int max_x = getmaxx();
    int max_y = getmaxy();

    rectangle(0, 10, max_x, max_y);

    // 3D ladder er jonno
    rectangle(150, 320, 270, 320);
    line(150, 320, 158, 330);
    line(270, 320, 278, 330);
    line(158, 330, 278, 330);

    rectangle(158, 330, 278, 350);
    line(158, 350, 166, 360);
    line(278, 350, 286, 360);

    rectangle(166, 360, 286, 380);
    line(150, 320, 150, 380);
    line(150, 380, 166, 380);

    //delay(5000);

    // Cube
    rectangle(150, 150, 250, 250);
    rectangle(200, 100, 300, 200);

    line(150, 150, 200, 100);
    line(250, 150, 300, 100);
    line(250, 250, 300, 200);
    line(150, 250, 200, 200);

    //delay(5000);

    // Triangle

    line(400, 250, 560, 250);
    line(400, 250, 480, 150);
    line(560, 250, 480, 150);

    // center line

    line(400, 250, 480, 216);
    line(560, 250, 480, 216);
    line(480, 150, 480, 216);

    delay(1000);
    cleardevice();

    line(100, 200, 250, 50);
    line(100, 200, 400, 200);
    line(250, 50, 400, 200);

    line(100, 200, 250, 150);
    line(250, 50, 250, 150);
    line(400, 200, 250, 150);

    getch();
    closegraph();

    return 0;
}
