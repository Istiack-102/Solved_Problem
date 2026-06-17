#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> a(n, 0);
    bool possible = true;
    
    // Process 'L's from left to right
    set<int> left_set;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            a[i] = left_set.size();
        }
        if (i > 0) {
            left_set.insert(a[i-1]);
        }
    }
    
    // Process 'R's from right to left
    set<int> right_set;
    for (int i = n-1; i >= 0; --i) {
        if (s[i] == 'R') {
            a[i] = right_set.size();
        }
        if (i < n-1) {
            right_set.insert(a[i+1]);
        }
    }
    
    // Verify the array
    left_set.clear();
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            if (left_set.size() != a[i]) {
                possible = false;
                break;
            }
        }
        if (i > 0) {
            left_set.insert(a[i-1]);
        }
    }
    
    right_set.clear();
    for (int i = n-1; i >= 0; --i) {
        if (s[i] == 'R') {
            if (right_set.size() != a[i]) {
                possible = false;
                break;
            }
        }
        if (i < n-1) {
            right_set.insert(a[i+1]);
        }
    }
    
    if (!possible) {
        cout << -1 << '\n';
    } else {
        for (int num : a) {
            cout << num << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}