#include <iostream>
using namespace std;
int main()
{
    int total, front, behind, count = 0;
    cin>>total>>front>>behind;
    for (int i = 1; i <= total; i++)
    {
        if (i - 1 >= front && total - i <= behind) // have to satiesfy both condition. 
            count++;/*position value front r che kom houa jbe na and 
            behind r che beshi houa jbe na */
    }
    cout << count << endl;
}