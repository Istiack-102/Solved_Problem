#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        long long x;
        cin >> x;
        bool found = false;
        
        long long y = x ^ (x - 1);
        if (y < x) {
            long long a = min({x, y, x ^ y});
            long long c = max({x, y, x ^ y});
            long long b = x + y + (x ^ y) - a - c;
            if (a + b > c) {
                cout << y << endl;
                found = true;
                continue;
            }
        }
        
        for (y = 1; y <= 100 && y < x; y++) {
            long long a = min({x, y, x ^ y});
            long long c = max({x, y, x ^ y});
            long long b = x + y + (x ^ y) - a - c;
            if (a + b > c) {
                cout << y << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}