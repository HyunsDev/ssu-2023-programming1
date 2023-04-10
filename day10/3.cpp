#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
    int list[10];
    int min, max;

    srand(time(NULL));
    for (int &elem : list)
    {
        elem = rand() % 100 + 1;
        cout << elem << " ";
    }

    cout << endl;
    min = list[0];
    for (auto &elem : list)
    {
        if (elem < min)
            min = elem;
    }
    cout << "최소값=" << min << endl;

    max = list[0];
    for (auto &elem : list)
    {
        if (elem > max)
            max = elem;
    }
    cout << "최대값=" << min << endl;

    return 0;
}