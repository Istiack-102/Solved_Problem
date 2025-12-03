#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        
        for (int i = 0; i < n; i++) {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
