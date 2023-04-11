#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int n;
    n = max(2, 3);
    cout << "연산 결과: " << n << endl;
    return 0;
}