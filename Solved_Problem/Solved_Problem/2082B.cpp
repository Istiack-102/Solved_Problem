#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int countZero=0;
    for(int i=0;i<n;++i){
        if(v[i]==0){
            countZero++;
        }
    }
    if(countZero==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    if(countZero==n){
        cout<<3<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<1<<" "<<n-2<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    vector<pair<int,int>> op;
    vector<int> ans;
    for(int i=0;i<n;++i){
        if(v[i]==0){
            if(i==n-1){
                op.push_back({(int)ans.size(),(int)ans.size()+1});
            }else{
                op.push_back({(int)ans.size()+1,(int)ans.size()+2});
                ans.push_back(5);
                ++i;
            }
        }else{
            ans.push_back(5);
        }
    }
    op.push_back({1,(int)ans.size()});
    cout<<op.size()<<endl;
    for(auto& p:op){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
