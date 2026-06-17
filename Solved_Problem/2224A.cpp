#include <iostream>

using namespace std;

long long a[2000005];

void solve() {
    int n;
    if (scanf("%d", &n) == EOF) return;

    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }

    for (int i = n - 1; i >= 1; --i) {
        if (a[i + 1] > 0) {
            a[i] += a[i + 1];
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] > 0) {
            ans++;
        }
    }

    printf("%d\n", ans);
}

int main() {
    int T;
    if (scanf("%d", &T) != EOF) {
        while (T--) {
            solve();
        }
    }
    return 0;
}