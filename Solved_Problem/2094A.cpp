#include<bits/stdc++.h>
using namespace std;
void solve() {
    string x;
    getline(cin, x); 
    long long size = x.size();
    cout<<x[0];
    for (long long i = 0; i < size; i++) {
        if (x[i] == ' ' && (i + 1) < size) {
            cout << x[i + 1];
            i++;
        }
    }
    cout << endl; 
}
int main() {
    int testCase;
    cin >> testCase;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (testCase--) {
        solve();
    }
    return 0;
}
/*The problem is like to find the short form of a string for 
that I print the 1st letter and then I print the letter which is after the 
space....*/