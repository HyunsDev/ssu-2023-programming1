// 숫자 맞추기 게임
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int NUM = rand() % 100;
    int userNum, count = 0;

    while (true)
    {
        cout << "정답을 추측하여 보시오: ";
        cin >> userNum;
        count++;
        if (userNum < NUM)
        {
            cout << "제시한 정수가 낮습니다." << endl;
        }
        else if (userNum > NUM)
        {
            cout << "제시한 정수가 높습니다." << endl;
        }
        else
        {
            cout << "축하합니다. 시도횟수=" << count << endl;
            break;
        }
    }

    return 0;
}
