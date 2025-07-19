#include<bits/stdc++.h>
using namespace std;
int main (){
   long long  testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        long long sum,distinctElements;
        cin>>sum>>distinctElements;
        if (sum%2==distinctElements%2 && distinctElements*distinctElements<=sum ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*jodi 1st n ti distinct odd element r man sum r che boro 
hoye jay tahole dekha jbe oita r  possible na. 1st n ti 
odd distinct value r nam= n^2. n jodi odd hoy tahole sumation ta 
all time odd a asbe r jdi n even hoy tahole sumation o all time even a asbe   */