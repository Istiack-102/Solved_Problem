#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool sign(ll num){
    return num>0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll j = i;
            ll maxi = arr[i];
            
           
            while(j<n  && sign(arr[i])==sign(arr[j])){
                maxi = max(maxi,arr[j]); /*joto kon same sing r number pabo totokhon
                tader max value ber korbo*/
                j++;
            }
            
            i = j-1;
            ans+=maxi;// loop shes hoye gele max value jog kore dibo.
        }
        
        cout<<ans<<endl;
    }
    return 0;
}