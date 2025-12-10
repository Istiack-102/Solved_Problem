#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];
        bool is_consecutive = true;
        for (int i = 1; i < m; ++i) {
            if (a[i] != a[i-1] + 1) {
                is_consecutive = false;
                break;
            }
        }
        
        int count = 0;
        
        if (!is_consecutive) {
            count = 1;
        } else {
            int start = a[0];
            if (start + m - 1 <= n) {
                count = n - start - m + 2;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}