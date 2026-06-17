#include <bits/stdc++.h>
using namespace std;

void solve() {
    int len; 
    cin >> len;
    vector<long long> vec(len);
    bool has_pos = false;
    bool has_neg = false;
    
    for (int i = 0; i < len; i++) {
        cin >> vec[i];
        if (vec[i] > 0) has_pos = true;
        if (vec[i] < 0) has_neg = true;
    }
    
    if (has_pos == false) {
        cout << 0 << "\n";
        cout << "\n";
        return;
    }
    
    if (has_neg == false) {
        cout << 1 << "\n";
        cout << len << "\n";
        return;
    }
    
    vector<int> operations;
    int flip_count = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        long long current_val = vec[i];
        
        if (flip_count % 2 != 0) {
            current_val = -current_val;
        }
        
        if (current_val > 0) {
            operations.push_back(i + 1);
            flip_count++;
        }
    }
    
    cout << operations.size() << "\n";
    for (int i = 0; i < operations.size(); i++) {
        cout << operations[i] << (i == operations.size() - 1 ? "" : " ");
    }
    cout << "\n";
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