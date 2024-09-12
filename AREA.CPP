#include <graphics.h>
#include <conio.h>

void drawLeaf(int x, int y, int width, int height) {
    setfillstyle(SOLID_FILL, GREEN);
    // Draw the leaf shape
    ellipse(x, y, x - width / 2, y + height / 2, 0, 360);
    ellipse(x, y + height / 4, x - width / 4, y + height / 2, 0, 360);
    // Draw the leaf vein
    line(x, y, x, y + height);
    // Add a slight shadow for depth
    setfillstyle(SOLID_FILL, DARKGRAY);
    ellipse(x + 5, y + height + 5, x + 5 - width / 2, y + height + 5 + height / 2, 0, 360);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawLeaf(320, 240, 100, 150);

    getch();
    closegraph();
    return 0;
}