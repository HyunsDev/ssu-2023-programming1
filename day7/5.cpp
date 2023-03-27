// 숫자 맞추기 게임
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int i, ans;
    cout << "산수 문제를 자동으로 출제합니다." << endl;

    while (true)
    {
        int x = rand() % 100;
        int y = rand() % 100;
        cout << x << "+" << y << "=";
        cin >> ans;
        if (x + y == ans)
        {
            cout << "맞았습니다." << endl;
            break;
        }
        else
        {
            cout << "틀렸습니다." << endl;
        }
    }

    return 0;
}
