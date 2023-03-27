#include <iostream>
using namespace std;

int main()
{
    long fact = 1;
    int n;

    cout << "정수를 입력하시오: ";
    cin >> n;

    for (int i; i <= n; i++) {
        fact = fact * i;
    }

    cout << n << "!는  " << fact << "입니다." << endl;

    return 0;
}