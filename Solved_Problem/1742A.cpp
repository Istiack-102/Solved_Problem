#include<iostream>
#include<vector>
using namespace std;
int main (){
    int test_case;
    cin>>test_case;
    for (int i=0;i<test_case;i++){
        int size;
        cin>>size;
        vector<int> vector(size);
        for (int i=0;i<size;i++){
            cin>>vector[i];
        }
        
        for (int i=0;i<size;i++){
            for (int j=0;j<size-1-i;j++){
                if (vector[j]>vector[j+1]) swap(vector[j],vector[j+1]);
            }
        }
        int d=0;
        for (int i=0;i<size-1;i++){
            if (vector[i]==vector[i+1])d=1;
        }
        if (d==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

         
       
    
    }
}
