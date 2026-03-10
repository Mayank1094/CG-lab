#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    line(50, 50, 200, 50);
    rectangle(50, 80, 200, 160);
    circle(350, 120, 50);
    ellipse(350, 250, 0, 360, 80, 40);
    line(100, 250, 50, 330);
    line(50, 330, 150, 330);
    line(150, 330, 100, 250);

    getch();
    closegraph();
    return 0;
}
