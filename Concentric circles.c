#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int x = 320, y = 240;
    int r, color = 1;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (r = 20; r <= 200; r = r + 20) {
        setcolor(color);
        circle(x, y, r);
        color++;

        if (color > 15) {
            color = 1;
        }
    }

    getch();
    closegraph();
    return 0;
}
