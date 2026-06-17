#include<iostream>
using namespace std;
typedef long long ll;
int main (){
    int test_case;
    cin>>test_case;
    for (int i=0;i<test_case;i++){
       ll a,b,c;
       int check=0;
       cin>>a>>b>>c;
       if (a-b==b-c) check=1;
       else if (a+c>0 && (a+c)%(2*b)==0) check=1;
       else if ((2*b-a)>0 &&(2*b-a)%c==0 ) check=1;
       else if ((2*b-c)>0 &&(2*b-c)%a ==0) check=1;
       else check=0;

       if (check==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
}
/*For that amra eivabe chinta korte pari je a-b=b-c then amra pabo 2b=a+c.
akn amra jdi a b c protteker r sathe m gun kore m r man ber kore dekhte pari
je m r nam akti positive integer tahole yes print kore dibo.*/