#include<iostream>
#include<vector>
using namespace std;
int main (){
   int row,coloum;
   cin>>row>>coloum;
   vector<vector<int>>first(row,vector<int>(coloum));
   int row1,coloum1;
   cin>>row1>>coloum1;
   vector<vector<int>>second(row1,vector<int>(coloum1));
   for (int i=0;i<row;i++){
    for (int j=0;j<coloum;j++){
        cin>>first[i][j];

    }
   }
   for (int i=0;i<row1;i++){
    for (int j=0;j<coloum1;j++){
        cin>>second[i][j];
    }
   }
   vector<vector<int>>final(row,vector<int>(coloum1));
   for (int i=0;i<row;i++){
    for (int j=0;j<coloum1;j++){
        int value=0;
        for (int k=0;k<row1;k++){
            value+=first[i][k]*second[k][j];
        }
        final[i][j]=value;
    }
   }
   for (int i=0;i<row;i++){
    for (int j=0;j<coloum1;j++){
        cout<<final[i][j]<<" ";
    }
    cout<<endl;
   }
}