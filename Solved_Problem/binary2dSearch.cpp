#include<iostream>
#include<vector>
using namespace std;
bool check (vector<vector<int>> x,int target){
    int low=0,high= (x.size())*(x[0].size())  -1;
    int coloum = x[0].size();
    while (low<=high){
        int mid = low + (high-low)/2;
        int a= mid /coloum;
        int b= mid%coloum;
        if (x [a][b]==target) return true;
        else if (x [a][b]<target ) low = mid+1;
        else high=mid -1;
        
    }
    return false;
    
}
int main (){
    int row,coloum,target;
    cin>>row>>coloum>>target;
    vector<vector<int>> x(row,vector<int>(coloum));
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            cin>> x[i][j];
        }
    }
    if (check(x,target)) cout<<"YES";
    else cout<<"NO";
    
}