#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    vector<int> v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }
    int low=1,high=size-1, position=-1;
    while (low<=high){
        int mid = low + (high-low)/2;
        if (v[mid-1]<v[mid]){
            position=mid;
            low=mid+1;
        }
        else {
           
            high=mid-1;
        }
    }
    cout<<position;
}