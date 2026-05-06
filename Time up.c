#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

int main()
{
    int gd = DETECT, gm;
    int i;
    char str[10];

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    settextstyle(3, 0, 6);

    for(i = 10; i >= 0; i--)
    {
        sprintf(str, "%d", i);
        outtextxy(300, 200, str);
        delay(1000);
        cleardevice();
    }

    outtextxy(250, 200, "TIME UP");

    getch();
    closegraph();

    return 0;
}
