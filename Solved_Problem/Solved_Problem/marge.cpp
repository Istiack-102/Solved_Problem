#include<bits/stdc++.h>
using namespace std;

void marge (int arr[],int left,int mid,int right){
    int an=mid-left+1,bn=right-mid;
    int a[an],b[bn];
    for (int i=0;i<an;i++){
        a[i]=arr[left+i];
    }
    for (int i=0;i<bn;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while (i<an && j<bn){
        if (a[i]<b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }
    while (i<an) arr[k++]=a[i++];
    while (j<bn) arr[k++]=b[j++];

}

void margeSort (int arr[],int left,int right){
    if (left>=right) return;
    int mid= (left+right)/2;
    margeSort (arr,left,mid);
    margeSort (arr,mid+1,right);
    marge (arr,left,mid,right);
}
int main (){
    int arr[100],size;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    margeSort(arr,0,size-1);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";    }
}