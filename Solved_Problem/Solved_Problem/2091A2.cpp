#include<bits/stdc++.h>
using namespace std;
void solve (){
    long long size;
    cin>>size;
    vector<long long> v(size);
    for (int i=0;i<size;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
  
    int a= v[0];
    int b= v[size-1];
    cout<<b-a<<endl;
   
   
    
}
int main (){
    int testCase;
    cin>>testCase;
    while (testCase--){
        solve();
    }
    
}
/*amra jni akta sequence r max gcd  hobe sequence r 
min number r max number r gcd.... r oi max gcd kokhonoi 
(max-min) ei range cross korte pare na ....*/