#include <iostream>
using namespace std;

int main()
{
    char board[3][3];
    int x, y, k, i;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            board[x][y] = ' ';
        }
    }

    for (k = 0; k < 9; k++)
    {
        cout << "x, y 좌표";
        cin >> x >> y;
        board[x][y] = k % 2 == 0 ? 'X' : 'O';

        for (i = 0; i < 3; i++)
        {
            cout << "---|---|---" << endl;
            cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " " << endl;
        }
        cout << "---|---|---" << endl;
    }

    // check win and lose
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            cout << "승리" << endl;
            return 0;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            cout << "승리" << endl;
            return 0;
        }
    }

    return 0;
}