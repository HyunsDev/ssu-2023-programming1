// 숫자 맞추기 게임
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int answer = rand() % 100;
    int userNum, count = 0;

    do
    {
        cout << "정답을 추측하여 보시오: ";
        cin >> userNum;
        count++;
        if (userNum < answer)
        {
            cout << "제시한 정수가 낮습니다." << endl;
        }
        else if (userNum > answer)
        {
            cout << "제시한 정수가 높습니다." << endl;
        }
    } while (userNum != answer);
    cout << "축하합니다. 시도횟수=" << count << endl;

    return 0;
}
