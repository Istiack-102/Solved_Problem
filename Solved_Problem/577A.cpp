#include <iostream>
using namespace std;

int main()
{
    long long row, number, count = 0;
    cin >> row >> number;

    if (number == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i * i <= number && i <= row; i++)
    {
        if (number % i == 0)
        {

            long long j = number / i;
            if (j <= row)
            {
                if (i == j)
                {

                    count++;
                }
                else
                {

                    count += 2;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}