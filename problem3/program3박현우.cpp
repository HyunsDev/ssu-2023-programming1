#if 0
완성된 항목: 1, 2, 3, 4, 5, 6
미완성된 항목:
#endif

#include <iostream>
#include <iomanip>

#define SZ 12

using namespace std;

int userX;
int userY;
char turn = 'O'; // O, X
char map[SZ][SZ] = {};

void drawMap()
{
    cout << endl;

    cout << " ";
    for (int i = 0; i < SZ; i++)
    {
        cout << setw(4) << i;
    }
    cout << endl;

    for (int i = 0; i < SZ; i++)
    {
        // 가로 줄
        cout << "  ";
        for (int ii = 0; ii < SZ; ii++)
        {
            cout << "|---";
        }
        cout << "|" << endl;

        // 숫자 있는 줄
        cout << setw(2) << i;
        for (int ii = 0; ii < SZ; ii++)
        {
            char c = map[i][ii] == 0 ? ' ' : map[i][ii];
            cout << "| " << c << " ";
        }
        cout << "|" << endl;
    }

    // 가로 줄
    cout << "  ";
    for (int ii = 0; ii < SZ; ii++)
    {
        cout << "|---";
    }
    cout << "|\n"
         << endl;
}

bool isWin(int userY, int userX)
{
    // 가로 오른쪽
    int cnt = 0;
    for (int i = userX; i < SZ; i++)
    {
        if (map[userY][i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    // 가로 왼쪽
    for (int i = userX - 1; i >= 0; i--)
    {
        if (map[userY][i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    if (cnt >= 5)
    {
        return true;
    }

    // 세로 위
    cnt = 0;
    for (int i = userY; i < SZ; i++)
    {
        if (map[i][userX] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    // 세로 아래
    for (int i = userY - 1; i >= 0; i--)
    {
        if (map[i][userX] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    if (cnt >= 5)
    {
        return true;
    }

    // 대각선 오른쪽 위
    cnt = 0;
    for (int i = 0; i < SZ; i++)
    {
        if (userY + i >= SZ || userX + i >= SZ)
        {
            break;
        }

        if (map[userY + i][userX + i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    // 대각선 왼쪽 아래
    for (int i = 1; i < SZ; i++)
    {
        if (userY - i < 0 || userX - i < 0)
        {
            break;
        }

        if (map[userY - i][userX - i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    if (cnt >= 5)
    {
        return true;
    }

    // 대각선 왼쪽 위
    cnt = 0;
    for (int i = 0; i < SZ; i++)
    {
        if (userY - i < 0 || userX + i >= SZ)
        {
            break;
        }

        if (map[userY - i][userX + i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    // 대각선 오른쪽 아래
    for (int i = 1; i < SZ; i++)
    {
        if (userY + i >= SZ || userX - i < 0)
        {
            break;
        }

        if (map[userY + i][userX - i] == turn)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    if (cnt >= 5)
    {
        return true;
    }

    return false;
}

bool isDraw()
{
    for (int i = 0; i < SZ; i++)
    {
        for (int ii = 0; ii < SZ; ii++)
        {
            if (map[i][ii] == 0)
            {
                return false;
            }
        }
    }

    return true;
}

void resetGame()
{
    // 맵 초기화
    for (int i = 0; i < SZ; i++)
    {
        for (int ii = 0; ii < SZ; ii++)
        {
            map[i][ii] = 0;
        }
    }

    // 턴 초기화
    turn = 'O';

    cout << "\nGAME START\n\n";
}

int main()
{
    cout << "\nGAME START\n\n";

    while (true)
    {
        // 착석 위치
        cout << turn << " 차례   (x, y) 좌표: ";
        cin >> userX >> userY;

        // 위치 유효성 검사
        if (userX < 0 || userX >= SZ || userY < 0 || userY >= SZ)
        {
            cout << "      Position (" << userX << "," << userY << ") is out of range. Try again." << endl;
            continue;
        }

        // 중복 착석 검사
        if (map[userY][userX] != 0)
        {
            cout << "      Position (" << userX << "," << userY << ") is already occupied.Try again." << endl;
            continue;
        }

        // 착석
        map[userY][userX] = turn;

        // 맵 그리기
        drawMap();

        // 승리 여부 판별
        if (isWin(userY, userX))
        {
            cout << "GAME OVER " << turn << " WINS" << endl;
            cout << "Play one more game? Then type Y or y. Otherwise type any other key. ";
            char c;
            cin >> c;
            if (c == 'Y' || c == 'y')
            {
                resetGame();
                continue;
            }
            else
            {
                break;
            }
        }

        // 무승부 여부 판별
        if (isDraw())
        {
            cout << "Draw" << endl;
            cout << "Play one more game? Then type Y or y. Otherwise type any other key. ";
            char c;
            cin >> c;
            if (c == 'Y' || c == 'y')
            {
                resetGame();
                continue;
            }
            else
            {
                break;
            }
        }

        // 턴 변경
        turn = turn == 'O' ? 'X' : 'O';
    }
}
