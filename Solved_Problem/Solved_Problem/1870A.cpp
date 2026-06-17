#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve() {
    int arrSize, MEX, highestValue;
    cin >> arrSize >> MEX >> highestValue;

    if (arrSize < MEX || highestValue < MEX - 1) {
        cout << -1 << nl;
        return;
    }

    int baseSum = (MEX * (MEX - 1)) / 2;  

    int remaining = arrSize - MEX;
    int repeatVal = highestValue;

    if (repeatVal == MEX) repeatVal--;  

    baseSum += repeatVal * remaining;
    cout << baseSum << nl;
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
}
