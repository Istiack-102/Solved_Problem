#include<iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    for (int i=1;i<=a;i++){
        // char c='A';
        for (int j=1;j<=a-i;j++ ) cout<<" ";
        for (int j=0;j<(2*i)-1;j++) cout<<(char)('A' + j);
        cout<<endl;

    }
    for (int i=1;i<a;i++){
        for (int j=1;j<=i;j++) cout<<" ";
        for (int j=0;j<(2*(a-i)-1);j++) cout<<(char)('A'+j);
        cout<<endl;

    }
   

}