#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            k = max(k, a[i] - a[i + 1]);
        }
    }

    if (k == 0) {
        cout << "YES\n";
        return;
    }

    bool possible = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            a[i + 1] += k;
        }
        if (a[i] > a[i + 1]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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