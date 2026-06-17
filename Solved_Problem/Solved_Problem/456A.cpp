#include<bits/stdc++.h>
using namespace std;
int main (){
    int numbersOfLaptops;
    cin>>numbersOfLaptops;
    for (int i=0;i<numbersOfLaptops;i++){
        int price,performance;
        cin>>price>>performance;
        if (price<performance){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
        
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}