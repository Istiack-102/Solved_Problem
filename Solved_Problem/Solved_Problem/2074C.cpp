#include<bits/stdc++.h>
using namespace std;
int main (){
   long long  testCase;
    cin>>testCase;
    while(testCase--){
        long long x;
        cin>>x;
        int ans=-1;
        for (int i=0;i<30;i++){
           long long  y= (1<<i) -1;
           long long  z= x^y;
            if (y<x && x+y>z && y+z>x && z+x>y){
                ans=y;
                break;
            }
        }
        cout<<ans<<endl;
    }
}