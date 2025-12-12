#include<bits/stdc++.h>
using namespace std;
void solve (){
    long long  size; cin>> size;
    string x; cin>>x;
    // bool check=false;
    // for (long long i=0;i<size;i++){
    //     if (x[i]=='0') {
    //         check=true;
    //         break;
    //     }
    // }
    // if (check==false){
    //     cout<<0<<endl;
    //     return;
    // }
    size=size*2; x=x+x;
    int count=0, ans=0;
    for (int i=0;i<size;i++){
        if (x[i]=='1') count=0;
        else count++;
        ans=max(ans,count);
    }
    cout<<ans<<endl;

}
int main (){
    int num; cin>>num;
    while (num--){
        solve();
    }
}