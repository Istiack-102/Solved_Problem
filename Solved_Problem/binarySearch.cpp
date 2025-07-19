#include<bits/stdc++.h>
using namespace std;
int binaryseach (vector<int> &v,int target,int low,int high){
    if (low>high) return -1;
    int mid = low + (high-low)/2;
    if (v[mid]==target) return mid;
    if (v[mid]>target) return binaryseach (v,target,low,mid-1);
    else return binaryseach (v,target,mid-1,high);
    
}

int main (){
    int size,target;
    cin>>size>>target;
    vector<int> v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }
   int mid= binaryseach(v,target,0,size-1);
   for (int i=mid;i>=0;i--){
    if (v[i]!=target){
        cout<<i+1<<" ";
        break;
    }
   }
   for (int i=mid;i<size;i++){
    if (v[i]!=target){
        cout<<i-1;
        break;
    }
   }
}