#include <iostream>
#include <string>

using namespace std;

int main()
{
    int list[] = {1, 2, 3, 4, 2, 6, 7, 8, 9, 10};

    for (int i : list)
    {
        cout << i << " ";
    }
    cout << endl;

    // 위와 동일
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    // 참조자 버전
    for (int &i : list)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}