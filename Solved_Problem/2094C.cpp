#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long p[2*n];
    long long sum=0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            long long a;
            cin>>a;
            p[i+j+1]=a;
        }
    }
    p[0]=2*n*(2*n+1)/2-accumulate(p+1,p+2*n,0LL);
    for(long long i=0;i<2*n;i++){
        cout<<p[i]<<' ';
    }
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
/*here we first input the ij element in i+jth position in 1th index
then we check which element is missing then we input these elemnt in 
the 0th position....*/
