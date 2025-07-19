#include<bits/stdc++.h>
using namespace std;
int main (){
    int size,arr[100];
    cin>>size;
    for (int i=0;i<size;i++) cin>>arr[i];
    int pos;
    cin>>pos;
    for (int i=pos;i<size;i++) arr[i]=arr[i+1];
    size--;
    for (int i=0;i<size;i++) cout<<arr[i]<<" ";
}