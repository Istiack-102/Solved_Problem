#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int size, window;
    cin >> size >> window;
    vector<int> v(size);
    
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    
    if (size < window) {
        cout << "1" << endl;
        return 0;
    }
    
    int windowSum = 0;
    for (int i = 0; i < window; i++) {
        windowSum += v[i];
    }
    
    int minSum = windowSum;
    int pos = 1;
    
    for (int i = window; i < size; i++) {
        windowSum += v[i] - v[i - window];
        if (windowSum < minSum) {
            minSum = windowSum;
            pos = i - window + 2; 
        }
    }
    
    cout << pos << endl;
    return 0;
}