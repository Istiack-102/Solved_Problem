#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the sentence you want to print :" << endl;
    string x;
    getline(cin, x);
    cout << "Enter how many times you want to print the sentence :" << endl;
    int num;
    cin >> num;
    int i=1;
    while (num--)
    {
        cout << x <<" "<<i<< endl;
        i++;
    }
}