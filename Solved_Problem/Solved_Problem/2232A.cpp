#include <bits/stdc++.h>
using namespace std;

void solve () {
   int len;  
   cin >> len;
   vector<long long> vec(len);
   for (int i = 0; i < len; i++){
       cin >> vec[i];
   }
   int count=0;
   sort(vec.begin(), vec.end());
   for (int i=0;i<len;i++){
    if (vec[i]!=vec[len-1-i]) count++;
   }
   cout<<count/2<<endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}