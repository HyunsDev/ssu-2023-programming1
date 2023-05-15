#include <stdio.h>
#include <windows.h>

int main() {
    HDC hdc = GETWindowDC(GetForegroundWindow());
    Ellipse(hdc, 0, 0, 100, 100);
}