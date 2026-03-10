#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    ellipse(300, 150, 0, 360, 150, 80);

    getch();
    closegraph();
    return 0;
}
