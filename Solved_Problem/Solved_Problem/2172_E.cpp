#include<bits/stdc++.h>
using namespace std;

vector<string> generatePermutations(int n) {
    string numStr = to_string(n);
    vector<string> permutations;
    sort(numStr.begin(), numStr.end());
    do {
        permutations.push_back(numStr);
    } while (next_permutation(numStr.begin(), numStr.end()));
    return permutations;
}

int main() {
    int t; cin>>t;
    while (t--){
        int n,pos1,pos2; cin>>n>>pos1>>pos2;
        vector<string> container = generatePermutations(n);
        sort(container.begin(),container.end());
        string x,y;
        x=container[pos1-1];
        y=container[pos2-1];
        int first=0,second=0;
        for (int i=0;i<x.size();i++){
            if (x[i]==y[i]) first++;
        }
        for (int i=0;i<x.size();i++){
            for (int j=0;j<x.size();j++){
                if (x[i]==y[j]) {
                    second++;
                    break;
                }
            }
        }
        second=second-first;
        cout<<first<<'A'<<second<<'B'<<endl;
    }
}