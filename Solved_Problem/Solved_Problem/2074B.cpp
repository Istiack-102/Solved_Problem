#include <bits/stdc++.h>
using namespace std;

int prefixsum(vector<int>vector,int size){
        
    for (int i=1;i<vector.size();i++){
       vector[i]=vector[i-1]+vector[i]-1;

    }
    return vector[size-1];
}

int main() {
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        int size;
        cin >> size;
        vector<int> v(size); 
        for (int j = 0; j < size; j++) {
            cin >> v[j];
        }
        sort(v.begin(), v.end()); 
        cout << prefixsum(v,size)  << endl; 
    }
    return 0;
}