#include<bits/stdc++.h>
using namespace std;

void solve() {
    int R, X, D, n;
    cin >> R >> X >> D >> n;

    string container;
    cin >> container;

    int cur = R;     
    int ans = 0;     

    for (int i = 0; i < n; i++) {

        if (container[i] == '1') {
            
            ans++;

            
            cur = max(0, cur - D);
        }
        else { 
            if (cur < X) {
               
                ans++;
                cur = max(0, cur - D); 
            }
            else {
               
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int num;
    cin >> num;
    while (num--) {
        solve();
    }
}
