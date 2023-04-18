#include <iostream>
using namespace std;

int func_area(int a, int b)
{
    return a * b;
}

int func_perimeter(int a, int b)
{
    return 2 * (a + b);
}

int main()
{
    int width, height;
    int area = 0, perimeter = 0;
    cin >> width >> height;
    cout << func_area(width, height) << endl;
    cout << func_perimeter(width, height) << endl;
    return 0;
}