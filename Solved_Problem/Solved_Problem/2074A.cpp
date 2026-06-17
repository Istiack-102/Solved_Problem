#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if ((w==x)&&(x==y)&& (y==z)&&(z==x)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}