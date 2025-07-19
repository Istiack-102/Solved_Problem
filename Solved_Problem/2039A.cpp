#include <iostream>
using namespace std;
const int MOD = 1000000007;
void add(int &x, int y)
{
    x += y;
    if (x >= MOD)
        x -= MOD;
    if (x < 0)
        x += MOD;
}
int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cout << i + (i - 1) << " ";
        cout << '\n';
    }
    return 0;
}
