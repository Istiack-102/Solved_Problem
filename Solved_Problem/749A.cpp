#include<iostream>
using namespace std;
int main (){
    int number;
    cin>>number;
    if (number%2==0){
       cout<<number/2<<endl; 
       for (int i=0;i<number/2;i++){
        cout<<"2"<<" ";
       }
    }
       else {
        cout<<number/2<<endl;
        number=number-3;
        for (int i=0;i<number/2;i++){
            cout<<"2"<<" ";
        }
        cout<<"3";
       }
    
        
    
}