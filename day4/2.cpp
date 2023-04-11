#include <iostream>
using namespace std;

int main()
{
    cout << "화씨 온도는 몇 도 입니까? ";

    double f_temp;
    cin >> f_temp;

    double c_temp = (5.0 / 9.0) * (f_temp - 32);
    cout << "화씨온도 " << f_temp << "도는 섭씨온도" << c_temp << "입니다." << endl;

    return 0;
}