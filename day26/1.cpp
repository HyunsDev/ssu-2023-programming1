#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr;
    arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}