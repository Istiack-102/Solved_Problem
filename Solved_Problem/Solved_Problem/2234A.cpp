#include<bits/stdc++.h>
using namespace std;
void solve (){
    int k;
    cin>>k;
    vector<long long> vec (k);
    for (int i=0;i<k;i++){
        cin>> vec[i];
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    if (k==2){
        cout<<vec[0]<<" "<<vec[1]<<endl;
    }
    else {
        for (int i=0;i<k-2;i++){
            if (vec[i+2]==vec[i]%vec[i+1]){
                continue;
            }
            else {
                cout <<"-1"<<endl;
                return;
            }
        }
        cout<<vec[0]<<" "<<vec[1]<<endl;
    }
}
int main (){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve ();
    }
}