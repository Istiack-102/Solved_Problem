#include<iostream>
#include<vector>
using namespace std;
void prefixSum(vector<int>&v){
    for (int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}
int main (){
    int size;
    cin>>size;
    vector<int>  v;
    for (int i=0;i<size;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    // for (int i=1;i<v.size();i++){
    //     v[i]+=v[i-1];
    // }
    prefixSum(v);
    for (int ele:v){
        cout<<ele<<" ";
    }


}