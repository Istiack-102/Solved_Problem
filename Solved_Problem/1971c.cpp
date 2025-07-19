#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int j=min(a,b);
        int k=max(a,b);
       while (j<k)
       {
        if (j==c){  c=0; break;  }
        if (j==d){d=0; break; }
        j++;
       }
       while (k!=min(a,b))
       {
        if (k==c){ c=0; break; }
        if (k==d){ d=0; break;}
       if (k==12) { k=1; continue;}
       k++;
       }
       if (c==0 && d==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       
        }
       
    }
    /*amra  a,b niye kaj kori jdi akbar a theke b clockwise check kore jdi c othoba d
    pai r anti clockwise ghuriye jdi c othoba d pai mane manin kotha holo jdi 2 baar
    ghuriye akbar clockwise r akbar anticlockwise jdi amra c abong d dui ta ke ii pai 
    tahole answer yes hbe.... */
