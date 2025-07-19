#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector <int> v;
    int n;
    int k;
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for (int ele:v){
        cout<<ele<<" ";
    }
}