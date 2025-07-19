#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int angel;
        cin>>angel;
        int n = 360 / (180 - angel);
        if (360%(180-angel)==0 && n>=3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*for a polygon all the arms of the poligon are same and all the if angels
are same. if the length of the arm is n and angel is a then
a=((n-2)*180)/n here n is should be n>=3 beacuse we can not form a
polygon with 2 arms and 1 arm.*/