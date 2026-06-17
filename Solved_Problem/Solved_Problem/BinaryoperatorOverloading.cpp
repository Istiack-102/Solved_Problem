#include<iostream>
using namespace std;

class Overload {
    public:
    int a,b;
    Overload (){

    }
    Overload(int x,int y){
        a=x;
        b=y;
    }

    Overload operator + (Overload x){
        Overload temp;
        temp.a=a+x.a;
        temp.b=b+x.b;
        return temp;
    }
    void display (){
        cout<<a<<" "<<b<<endl;
    }
};
int main (){
    Overload x(12,13),y(14,15),z;
    z=x+y;
    z.display();

}