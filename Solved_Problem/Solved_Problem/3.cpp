#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        string x;
        cin >> x;

        int size = x.size();
        int count = 0, count_1 = 0;

        // Count occurrences of '0' and '1'
        for (int i = 0; i < size; i++) {
            if (x[i] == '0') count++;
            if (x[i] == '1') count_1++;
        }

        // Check number of transitions (from '0' to '1' or '1' to '0')
        int transitions = 0;
        for (int i = 0; i < size - 1; i++) {
            if (x[i] != x[i + 1]) {
                transitions++;
            }
        }

        // Compare the counts or transitions to determine the output
        if (transitions+count>count_1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
}
}
