#include <iostream>
using namespace std;

int main() {
    int num = 10;

    int* ptr = &num;

    cout << *ptr << endl;
    cout << ptr;

    return 0;
}