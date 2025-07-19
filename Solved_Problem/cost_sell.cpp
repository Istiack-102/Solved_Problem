#include<iostream>
using namespace std;
int main (){
    int selling_price,bying_price;
    cin>>selling_price>>bying_price;
    if (selling_price>bying_price){
        cout<<"Profit"<< endl;

    }
    else {
        cout<<"Loss"<<endl;
    }
    main ();
}