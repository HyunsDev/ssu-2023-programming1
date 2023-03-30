// while 문으로 작성된 코드를 For 문으로 변경할 것

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "안녕하세요.\n 구구단 중에서 출력하고 싶은 단을 입력하시오: ";
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        cout << n << "*" << i << "=" << n * i << endl;
    }

    return 0;
}