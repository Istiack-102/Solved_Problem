#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int initialOnes = 0;

   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            initialOnes++;
        }
    }

   
    if (initialOnes == n) {
        cout << n - 1 << endl;
        return 0;
    }

    int maxGain = 0;
    int currentGain = 0;

    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            currentGain++;
        } else {
            currentGain--;
        }

        
        if (currentGain < 0) {
            currentGain = 0;
        }

       
        if (currentGain > maxGain) {
            maxGain = currentGain;
        }
    }

   
    int maxOnes = initialOnes + maxGain;

    cout << maxOnes << endl;

    return 0;
}