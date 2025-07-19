#include<iostream>
using namespace std;
int main (){
long long x;
cin>>x;
int d=0;
while (x!=0)
{
   if (x%10==1){
    x=x/10;
    continue;
   }
   else if (x%100==14){
    x=x/100;
    continue;
   }
   else if (x%1000==144){
    x=x/1000;
    continue;
   }
   else {
    d=1;
    break;
   }
}
if (d==1) cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
