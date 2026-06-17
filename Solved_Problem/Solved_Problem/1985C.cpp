#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int size;
        cin >> size;
        vector<int> arr(size);
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }

        vector<long long> prefixSum(size);
        prefixSum[0] = arr[0];
        for (int i = 1; i < size; ++i) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        int count = 0;
        int currentMax = INT_MIN;
        for (int j = 0; j < size; ++j) {
            if (arr[j] > currentMax) {
                currentMax = arr[j];
            }
            if (prefixSum[j] == 2LL * currentMax) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
/*jodi sub array r total sum max r 2 gun hoy 
tahole amra bujbo eita akta good array. karon onno
shob gula element r sum max r shoman ba tar che boro 
hbe.*/