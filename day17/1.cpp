#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    int count = 0;

    cout << "DNA1: ";
    cin >> s1;
    cout << "DNA2: ";
    cin >> s2;

    if (s1.length() != s2.length())
    {
        cout << "두 DNA의 길이가 다릅니다." << endl;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                count++;
            }
        }
        cout << "해밍 거리: " << count << endl;
    }

    return 0;
}