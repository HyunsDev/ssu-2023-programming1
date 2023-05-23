#include <time.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    int *ptr;
    srand(time(NULL));

    cin >> n;
    ptr = new int[n];

    for (int i = 0; i < n; i++) {
        ptr[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }

    delete[] ptr;
    cout << endl;
    return 0;
}