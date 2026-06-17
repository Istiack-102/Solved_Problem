#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
    char x;
    cout<<"Enter Operation:";
    cin>>x;
    switch (x)
    {
    case '+':
       cout<<"Sum: "<<a+b<<endl;
        break;
        case '-':
       cout<<"Minus: "<<a-b<<endl;
        break;
        case '*':
       cout<<"Multiplication: "<<a*b<<endl;
        break;
        case '/':
       cout<<"Divison: "<<a/b<<endl;
        break;
        case '%':
       cout<<"Remainder: "<<a%b<<endl;
        break;
    
    default:
    cout<<"ERROR."<<endl;
        break;
    }


}