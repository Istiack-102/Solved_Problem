#include<bits/stdc++.h>
using namespace std;
void solve (){
    int size; cin>>size;
    vector<int> x(size);
    for (int i=0;i<size;i++){
        cin>>x[i];
    }
    sort (x.begin(),x.end());
    cout<<x[size-1]<<endl;
}
int main (){
    int size; cin>>size;
    while (size--){
        solve();
    }
}