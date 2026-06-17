#include<bits/stdc++.h>
using namespace std;
void solve (){
    int size;
    cin>>size;
    if (size%2==0){
        cout<<"-1"<<endl;
        return;
    }
    cout<<size<<" ";
    for (int i=1;i<size;i++)
    cout<<i<<" ";
    cout<<endl;
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve();
    }
}