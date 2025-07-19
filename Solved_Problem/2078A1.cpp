#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        // Create chain: 1->2, 2->3, ..., (n-1)->n
        for (int i = 0; i < n - 1; ++i) {
            a[i] = i + 2; // 1-based to 1-based
        }
        
        // Handle exit cell: n -> (n-1)
        if (n > 1) {
            a[n - 1] = n - 1;
        }
        
        // Output the configuration
        for (int num : a) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}