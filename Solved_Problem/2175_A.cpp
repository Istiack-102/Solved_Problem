#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Solve() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);  
        }
        
       
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        int k = v.size();  
        
       
        bool found = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] >= k) {
                cout << v[i] << "\n";  
                break;
            }
        }
        
       
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    Solve(); 
    return 0;
}
