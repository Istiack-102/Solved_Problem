#include<bits/stdc++.h>
using namespace std;

void solve (){
    int  size;
    cin>>size;
    string a;
    string b;
    cin>>a>>b;

   int countFor_1=0,countFor_2=0;
    for (int i=0;i<size;i++){
       if (i%2==0){
        if (a[i]=='0') countFor_1++;
        if (b[i]=='0') countFor_2++;
       }
       else{
        if (a[i]=='0') countFor_2++;
        if (b[i]=='0') countFor_1++;
       }
    }
    if (countFor_1>=ceil(size/2.0) && countFor_2>=(size/2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main (){
    int testCase;
    cin>>testCase;
    while (testCase--)
    {
       solve();
    }
    
}
/*1st a akbar zigzag combination kore 2 ta string banabo then 
check krbo je 2 ta string a length/2 0 ase kina jdi thake tahole 
possible hobe ta na hole possible hobe na....*/