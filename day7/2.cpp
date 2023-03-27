// Day 6. 3.cpp 의 코드를 while 문을 사용하여 바꿀 것

#include <iostream>
using namespace std;

int main()
{
    long fact = 1;
    int n;

    cout << "정수를 입력하시오: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    cout << n << "!는 " << fact << "입니다." << endl;

    return 0;
}