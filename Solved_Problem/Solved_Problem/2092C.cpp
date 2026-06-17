#include<bits/stdc++.h>
using namespace std;
void prefixSum (vector<long long>&v){
    for (int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}
void solve (){
    int size,countOdd=0,countEven=0;
    cin>>size;
    vector<long long>v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
        if(v[i]%2==0) countEven++;
        else countOdd++;
    }
    if (countEven==0 || countOdd==0){
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
        return;
    }
    else {
       prefixSum(v);
       cout<<v[v.size()-1]-(countOdd-1)<<endl;
       return;
    }
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve ();
    }
}