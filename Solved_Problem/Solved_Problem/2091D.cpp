#include<iostream>
using namespace std;
typedef long long ll;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll low=1,high=m;
    while(low<high){
        ll mid=(low+high)/2;
        ll groups=mid+1;
        ll fullGroups=m/groups;
        ll remainder=m%groups;
        ll candies=n*(mid*fullGroups+remainder);
        if(candies>=k)
            high=mid;
        else
            low=mid+1;
    }
    cout<<low<<'\n';
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
