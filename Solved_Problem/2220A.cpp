#include <bits/stdc++.h>
using namespace std;

void solve () {
    int len; 
    cin >> len;
    
    vector<int> vec(len);
    for (int i = 0; i < len; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    
    auto it = unique(vec.begin(), vec.end());
    int uni_count = distance(vec.begin(), it);
    
    if (len != uni_count) {
        cout << "-1" << endl;
        return;
    }
    else {
        reverse(vec.begin(), vec.end());
        for (auto i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }
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