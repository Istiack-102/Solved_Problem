#include <bits/stdc++.h>
using namespace std;

int main() {
    long long size, k;
    cin >> size >> k;
    
    vector<long long > v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    if (k == 0) {
        if (v[0] > 1) {
            cout << 1 << endl;
        } 
        else {
            cout << -1 << endl;
        }
    } else if (k == size) {
        
        if (v[size-1] < 10e9) {
            cout << v[size-1] << endl; 
        } else {
            cout << -1 << endl; //max nmuber 10^9 er behshi hole r possible hbe na 
        }
    } else {
        if (v[k-1] == v[k]) { // k ta nmuber shoman ba choto hote hobe but eikhan a k+1 ta nmuber hoye jbe.
            cout << -1 << endl;
        } else {
            cout << v[k-1] << endl;
        }
    }

    return 0;
}