#include<bits/stdc++.h>
using namespace std;
string longestPrefix(vector<string> &x ){
    sort(x.begin(),x.end());
        string s1=x[0];
        string s2=x[x.size()-1];
        string ans="";
        for (int i=0,j=0;i<s1.size() && j<s2.size();i++,j++){
            if (s1[i]==s2[j]) ans+=s1[i];
            else break;
        }
        return ans;
}
int main (){
    int n;
    cin>>n;
    vector<string> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<longestPrefix(v); 
}