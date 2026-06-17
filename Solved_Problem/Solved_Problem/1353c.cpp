#include <iostream>
using namespace std;

long long minimumMoves(long long n) {
    long long totalMoves = 0;
    for (int i = 1; i <= n / 2; ++i) {
       totalMoves = n*((n*n)-1)/3;
    }
   
    
    return totalMoves;
}

int main() {
    long long  testCase;
    cin >> testCase;  
    
    for (int i = 0; i < testCase; ++i) {
        long long  n;
        cin >> n;  
        cout << minimumMoves(n) << endl;  
    }
    
    return 0;
}
/* direct formula.....*/