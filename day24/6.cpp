#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int> p(new int);
    *p = 99;

    cout << *p << endl;

    return 0;
}