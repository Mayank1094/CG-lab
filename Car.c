#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawCar(int x) {
    rectangle(x, 300, x + 120, 350);
    rectangle(x + 20, 260, x + 100, 300);
    circle(x + 30, 350, 15);
    circle(x + 90, 350, 15);
}

int main() {
    int gd = DETECT, gm;
    int x;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (x = 0; x <= 500; x += 6) {
        cleardevice();
        drawCar(x);
        delay(100);
    }

    getch();
    closegraph();
    return 0;
}
