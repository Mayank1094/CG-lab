#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int i, j;
    int x = 50, y = 50;
    int size = 40;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                setfillstyle(SOLID_FILL, WHITE);
                bar(x + j * size, y + i * size, x + (j + 1) * size, y + (i + 1) * size);
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
