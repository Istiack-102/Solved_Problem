#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int> container(3);
    for (int i=0;i<3;i++){
        int x; cin>>x;
        container[i]=x;
    }
    sort(container.begin(),container.end());
    if (container[2]-container[0]<10){
        cout<<"final "<<container[1]<<endl;;
    }
    else cout<<"check again"<<endl;
    
}