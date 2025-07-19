#include<iostream>
#include<vector>
using namespace std;
void insertionSort (vector<int> v){
    for (int i=1;i<v.size();i++){
        int currenntElement=v[i],j=i-1;
        while (j>=0 && v[j]>currenntElement){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=currenntElement;
    }
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main (){
cout<<"Enter the array size: ";
    int x;
    cin>>x;
    vector<int> v(x);
    for (int i=0;i<x;i++){
        int y;
        cin>>y;
        v[i]=y;
    }
    insertionSort(v);
}
