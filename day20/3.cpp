#include <stdio.h>
#include <windows.h>

class Circle {
   public:
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
    Circle objArray[10];
    while (true) {
        for (Circle& c : objArray) {
            c.x = rand() % 500;
            c.y = rand() % 300;
            c.radius = rand() % 100;
            c.move();
            c.draw();
        }

        char ch = getch();
        if (ch == 'q') {
            break;
        }
    }
    return 0;
}