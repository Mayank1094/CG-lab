#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setfillstyle(SOLID_FILL, RED);
    pieslice(300, 200, 0, 90, 120);

    setfillstyle(SOLID_FILL, GREEN);
    pieslice(300, 200, 90, 180, 120);

    setfillstyle(SOLID_FILL, BLUE);
    pieslice(300, 200, 180, 270, 120);

    setfillstyle(SOLID_FILL, YELLOW);
    pieslice(300, 200, 270, 360, 120);

    getch();
    closegraph();
    return 0;
}
