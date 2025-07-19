#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        long long x,count=0;
        cin>>x;
        long long reminder=x%15;
        long long subAns= (x/15) *3;
        count+=subAns;
        for (int i=0;i<=reminder;i++){
            if (i%3 == i%5) count++;
        }
        cout<<count<<endl;   
    }
}
/*If we notice that in every after 15 times reminder of 3 and 5
equals 3 times and for that we direct determine our subans and 
the we have to chaeck if the number has any reminder for 15 
then for that reminder we take a loop and count how many matches we
can find...*/