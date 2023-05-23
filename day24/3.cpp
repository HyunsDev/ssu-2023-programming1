#include <iostream>
using namespace std;

int main() {
    int number = 10;
    char ch = 'a';
    int* p;
    char* q;

    p = &number;
    q = &ch;

    cout << p << endl;
    cout << q << endl;

    cout << *p << endl;
    cout << *q << endl;

    return 0;
}