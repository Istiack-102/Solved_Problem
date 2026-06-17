#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l, a, b; 
    cin >> l >> a >> b;
    
    int maxPrize = a;
    int current = a;
    
    while (true) {
        current = (current + b) % l;
        maxPrize = max(maxPrize, current);
        
        if (current == a) {
            break;
        }
    }
    
    cout << maxPrize << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}