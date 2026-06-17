#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,a,b; cin>>n>>a>>b;
    if (a<=(b/3)){
        cout<<n*a<<endl;
        return;
    }
    
    long long  group_max= n/3;
    if (n%3!=0)group_max+=1; 
    group_max= group_max*b;
        
    
    long long group= n/3;
    group= group*b;
    long long single=n%3;
    single=single*a;
    cout<<min(group_max,single+group)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}