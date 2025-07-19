#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s; 
    int testCase;
    cin >> testCase; 

    int length = s.size();
    int dp[length]; 

    
    dp[0] = 0; 
    for (int i = 1; i < length; i++) {
        dp[i] = dp[i - 1]; 
        if (s[i] == s[i - 1]) { 
            dp[i]++; 
        }
    }

        for (int i = 0; i < testCase; i++) {
        int first, second;
        cin >> first >> second; 
    
        cout << dp[second - 1] - dp[first - 1] << endl;
    }

    return 0;
}