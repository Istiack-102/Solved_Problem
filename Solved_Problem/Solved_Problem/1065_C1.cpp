#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int xor_diff = 0;
        int last = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                xor_diff ^= 1;     
                last = i + 1;    
            }
        }

        if (xor_diff == 0) {
            cout << "Tie\n";
        } else {
            if (last % 2 == 1) cout << "Ajisai\n";
            else cout << "Mai\n";
        }
    }

    return 0;
}
