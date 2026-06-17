#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool solve() {
    long long x, k;
    cin >> x >> k;

    if (x > 1 && k > 1) {
        return false;
    }

    if (k == 1) {
        return isPrime(x);
    }
    assert(x == 1);
    string s(k, '1'); 
    long long num = stoll(s); 

    return isPrime(num);
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
