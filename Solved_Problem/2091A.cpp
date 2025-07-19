#include<bits/stdc++.h>
using namespace  std;
int main (){
     int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int size;
        cin>>size;
       int count_0=0,count_1=0,count_2=0,count_3=0,count_5=0;
        int check=-1,count=0,countAns=0;
        vector<int> v(size);
        for (int j=0;j<size;j++){
            cin>>v[j];
        }
        for (int j=0;j<size;j++){
            if (v[j]==0) count_0++;
            if (v[j]==1) count_1++;
            if (v[j]==2) count_2++;
            if (v[j]==3) count_3++;
            if (v[j]==5) count_5++;
            count++;
            if (count_0>=3 && count_1>=1 && count_2>=2 && count_3>=1 && count_5>=1){
                countAns=count;
                check=0;
                break;
            }
           
    }
    if (check==0) cout<<countAns<<endl;
    else cout<<"0"<<endl;
    }
}


