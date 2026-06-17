#include<bits/stdc++.h>
using namespace std;
int main (){
    int num;
    cin>>num;
    vector<string> v(num);
    for (int i=0;i<num;i++){
        cin>>v[i];
        int count=-1;
        for (int j=0;j<=i;j++){
            if (v[i]==v[j]) count++;
        }
        if (count==0) cout<<"OK"<<endl;
        else cout<<v[i]<<count<<endl;

    }
}
/*There is nothing to explain*/