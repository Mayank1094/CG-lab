#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 0, y, r;
    int p;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    r = 80;
    y = r;
    p = 1 - r;

    while (x <= y) {
        putpixel(200 + x, 200 + y, WHITE);
        putpixel(200 - x, 200 + y, WHITE);
        putpixel(200 + x, 200 - y, WHITE);
        putpixel(200 - x, 200 - y, WHITE);
        putpixel(200 + y, 200 + x, WHITE);
        putpixel(200 - y, 200 + x, WHITE);
        putpixel(200 + y, 200 - x, WHITE);
        putpixel(200 - y, 200 - x, WHITE);

        if (p < 0) {
            p = p + 2 * x + 3;
        } else {
            p = p + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }

    getch();
    closegraph();
    return 0;
}
