#include <iostream>
using namespace std;

// void getAreaPerimeter(int x, int y, int &a, int &b) :

int func_area(int a, int b)
{
    return a * b;
}

int func_perimeter(int a, int b)
{
    return 2 * (a + b);
}

void void_area(int a, int b, int &area, int &perimeter)
{
    area = a * b;
    perimeter = 2 * (a + b);
}

int main()
{
    int width, height;
    int area = 0, perimeter = 0;
    cin >> width >> height;
    void_area(width, height, area, perimeter);
    cout << area << endl;
    cout << perimeter << endl;
    cout << func_area(width, height) << endl;
    cout << func_perimeter(width, height) << endl;
    return 0;
}