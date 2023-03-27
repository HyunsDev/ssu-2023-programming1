#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    cout << "1뷰터 100까지의 정수이 합 : " << sum << endl;

    return 0;
}