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

bool isWin()
{
    // 가로
    for (int i = 0; i < SZ; i++)
    {
        for (int ii = 0; ii < SZ - 4; ii++)
        {
            if (map[i][ii] == turn && map[i][ii + 1] == turn && map[i][ii + 2] == turn && map[i][ii + 3] == turn && map[i][ii + 4] == turn)
            {
                return true;
            }
        }
    }

    // 세로
    for (int i = 0; i < SZ - 4; i++)
    {
        for (int ii = 0; ii < SZ; ii++)
        {
            if (map[i][ii] == turn && map[i + 1][ii] == turn && map[i + 2][ii] == turn && map[i + 3][ii] == turn && map[i + 4][ii] == turn)
            {
                return true;
            }
        }
    }

    // 대각선
    for (int i = 0; i < SZ - 4; i++)
    {
        for (int ii = 0; ii < SZ - 4; ii++)
        {
            if (map[i][ii] == turn && map[i + 1][ii + 1] == turn && map[i + 2][ii + 2] == turn && map[i + 3][ii + 3] == turn && map[i + 4][ii + 4] == turn)
            {
                return true;
            }
        }
    }

    // 역대각선
    for (int i = 0; i < SZ - 4; i++)
    {
        for (int ii = 4; ii < SZ; ii++)
        {
            if (map[i][ii] == turn && map[i + 1][ii - 1] == turn && map[i + 2][ii - 2] == turn && map[i + 3][ii - 3] == turn && map[i + 4][ii - 4] == turn)
            {
                return true;
            }
        }
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
        if (isWin())
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
