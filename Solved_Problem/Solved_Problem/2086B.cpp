#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long totalSum = accumulate(a.begin(), a.end(), 0LL);

    if (x > k * totalSum) {
        cout << "0\n";
        return;
    }

    long long remainingX = x % totalSum;
    long long fullQuotients = x / totalSum;

    if (remainingX == 0) {
        fullQuotients--;
        remainingX = totalSum;
    }

    long long answer = n * k - fullQuotients * n;
    long long suffixSum = 0;

    for (long long i = n - 1; i >= 0; i--) {
        suffixSum += a[i];
        if (suffixSum >= remainingX)
            break;
        answer--;
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }

    return 0;
}
