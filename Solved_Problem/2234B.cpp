#include<bits/stdc++.h>
using namespace std;
void solve (){
    long long n;
    cin >> n;
    if (n == 10) {
        cout << "-1"<<endl;
    } else if (n % 12 == 10) {
        cout << "22 " << n - 22 << endl;
    } else {
        cout << n % 12 << " " << n - (n % 12) << endl;
    }
}
int main (){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve ();
    }
}