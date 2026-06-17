#include<bits/stdc++.h>
using namespace std;

int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        int x,y;
        cin>>x>>y;
        int check= x+1-y;
        if (check>=0 && check%9==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*jodi kono number r shes a 9 thake joto gula 9 thakbe 
oikhan a jodi 1 jog kri tahole shob gula 9 bad pore 
jbe abong 9 r age je akta 9>number thakbe tar sathe 
1 jog hoye jbe taile amra lekhte pari if y=x-9k+1
then (x-y+1)/9=k here this term  (x-y+1) should be >=0 and 
should be divisible by 9.*/