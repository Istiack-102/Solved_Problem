#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int n,k;
        cin>>n>>k;
        if (n>k) cout<<k<<endl;
        else {
            int ans= k+(k/(n-1));
            if (ans%n!=0) cout<<ans<<endl;
            else cout<<ans-1<<endl;
        }

    }
}
/*amra eikhan a check korbo koto gula (n-1) er group ase.
kn amra eita check korlam 
  For example, if n=3
, and k=7
, then all numbers that are not divisible by 3
 are: 1,2,3,4,5,6,7,8,9,10,11,12,13…The 7-th number among them is 10 jeheto eikhan a n=3 shehetu lokko kora jay 
      |    |     |     |       | amra proti 3 ghor por por akta element pacchi jeita n dara vag jay. tai lokko 
      kora jay je n r jonno tar ager n-1 porjonto shonkha n diye vag jbe na. r joto bar n dara vag jbe totobar 
      shonkha ti n diye vag jbe toto bar positon r value barbe. tai ami k porjonto count korlam koyta n-1 er group ase
      tar pore ami group ber kore k r sathe jog kore diyechi*/ 
      