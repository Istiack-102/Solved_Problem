#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, c;
    cin >> n >> c;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long left = 1;
    long long right = 1000000000;
 
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long sumAll = 0;
 
        for (int i = 0; i < n; i++) {
            long long value = a[i] + 2 * mid;
            sumAll += value * value;
 
            if (sumAll > c) {
                break;
            }
        }
 
        if (sumAll == c) {
            cout << mid << "\n";
            return;
        }
        else if (sumAll > c) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}