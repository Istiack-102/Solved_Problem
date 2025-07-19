#include<bits/stdc++.h>
using namespace std;
void print (vector<vector<int>>v, int row,int coloum){
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }
}
int main (){
    int row,coloum;
    cin>>row>>coloum;
    vector<vector<int>>v(row ,vector<int>(coloum)) ;
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            cin>>v[i][j];
        }
    }
    print(v,row,coloum);
    

}