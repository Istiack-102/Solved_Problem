#include<bits/stdc++.h>
using namespace std;
void solve (){
    int size;
    cin>>size;
    vector<int> v(size-2);
    for (int i=0;i<size-2;i++){
        cin>>v[i];
    }
    for (int i=0;i<size-2-2;i++){
        if (v[i]==1 && v[i+1]==0 && v[i+2]==1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve ();
    }
}
/*101 this combination is not possible.*/