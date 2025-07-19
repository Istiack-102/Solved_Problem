#include<bits/stdc++.h>
using namespace std;
void prefixSum (vector<int> &v){
    for (int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        int size,target;
        cin>>size>>target;
        vector<int> v(size);
        int check=1;
        for (int i=0;i<size;i++){
            cin>>v[i];
            if (v[i]!=target) check=0;
        }
        if (check) {cout<<"YES"<<endl;;continue;}
        else {
            prefixSum(v);
            if (v[v.size()-1] == target * v.size()){
                cout<<"YES"<<endl;
 
            }
            else cout<<"NO"<<endl;
        }
 
    }
}
/*full array gor jdi target r shoman hoy taholei 
yes hobe.*/