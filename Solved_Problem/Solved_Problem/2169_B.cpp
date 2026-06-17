#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n==1) {
            cout<<1<<endl;
            continue;
        }
        bool onlyStars = true;
        for (char c : s) {
            if (c != '*') {
                onlyStars = false;
                break;
            }
        }
        if (onlyStars) {
            cout << -1 << "\n";
            continue;
        }
 
        bool infinite = false;
        for (int i = 0; i + 1 < n; i++) {
            if ((s[i] == '*' && s[i+1] == '<') || s[i]=='*'&& s[i+1]=='*'|| s[i]=='>'&&s[i+1]=='<'||
                (s[i] == '>' && s[i+1] == '*')) {
                infinite = true;
                break;
            }
        }
 
        if (infinite) {
            cout << -1 << "\n";
            continue;
        }
 
       int left=0,right=0,star=0;
       for (int i=0;i<n;i++){
        if (s[i]=='>') right++;
        else if (s[i]=='<') left++;
        else star++;
       }
       if (star==1 || star==0){
        cout<<max(right+star,left+star)<<endl;
       }
       else cout<<-1<<endl;
    }
}