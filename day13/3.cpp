#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}

double sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << sum(1, 2, 3) << endl;
    cout << sum(1.0, 2.0) << endl;
    cout << sum(1, 2) << endl;
}