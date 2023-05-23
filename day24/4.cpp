#include <time.h>

#include <iostream>

using namespace std;

int main() {
    int *ptr;
    srand(time(NULL));
    ptr = new int[10];

    for (int i = 0; i < 10; i++) {
        ptr[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << " ";
    }

    delete[] ptr;
    cout << endl;
    return 0;
}