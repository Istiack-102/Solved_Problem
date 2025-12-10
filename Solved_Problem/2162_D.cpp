#include <iostream>
using namespace std;

long long query(long long type, long long l, long long r) {
    cout << type << " " << l << " " << r << endl;
    long long x;
    cin >> x;
    return x;
}

void solve() {
    long long n;
    cin >> n;
    
    long long lo = 1, hi = n, left = -1;
    
    while (hi >= lo) {
        long long mid = lo + (hi - lo) / 2;
        
        if (query(2, 1, mid) != query(1, 1, mid)) {
            left = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    
    long long len = query(2, left, n) - query(1, left, n);
    long long right = left + len - 1;
    
    cout << "! " << left << " " << right << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
