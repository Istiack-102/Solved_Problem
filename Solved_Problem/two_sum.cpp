#include<iostream>
#include<vector>
using namespace std;
int main (){
    int size,target;
    cin>>size>>target;
    vector<int>v;
    for (int i=0;i<size;i++){
        int element;
        cin>>element;
        v.push_back(element);

    }
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (v[i]+v[j]==target){
                cout<<i<<","<<j;
                break;
            }
        }
    }
}