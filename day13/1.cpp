#include <iostream>
using namespace std;

// 참조로 전달하기
void modify(int &a, int &b)
{
    a = a * 2;
    b = a * 2;
}

int main()
{
    int a = 10;
    int b = 20;

    modify(a, b);

    cout << a << endl;
    cout << b << endl;
}