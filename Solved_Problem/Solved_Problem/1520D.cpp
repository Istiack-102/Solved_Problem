#include<bits/stdc++.h>
using namespace std;
int count (vector<int>v){
    int count=0;
    for (int i=0;i<v.size();i++){
        for (int j=i;j<v.size();j++){
            if ((v[j]-v[i]) == (j-i)  )count++;
        }
    }
    return count;
}
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int size;
        cin>>size;
        vector<int> v;
        for (int i=0;i<size;i++){
            int element;
            cin>>element;
            v.push_back(element);
        }
        cout<<count(v)<<endl;

    }
}