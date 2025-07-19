#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
    void bubbleSort(vector<int>&vector){
        for (int i=0;i<vector.size();i++){
            for (int j=0;j<vector.size()-1-i;j++){
               if (vector[j]>vector[j+1] )swap(vector[j],vector[j+1]);
            }
        }
 
    }
    int prefixsum(vector<int>vector){
        int sum=0;
        for (int i=0;i<vector.size();i++){
            sum= sum+vector[i]-1;
 
        }
        return sum;
    }
    int main (){
        int testCase;
        cin>>testCase;
        for (int i=0;i<testCase;i++){
            int size;
            cin>>size;
            vector<int>v;
            for (int j=0;j<size;j++){
                int ele;
                cin>>ele;
                v.push_back(ele);
            }
            bubbleSort(v);
            cout<<prefixsum(v)+1<<endl;
 
        }
    }