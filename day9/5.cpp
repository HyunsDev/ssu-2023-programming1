#include <iostream>
using namespace std;

// n명의 학생 성적을 (정수로) 입력받아서, 홀수번째와 짝수번째의 평균을 (정수로) 출력

int main()
{
    const int STUDENT_NUMBER = 10;

    int sums[] = {0, 1};
    int averages[] = {0, 1};
    int scores[STUDENT_NUMBER];

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        cout << "학생들의 성적을 입력하세요: ";
        cin >> scores[i];
    }

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        sums[i % 2] += scores[i];
    }

    averages[0] = sums[0] / (STUDENT_NUMBER / 2);
    averages[1] = sums[1] / (STUDENT_NUMBER / 2);
    cout << "홀수 성적 평균=" << averages[0] << endl;
    cout << "짝수 성적 평균=" << averages[1] << endl;

    return 0;
}