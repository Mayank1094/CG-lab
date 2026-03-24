#include<graphics.h>
#include<conio.h>
#include<math.h>

int main()
{
    int gd = DETECT, gm;

    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    int dx, dy, steps, i;
    float x, y, x_inc, y_inc;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    x_inc = dx / (float)steps;
    y_inc = dy / (float)steps;

    x = x1;
    y = y1;

    for(i = 0; i <= steps; i++)
    {
        putpixel((int)x, (int)y, WHITE);
        x = x + x_inc;
        y = y + y_inc;
    }

    getch();
    closegraph();
    return 0;
}
