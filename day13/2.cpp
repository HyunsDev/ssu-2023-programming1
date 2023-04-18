#include <iostream>
using namespace std;

// 참조로 전달하기
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    cout << a << endl;
    cout << b << endl;
}