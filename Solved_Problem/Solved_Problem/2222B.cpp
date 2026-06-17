#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        vector<int> odd, even;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            if(i % 2) odd.push_back(x);
            else even.push_back(x);
        }
        
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        bool podd = false, peven = false;
        while(m--) {
            int i; cin >> i;
            if(i % 2) {
                if(!odd.empty() && !(odd.back() < 0 && podd)) {
                    odd.pop_back();
                    podd = true;
                }
            }
            else {
                if(!even.empty() && !(even.back() < 0 && peven)) {
                    even.pop_back();
                    peven = true;
                }
            }
        }
        
        ll ans = accumulate(odd.begin(), odd.end(), 0ll) + accumulate(even.begin(), even.end(), 0ll);
        cout << ans << "\n";
    }
    return 0;
}