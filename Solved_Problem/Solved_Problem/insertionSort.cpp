#include<bits/stdc++.h>
using namespace std;
void insertionSort (vector<int>&v){
    int size=v.size();
    for (int i=1;i<size;i++){
        int j=i-1,currentEle=v[i];
        while (j>=0 && v[j]>currentEle)
        {
           v[j+1]=v[j];
           j--;
        }
        v[j+1]=currentEle;

        
    }
}
    int main (){
        int size;
        cin>>size;
        vector<int>v(size);
        for (int i=0;i<size;i++){
            cin>>v[i];
        }
        insertionSort(v);
        for (int ele:v){
            cout<<ele<<" ";
        }
    }
