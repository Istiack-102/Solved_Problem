#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> odd, even;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());

    if (odd.empty()) {
        for (int i = 0; i < n; i++) cout << 0 << " ";
        cout << "\n";
        return;
    }

    vector<long long> prefEven(even.size() + 1, 0);
    for (int i = 0; i < even.size(); i++)
        prefEven[i + 1] = prefEven[i] + even[i];

    int oddTaken = 1;
    int evenTaken = 0;

    for (int k = 1; k <= n; k++) {
        if (k > 1) {
            if (evenTaken < even.size()) {
                evenTaken++;
            } else {
                if (oddTaken + 2 <= odd.size() && evenTaken > 0) {
                    oddTaken += 2;
                    evenTaken--;
                } else {
                    oddTaken++;
                }
            }
        }

        if (oddTaken <= odd.size() && oddTaken % 2 == 1) {
            cout << odd.back() + prefEven[evenTaken] << " ";
        } else {
            cout << 0 << " ";
        }
    }

    cout << "\n";
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