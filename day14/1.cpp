#include <iostream>
using namespace std;

int square(int i)
{
    cout << "square(int) 호출" << endl;
    return i * i;
}

double square(double i)
{
    cout << "square(double) 호출" << endl;
    return i * i;
}

int main()
{
    cout << square(3) << endl;
    cout << square(3.3) << endl;
    return 0;
}