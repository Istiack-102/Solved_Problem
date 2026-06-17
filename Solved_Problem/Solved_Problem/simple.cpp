#include<iostream>
using namespace std;
#include<vector>
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int size,target;
        int find=0;
        cin>>size>>target;
        vector<int>vector;
        for (int j=0;j<size;j++){
            int ele;
            cin>>ele;
            if (ele==target) find=1;
            vector.push_back(ele);
        }
        if (find==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*eikhan a juts bola hoise target ache kina */