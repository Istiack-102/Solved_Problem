#include<iostream>
using namespace std;
int main (){
    int test_case;
    cin>>test_case;
    for (int i=0;i<test_case;i++){
        int number;
        cin>>number;
        if (number%2!=0) number=number-1;
        int smallNumber= number/2;
        int maxGcd=0;
        for (int i=1;i<=smallNumber;i++){
            if (number%i==0 && smallNumber%i==0){
                if (i>maxGcd) maxGcd=i;
            }

        }
        cout<<maxGcd<<endl;
 
    }

}