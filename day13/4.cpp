#include <iostream>

using namespace std;

void display(char c = '$', int n = 5)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    cout << "아무런 인수가 전달되지 않는 경우" << endl;
    display();

    cout << "인수가 하나만 전달되는 경우" << endl;
    display('*');

    cout << "인수가 모두 전달되는 경우" << endl;
    display('#', 10);
}