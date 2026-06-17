#include <iostream>
#include <vector>
using namespace std;

char determineLastStripe(const vector<string> &grid)
{

    for (const string &row : grid)
    {
        bool isRed = true;
        for (char cell : row)
        {
            if (cell != 'R')
            {
                isRed = false;
                break;
            }
        }
        if (isRed)
        {
            return 'R';
        }
    }

    for (int col = 0; col < 8; ++col)
    {
        bool isBlue = true;
        for (int row = 0; row < 8; ++row)
        {
            if (grid[row][col] != 'B')
            {
                isBlue = false;
                break;
            }
        }
        if (isBlue)
        {
            return 'B';
        }
    }

    return 'R';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin.ignore();

        vector<string> grid(8);
        for (int i = 0; i < 8; ++i)
        {
            cin >> grid[i];
        }

        char result = determineLastStripe(grid);
        cout << result << endl;
    }
    return 0;
}