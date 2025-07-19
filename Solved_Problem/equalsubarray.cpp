#include<iostream>
#include<vector>

using namespace std;
bool  check (vector<int>v,int sum){
    int prifixSum=0;
    for (int i=0;i<v.size();i++){
        prifixSum+=v[i];
        int sufixSum=sum-prifixSum;
        if  (sufixSum==prifixSum)
        return true;
    }
    return false;

}
int main (){
    int size,sum=0;
    cin>>size;
    vector<int>  v;
    for (int i=0;i<size;i++){
        int ele;
        cin>>ele;
        sum=sum+ele;
        v.push_back(ele);
    }
    cout<<check(v,sum)<<endl;
}