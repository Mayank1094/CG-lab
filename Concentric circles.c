#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int x = 320, y = 240;
    int r;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(WHITE); 

    for (r = 20; r <= 200; r = r + 20) {
        circle(x, y, r);
    }

    getch();
    closegraph();
    return 0;
}
