#include <iostream>
#include <string>

using namespace std;

int main()
{
    int list[] = {1, 2, 3, 4, 2, 6, 7, 8, 9, 10};

    // 배열 요소의 변경이 필요하다면 반드시 참조자를 사용하여야 한다.
    for (int &i : list)
    {
        i = i * i;
    }

    for (int &i : list)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}