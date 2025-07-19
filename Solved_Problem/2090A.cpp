#include<bits/stdc++.h>
using namespace std;
void ans (){
    long long x,y,a;
    cin>>x>>y>>a;
    long long remaining = a%(x+y);
    if (remaining-x<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--)
    {
        ans();
    }
    
}