#include <iostream>
using namespace std;
int main()
{
    float A, B;

    cout << fixed;
    cout.precision(9);

    cin >> A;
    cin >> B;
    cout << A / B;

    return 0;
}