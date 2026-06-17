#include<bits/stdc++.h>
using namespace std;
int main (){
   long long  testCase;
    cin>>testCase;
    while (testCase--){
      long long size;
       cin>>size;
       string x;
       cin>>x;
      long long countUnder=0,countHigh=0;
        for (int i=0;i<size;i++){
            if (x[i]=='_') countUnder++;
            if (x[i]=='-') countHigh++;
        }
       if (countHigh%2==0) cout<< (countHigh/2)*countUnder*(countHigh/2)<<endl;
       else cout<< (countHigh/2)*countUnder*((countHigh/2)+1)<<endl;
    }
    
}
/*here "-_-" eita ache tai amra count korbo koyta under ache koyta high ase 
pore tader max combination ber korbo... max combination = (total number of A )* (total number of B )
for 2 elements. eikhan a 3 ta element ache tai amra a*b*c korechi. amra countHigh ke max vabe divide 
korechi jate multiplication korle highest pai. even r jonno eita thik ache but odd r jonno akta 
extra thake tai oita ej kono ak pashe jog kore disi. then gun kore answer ber korlam.....*/