#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; 
    cin >> s;
    int length = s.length();
    int bad_pairs = 0;
    
    for (int i = 0; i < length - 1; i++) {
        if (s[i] == s[i+1]) {
            bad_pairs++;
        }
    }
    
    if (bad_pairs <= 2) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}