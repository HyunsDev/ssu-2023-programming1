#include <iostream>
using namespace std;

int main() {
    double num = 3.14;
    int* ptr =
        &num;  // 이 단계에서 컴파일 에러가 발생하여 더 이상 진행되지 않음
    *ptr = 10;
    cout << num << endl;

    return 0;
}