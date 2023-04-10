// 3명의 학생 성적을 (정수로) 입력받아서, 평균을 (정수로) 출력

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int average, scores0, scores1, scores2;

    cout << "학샏들의 성적을 입력하세요: ";
    cin >> scores0;

    cout << "학생들의 성적을 입력하세요: ";
    cin >> scores1;

    cout << "학생들의 성적을 입력하세요: ";
    cin >> scores2;

    sum += scores0;
    sum += scores1;
    sum += scores2;
    average = sum / 3;
    cout << "성적 평균=" << average << endl;

    return 0;
}