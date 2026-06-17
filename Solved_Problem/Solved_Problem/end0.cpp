#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    vector<int>v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1-i;j++)
        if (v[j]==0 && v[j+1]!=0) swap(v[j],v[j+1]);
    }
    for (int i=0;i<size;i++){
       cout<<v[i]<<" ";
    }
}