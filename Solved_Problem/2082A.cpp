#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>matrix(n,vector<int>(m));
        for(int i=0;i<n;++i) {
            string line;
            cin>>line;
            for(int j=0;j<m;++j) {
                matrix[i][j]=line[j]-'0'; 
            }
        }
        int total_changes_row=0,total_changes_coloum=0;
        for(int i=0;i<n;++i){
            int row_xor=0;
            for(int j=0;j<m;++j) {
                row_xor^=matrix[i][j];
            }
            if(row_xor!=0){
                total_changes_row++;
            }
        }
        for(int j=0;j<m;++j){
            int col_xor=0;
            for(int i=0;i<n;++i){
                col_xor^=matrix[i][j];
            }
            if(col_xor!=0){
                total_changes_coloum++;
            }
        }
        cout<<max(total_changes_coloum,total_changes_row)<<endl;
    }
}
int main(){
    solve();
    return 0;
}

/*row wise every element ke xor kora hoise and check kora hoise value koto ase jdi 1 ase
tahole sheikhan a poriborton proyojon pore abr coloum wise same kaj kora hoise and 
then max number print kora hoise....*/