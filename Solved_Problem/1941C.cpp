#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int size ;
        cin>>size;
        string x;
        cin>>x;
        int count=0;
        for (int i=0;i<x.size();i++){
            if (x[i]=='p'){
                if (x.substr(i,3)=="pie") {count++; i=i+2;}
            }
            if (x[i]=='m'){
                if (x.substr(i,3)=="map") {count++; i=i+2;}
            }
        }
        cout<<count<<endl;
    }
}