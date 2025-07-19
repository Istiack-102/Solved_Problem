#include<bits/stdc++.h>
using namespace std;
int main (){
    int size,arr[100];
    cin>>size;
    for (int i=0;i<size;i++)
    cin>>arr[i];
    size++;
    int index,num;
    cin>>index>>num;
    for (int i=size-1;i>index;i--)
    arr[i]=arr[i-1];
    arr[index]=num;
    for (int i=0;i<size;i++)
    cout<<arr[i]<<" ";

}