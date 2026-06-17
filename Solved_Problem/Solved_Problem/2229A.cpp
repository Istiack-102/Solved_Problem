#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> unique_elements;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        unique_elements.insert(val);
    }
    
    int min_val = *unique_elements.begin();
    int max_val = *unique_elements.rbegin();
    
    cout << ((max_val - min_val) + 1) / 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}