#include <iostream>
using namespace std;
int main (){
int row1,col1,row2,col2;

cin >> row1>> col1>> row2>>col2;
int arr[row1][col1],brr[row2][col2], res[row1][col2];

for (int i = 0 ; i < row1 ; i++){
    for (int j =0 ; j< col1 ; j++){
        cin >> arr[i][j];
    }
}

for (int i = 0 ; i < row2 ; i++){
    for (int j =0 ; j< col2 ; j++){
        cin >> brr[i][j];
    }
}
if (col1==row2){
for (int i = 0 ; i < row1 ; i++){
    for (int j=0; j<col2 ;j++){
        int sum=0;
        for (int k=0;k<col1;k++){
            sum+= arr[i][k] * brr[k][j];
         }
         res[i][j]=sum;

    }
}
for (int i = 0 ; i < row1 ; i++){
    for (int j =0 ; j< col2 ; j++){
        cout<< res[i][j]<<" ";
    } cout<<endl;
}


}
}