#include <bits/stdc++.h>
using namespace std;
int withOutAI (int n, int x, int y, int z){
    return ceil(n * 1.0 / (x + y));
}
int withAI (int n, int x, int y, int z){
    if (x * z >= n) {
        
        return ceil(n * 1.0 / x);
    }
    int remaining_n = n - (x * z);
    int new_speed = x + (10 * y);
    return z + ceil(remaining_n * 1.0 / new_speed);
}
void solve () {
   int n, x, y, z;
   cin >> n >> x >> y >> z;
   int res1 = withOutAI(n, x, y, z);
   int res2 = withAI(n, x, y, z);
   cout << min(res1, res2) << "\n";
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