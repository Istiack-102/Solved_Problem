#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin >> s;
    vector<int> freq(26, 0);

    for (int i=0;i<s.size();i++) {
        freq[s[i]-'a']++;
    }
     for (int i=0;i<26;i++) {
        while(freq[i]--) {
            cout << (char)(i + 'a'); 
        }
    }

    return 0;
}
