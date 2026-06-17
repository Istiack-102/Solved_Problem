#include<bits/stdc++.h>
using namespace std;

int main() {
    long long testCase;
    cin >> testCase;
    for (long long i = 0; i < testCase; i++) {
        long long size, difference;
        cin >> size >> difference;
        vector<long long> v;
        for (long long j = 0; j < size; j++) {
            long long ele;
            cin >> ele;
            v.push_back(ele);
        }
        sort(v.begin(), v.end());

        long long maxCount = 1;
        long long count = 1;
        for (long long j = 0; j < size - 1; j++) {
            if (v[j + 1] - v[j] <= difference) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                }
            } else {
                count = 1;
            }
        }

        cout << size - maxCount << endl;
    }
    return 0;
}
/*max sequence ber kore full sequence bad diye diyechi tahole amra minimum jeigula bad 
dibo ta peye jabo.*/