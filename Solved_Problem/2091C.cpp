#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << -1;
        return;
    }
    cout << 1 << " ";
    for (int i = n; i > 1; i--) {
        cout << i << ' ';
    }
}
int main() {
    int t;
    cin >> t;  
     while (t--) {
        solve();  
        cout << endl;  
    }
    return 0;  
}

