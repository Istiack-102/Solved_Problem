#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    string s;
    cin >> s;

    vector<long long> v(n);
    v[0] = 0;

    long long left = 0, right = 0;
    for (long long i = 0; i < n - 1; i++) {
        if (s[i] == '<') {
            left--;
            v[i + 1] = left;
        } else {
            right++;
            v[i + 1] = right;
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << v[i] - left + 1 << " ";
    }
    cout << '\n';
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
