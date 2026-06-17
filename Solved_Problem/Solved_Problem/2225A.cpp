#include<bits/stdc++.h>
using namespace std;
void solve (){
    long long  x,y; cin>>x>>y;
    if (y>2*x){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--){
        solve ();
    }
}