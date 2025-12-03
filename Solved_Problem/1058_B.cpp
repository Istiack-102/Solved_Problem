#include <bits/stdc++.h>
using namespace std;

void Solve() {
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long &x : arr) {
        cin >> x;
    }

    vector<long long> brr;
    brr.push_back(1);
    long long now = 1;

    for (long long i = 1; i < n; i++) {
        long long delta = arr[i] - arr[i - 1];

        if (delta > (long long)brr.size()) {
            now++;
            brr.push_back(now);
        } else {
            brr.push_back(brr[brr.size() - delta]);
        }
    }

    for (long long x : brr) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
