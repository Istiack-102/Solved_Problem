#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    vector<string>v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }

    for (int i=0;i<size-1;i++){
        int initial=i;
        for (int j=i+1;j<size;j++){
           if (v[initial]>v[j]) initial=j;
        }
        if (i!=initial) swap(v[i],v[initial]);
    }
    for (int i=0;i<size;i++){
       cout<<v[i]<<endl;
    }
    

    


}