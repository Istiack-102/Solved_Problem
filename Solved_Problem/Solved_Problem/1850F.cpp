#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> count(n + 1, 0);
    vector<long long> multipleCount(n + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= n) {
            count[x]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            multipleCount[j] += count[i];
        }
    }

    sort(multipleCount.begin(), multipleCount.end());
    cout << multipleCount.back() << "\n";
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
