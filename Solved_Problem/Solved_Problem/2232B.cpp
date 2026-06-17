#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long current_sum = 0;
    long long max_possible_height = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];
        long long current_avg = current_sum / (i + 1);
        max_possible_height = min(max_possible_height, current_avg);
        cout << max_possible_height << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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