#include <iostream>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    
    for (int i = 0; i < test_case; i++) {
        long long n, k;
        cin >> n >> k;
        
        
        long long sum = n; 
        long long remainder = sum % k;
        long long additional = (remainder == 0) ? 0 : k - remainder;
        
        
        long long min_max = 1 + (additional + n - 1) / n;
        
        cout << min_max << endl;
    }
    
    return 0;
}
/*dhore nilam array 1 diye initial kora tahole reminder ber kore shobar maje man ta vag kore dibo*/