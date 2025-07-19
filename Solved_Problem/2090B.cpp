#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '0') {
                continue;
            }
            bool valid = true;
            for (int k = 0; k < i; ++k) {
                if (grid[k][j] == '0') {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                continue;
            }
            valid = true;
            for (int k = 0; k < j; ++k) {
                if (grid[i][k] == '0') {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
