#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int size,totalNum;
        cin>>size>>totalNum;
       
        int odd_count=0,even_count=0;
        for (int j=0;j<size;j++){
            int ele;
            cin>>ele;
           
            if (ele%2!=0) odd_count++;
            if (ele%2==0) even_count++;
           
        }
       if (odd_count==0) {cout<<"No"<<endl; continue;}
       else {
        odd_count--,totalNum--;
        while (totalNum>0)
        {
           if (odd_count>=2 && totalNum>=2) {
                odd_count-=2;
                totalNum-=2;
           }
           else if  (even_count>=1 && totalNum>=1){
            even_count--; totalNum--;
           }
           else break;

        }
        
       }
       if (totalNum==0) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
}
}
/*odd_count jdi even hoy tahole sumation even hobe for sure.
tai amra check korlam odd_ki even kina*/