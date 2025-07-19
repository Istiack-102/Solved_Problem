#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long minimum = *min_element(a.begin(), a.end());

    if (count(a.begin(), a.end(), minimum) > 1) {
        cout << "YES\n";
        return;
    }

    long long gcdValue = 0;
    for (long long i = 0; i < n; ++i) {
        if (a[i] % minimum == 0 && a[i] != minimum) {
            gcdValue = __gcd(gcdValue, a[i]);
        }
    }

    if (gcdValue == minimum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
/*The gcd will be the min of the array. so 1st seleect the min.
If the min is present 2 times in the array then it is sure that
the gcd will the min because we just input the another min to another
sub array. In the other case after selecting the min value we find the 
element of multiple of min and the others element we will move to another array where we 
kept the min. After doing that in that array the min is still min. */
