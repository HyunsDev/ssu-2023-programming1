#include <iostream>

using namespace std;

void calc() {
    cout << "x의 갑은? ";
    double x;
    cin >> x;

    cout << "y의 갑은? ";
    double y;
    cin >> y;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
}

int main() {
    
    while (true) {
        calc();

        cout << "게속 하려면 \'y\'를 입력하세요: ";
        char y;
        cin >> y;
        if (y != 'y') {
            return 0;
        }
    }

    return 0;
}