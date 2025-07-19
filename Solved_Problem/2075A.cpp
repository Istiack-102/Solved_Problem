#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            cout << (n + k - 2) / (k - 1) << endl;
        } else {
            cout << 1 + (n - 2) / (k - 1) << endl;
        }
    } 
    return 0;
}
/*odd even concept akta bijor theke akta odd biyog korle all time 
even paoa jabe....*/