#include<bits/stdc++.h>
using namespace std;
bool check (string s1,string s2){
    vector<int>freq(26,0);
    if (s1.size()!=s2.size()) return false;
    else {
        for (int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        for (int i=0;i<26;i++){
            if (freq[i]!=0) return false;
        }
    }
    return true;
}
int main (){
    string s1,s2;
    cin>>s1>>s2;
    if (check(s1,s2)) cout<<"YES";
    else cout <<"NO";
   
}