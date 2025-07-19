#include <iostream>
#include <cmath>
using namespace std;
void solve() {
    long long n, m, l, r;
    cin >> n >> m >> l >> r;
    long long diff = n - m;
    if (abs(l) >= diff) {
        cout << (l + diff) << " " << r << '\n';
    } else {
        cout << 0 << " " << (r - l - diff) << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }

    return 0;
}
