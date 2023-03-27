#include <iostream>
using namespace std;

// TODO: 텍스트 정렬 맞추기

int main()
{
    int userNum;

    while (true)
    {
        cout << "The maximum number of the multiplication table." << endl;
        cout << "The number is between 1 and 19: ";
        cin >> userNum;

        if (userNum > 19)
        {
            cout << "Number is too big, Type again" << endl;
            continue;
        }

        if (userNum < 1)
        {
            cout << "Number is too small, Type again" << endl;
            continue;
        }

        // 테이블 Head
        cout << "      ";
        for (int i = 1; i <= userNum; i++)
        {
            cout << i << "    ";
        }
        cout << endl;

        // 구분선
        cout << "=====";
        for (int i = 1; i <= userNum; i++)
        {
            cout << "=====";
        }
        cout << endl;

        // 숫자 테이블
        for (int i = 1; i <= userNum; i++)
        {
            cout << i << "|"
                 << "    ";
            for (int ii = 1; ii <= userNum; ii++)
            {
                cout << i * ii << "    ";
            }
            cout << endl;
        }
    }

    return 0;
}
