#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int left = 0;
    int right = n - 1;
    int minimum = 1;
    int maximum = n;
 
    while (left <= right) {
        if (a[left] == minimum) {
            left++;
            minimum++;
        }
        else if (a[left] == maximum) {
            left++;
            maximum--;
        }
        else if (a[right] == minimum) {
            right--;
            minimum++;
        }
        else if (a[right] == maximum) {
            right--;
            maximum--;
        }
        else {
            break;
        }
    }
 
    if (left <= right) {
        cout << left + 1 << " " << right + 1 << "\n";
    } else {
        cout << -1 << "\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
 
    return 0;
}