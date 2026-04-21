#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    rectangle(200, 100, 300, 350);
    circle(250, 150, 30);
    circle(250, 230, 30);
    circle(250, 310, 30);

    setfillstyle(SOLID_FILL, RED);
    floodfill(250, 150, WHITE);
    delay(2000);

    cleardevice();

    rectangle(200, 100, 300, 350);
    circle(250, 150, 30);
    circle(250, 230, 30);
    circle(250, 310, 30);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(250, 230, WHITE);
    delay(2000);

    cleardevice();

    rectangle(200, 100, 300, 350);
    circle(250, 150, 30);
    circle(250, 230, 30);
    circle(250, 310, 30);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(250, 310, WHITE);
    delay(2000);

    getch();
    closegraph();
    return 0;
}
