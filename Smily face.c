#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawSmile(int x) {
    circle(x, 200, 60);
    circle(x - 20, 180, 8);
    circle(x + 20, 180, 8);
    arc(x, 200, 200, 340, 30);
}

int main() {
    int gd = DETECT, gm;
    int x;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (x = 100; x <= 500; x += 5) {
        cleardevice();
        drawSmile(x);
        delay(100);
    }

    getch();
    closegraph();
    return 0;
}
