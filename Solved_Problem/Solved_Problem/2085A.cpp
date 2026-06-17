#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long expo(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

long long mminvprime(long long a, long long b) {
    return expo(a, b - 2, b);
}

long long mod_mul(long long a, long long b, long long m) {
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

long long mod_sub(long long a, long long b, long long m) {
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

long long mod_div(long long a, long long b, long long m) {
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;  // Only for prime m
}

void solve() {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    bool flag = false;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            flag = true;
            break;
        }
    }
    if (k >= 1) {
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    if (!flag) {
        cout << "NO" << endl;
        return;
    }

    int i = 0, j = n - 1;
    string t = s;
    reverse(s.begin(), s.end());

    if (t < s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
