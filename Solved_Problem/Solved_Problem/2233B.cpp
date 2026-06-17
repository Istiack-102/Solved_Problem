#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::high_resolution_clock().now().time_since_epoch().count());

bool check(vector<int> &a) {
    int n = a.size() / 4;
    vector<vector<int>> p(n);
   
    for (int i = 0; i < 4 * n; i++) {
        p[a[i]].push_back(i);
    }
    
    for (int i = 0; i < n; i++) {
        if (p[i].size() != 4) {
            return false;
        }
        if (p[i][1] - p[i][0] == p[i][2] - p[i][1] || 
            p[i][3] - p[i][2] == p[i][2] - p[i][1] || 
            p[i][3] - p[i][2] == p[i][1] - p[i][0]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            a.push_back(i);
        }
    }
    
    while (!check(a)) {
        shuffle(a.begin(), a.end(), rng);
    }
    
    for (int x : a) {
        cout << x + 1 << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}