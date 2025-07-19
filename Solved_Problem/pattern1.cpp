#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
            cout << " ";
        int num = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            if (j >= 2)
                num++;
        }
        while (num!=0)
        {
           
            cout<<num;
            num--;
        }
        cout<<endl;
    }
}
