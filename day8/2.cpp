#include <iostream>
#include <iomanip>
using namespace std;

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

        cout << "\nMULTIPLICATION TABLE\n"
             << endl;

        // 테이블 Head
        cout << "   ";
        for (int i = 1; i <= userNum; i++)
        {
            cout << setw(5) << i;
        }
        cout << endl;

        // 구분선
        cout << "-----";
        for (int i = 1; i <= userNum; i++)
        {
            cout << "-----";
        }
        cout << endl;

        // 숫자 테이블
        for (int i = 1; i <= userNum; i++)
        {
            cout << setw(2) << i << "|";
            for (int ii = 1; ii <= userNum; ii++)
            {
                cout << setw(5) << i * ii;
            }
            cout << endl;
        }

        // 종료 여부
        cout << "Do you want to continue? Then type Y or y." << endl;
        cout << "Otherwise, type any other key : ";

        char userInput = ' ';
        cin >> userInput;

        if (userInput != 'y' && userInput != 'Y')
        {
            break;
        }
    }

    return 0;
}
