#include<bits/stdc++.h>
using namespace std;
void solve (){
    int size,odd=0,even=0; cin>>size;
    vector<int> container (size);
    for (int i=0;i<size;i++){
        int x; cin>>x;
        if (x%2==0) even++;
        else odd++;
        container[i]=x;
    }
    if (even==0 || odd==0){
        for (auto x: container){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else {
        sort(container.begin(),container.end());
        for (auto x: container){
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
int main (){
    int num; cin>> num;
    while (num--){
        solve();
    }
}