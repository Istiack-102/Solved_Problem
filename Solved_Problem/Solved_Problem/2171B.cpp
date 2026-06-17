#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool isPerfectSquare(ll n) {
    ll root = sqrtl(n);
    return root * root == n;
}
void solve() {
    ll n;
    cin >> n;
    ll totalSum = (n * (n + 1)) / 2;
    if (isPerfectSquare(totalSum)) {
        cout << -1 << "\n";
        return;
    }
    vector<ll> permutation(n);
    for (ll i = 0; i < n; i++) {
        permutation[i] = i + 1;
    }
    ll sum = 0;
    vector<ll> result;
    for (ll i = 0; i < n; i++) {
        if (isPerfectSquare(sum + permutation[i]) && i + 1 < n) {
            swap(permutation[i], permutation[i + 1]);
        }
        result.push_back(permutation[i]);
        sum += permutation[i];
    }
    for (ll num : result) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    ll testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
}
/*jokon dekhbo sum ta perfect sum thokon just elemnet gula 
exchange kore dibo.... */

