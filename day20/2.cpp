#include <stdio.h>
#include <windows.h>

class Circle {
   private:
    int x;
    int y;
    int radius;

    void init();
    void draw();
    void move();
}

void Circle::init(int x, int y, int radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Circle::draw() {
    HDC hdc = GetWindowDC(GetForegroundWindow());
    Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

void Circle::move() { x += rand() % 50 }

int main() {
    Circle c1;
    Circle c2;

    c1.init(100 100, 50);
    c2.init(200, 200, 50);

    for (int i = 0; i < 100; i++) {
        c1.move();
        c2.move();

        c1.draw();
        c2.draw();

        Sleep(100);
    }

    return 0;
}