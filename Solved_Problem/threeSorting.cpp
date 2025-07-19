#include<bits/stdc++.h>
using namespace std;

void bubbleSort (vector<int>v){
    int size= v.size();
    for (int i=0;i<size;i++){
        for (int j=0;j<size-1-i;j++){
            if (v[j]>v[j+1]) swap (v[j],v[j+1]);
        }
    }
    for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // time complexity O(n^2)
    // it is a stable algorithm....
}
void selectionSort (vector<int>v){
    int size= v.size();
    for (int i=0;i<size-1;i++){
        int minIndx=i;
        for (int j=i+1;j<size;j++){
            if (v[minIndx]>v[j]) minIndx=j;
        }
        if (minIndx!=i) swap(v[minIndx],v[i]);
    }
    for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // time complexity O(n^2)
    // it is a unstable algorithm....
}
void insertingSort (vector<int>v){
    int size= v.size();
   for (int i=1;i<size;i++){
        int currentEle=v[i],j=i-1;
        while (j>=0 && v[j]>currentEle){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=currentEle;
   }
    for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // time complexity O(n^2)
    // it is a stable algorithm....
}
int main (){
    int size;
    cin>>size;
    vector<int>v (size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }
    bubbleSort(v);
    selectionSort(v);
    insertingSort(v);

}