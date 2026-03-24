#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;

    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    int dx, dy, p, x, y;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2 * dy - dx;

    while(x <= x2)
    {
        putpixel(x, y, WHITE);

        if(p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }

        x = x + 1;
    }

    getch();
    closegraph();
    return 0;
}
