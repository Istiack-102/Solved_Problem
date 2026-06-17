#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int arraySize, leftIndex, rightIndex;
        cin >> arraySize >> leftIndex >> rightIndex;
        
        vector<int> prefix(arraySize + 1);
        for (int i = 1; i <= arraySize; i++) {
            prefix[i] = i;
        }
        
        prefix[rightIndex] = leftIndex - 1;
        
        vector<int> result(arraySize);
        for (int i = 1; i <= arraySize; i++) {
            result[i - 1] = prefix[i] ^ prefix[i - 1];
        }
        
        for (int i = 0; i < arraySize; i++) {
            cout << result[i];
            if (i < arraySize - 1) cout << " ";
        }
        cout << '\n';
    }
    
    return 0;
}