#include<bits/stdc++.h>
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=n+1;
        for(int i=0;i<n;i++){
            cout<<max-arr[i]<<' ';
        }
        cout<<endl;

    }

return 0;
}