#include<iostream>
#include<vector>
using namespace std;
int main (){
    int row,coloum;
    cin>>row>>coloum;
    vector<vector<int>> v(row,vector<int>(coloum));
    for (int i=0;i<row;i++){
        for ( int j=0;j<coloum;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> v1(coloum,vector<int>(row));
    for (int i=0;i<coloum;i++){
        for ( int j=0;j<row;j++){
            v1[i][j]=v[j][i];
        }
    }
    for (int i=0;i<coloum;i++){
        for ( int j=0;j<row;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;

    }

}