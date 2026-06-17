#include<bits/stdc++.h>
using namespace std;
void solve (){
    string  x;
    cin>>x;
    long long size= x.size(),ans=0,index=-1;
    for (long long i=size-1;i>=0;i--){
        if (x[i]>='1') {
            index=i;
            break;
        }
        else ans++;
    }
    if (index==-1){
        cout<<ans<<endl;
        return;
    }
    for (int i=0;i<index;i++){
        if (x[i]>'0') ans++;
    }
    cout<<ans<<endl;
    return;
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve();
    }
}
/*the question is like this For example, the cost of the number 104
 is 104/1+0+4=20.8
, and the cost of the number 111
 is 111/1+1+1=37
. For example, you are given the number 103554
. If you decide to remove the digits 1
, 4
, and one digit 5
, you will end up with the number 035
, whose cost is 035/0+3+5=4.375
.
so if I just divide the number with a number that exist in the string then 
the cost will be 1 it is the most minimun rigth but there is a trick also we also 
maintain that min number we can delete it means we can delete the 0's from the back side 
not form the fornt side for that if we check from the last that in which position we 
have a number is>0 then we store that and then we again run a loop from the start 
and count how many number is >0 because we can't delete the 0 from the start...*/