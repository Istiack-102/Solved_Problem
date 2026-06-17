#include<bits/stdc++.h>
using namespace std;
void min (int &x,int &y,int &z){
    if (x<=y && x<=z) {x++;return;}
    else if (y<=z && y<=x){
        y++;
        return;
    }
    else{
        z++;
        return;
    }
}
void solve (){
    int x,y,z;
    cin>>x>>y>>z;
    for (int i=0;i<5;i++){
        min(x,y,z);
    }
    cout<<x*y*z<<endl;
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve();
    }
}
/*The value which is smaller among all the values if 
we increase the value then the multiplication will
be increased and if we increase the value which is 
greater among all the values then the multiplication 
will be decreased...*/