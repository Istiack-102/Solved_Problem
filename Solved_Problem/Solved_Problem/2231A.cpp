#include <bits/stdc++.h>
using namespace std;

void solve () {
    int len; 
    cin >> len;
    for (int i=len;i<2*len;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}