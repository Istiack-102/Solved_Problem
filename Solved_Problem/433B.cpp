#include<bits/stdc++.h>
using namespace std;

void prefixSum(vector<long long>& arr) {
    for (long long i = 1; i < arr.size(); i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    long long size;
    cin >> size;
    vector<long long> vectorWithoutSorting(size);

    for (long long i = 0; i < size; i++) {
        cin >> vectorWithoutSorting[i];
    }

    vector<long long> vectorWithSorting = vectorWithoutSorting;
    sort(vectorWithSorting.begin(), vectorWithSorting.end());
    prefixSum(vectorWithoutSorting);
    prefixSum(vectorWithSorting);

    long long testCase;
    cin >> testCase;

    for (long long i = 0; i < testCase; i++) {
        long long determiner, first, last;
        cin >> determiner >> first >> last;

        first--; // to take this 0 index.
        last--;

        if (determiner == 1) {
            long long ans = vectorWithoutSorting[last];
            if (first > 0) {
                ans -= vectorWithoutSorting[first - 1];
            }
            cout << ans << endl;
        } else {
            long long ans = vectorWithSorting[last];
            if (first > 0) {
                ans -= vectorWithSorting[first - 1];
            }
            cout << ans << endl;
        }
    }

    return 0;
}