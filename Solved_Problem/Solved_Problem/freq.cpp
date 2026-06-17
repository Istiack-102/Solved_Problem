#include<iostream>
#include<vector>
using namespace std;
int main  (){
    vector<int> freq(100,0);
    vector<int> v;
    int n; 
    cin >> n; 
    int find_freq;
    cin>>find_freq;
    for (int i=0;i<n;i++){
        int elemnet;
        cin>>elemnet;
        freq[elemnet]++;
        v.push_back(elemnet);

}
// for (int i=0;i<v.size();i++){
//     freq[v[i]]++;
// }
cout<<freq[find_freq];
}