#include<bits/stdc++.h>
using namespace std;

void solve(){
    int size; 
    cin >> size;
    vector<long long> container(size);
    for(int i = 0; i < size; i++){
        cin >> container[i];
    }

    long long L = container[0];
    long long R = container[size - 1];

    if(L != -1 && R != -1){
        cout << llabs(R - L) << endl;
        for(int i = 0; i < size; i++){
            if(container[i] == -1) cout << 0 << " ";
            else cout << container[i] << " ";
        }
        cout << endl;
        return;
    }

    cout << 0 << endl;

    if(L == -1 && R == -1){
        container[0] = 0;
        container[size - 1] = 0;
    }
    else if(L == -1){
        container[0] = R;
    }
    else if(R == -1){
        container[size - 1] = L;
    }

    for(int i = 0; i < size; i++){
        if(container[i] == -1) container[i] = 0;
        cout << container[i] << " ";
    }
    cout << endl;
}

int main(){
    int num; 
    cin >> num;
    while(num--){
        solve();
    }
}
