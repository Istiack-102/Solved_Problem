#include<iostream>
#include<vector>
using namespace std;
void prefixSum (vector<int>&v){
    for (int i=1;i<v.size();i++){
        v[i]+=v[i-1];

    }
}
int main (){
    int size;
    cin>>size;
    vector<int>v;
    for (int i=0;i<size;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    prefixSum(v);
    int quarry;
    cin>>quarry;
    for (int i=0;i<quarry;i++){
        int first,second;
        cin>>first>>second;
        cout<<v[second-1]-v[first-2]<<endl;
    }


}