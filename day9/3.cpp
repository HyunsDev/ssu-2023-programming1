#include <iostream>
using namespace std;

// n명의 학생 성적을 (정수로) 입력받아서, 평균을 (정수로) 출력

int main()
{
    int STUDENT_NUMBER = 3;

    int sum = 0;
    int average;
    int scores[STUDENT_NUMBER];

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        cout << "학생들의 성적을 입력하세요: ";
        cin >> scores[i];
    }

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        sum += scores[i];
    }
    average = sum / STUDENT_NUMBER;
    cout << "성적 평균=" << average << endl;

    return 0;
}