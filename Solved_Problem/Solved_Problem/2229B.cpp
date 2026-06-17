#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  n;
    cin >> n;
    vector<long long> vec1(n);
    vector<long long> vec2(n);
    for (long long  i=0;i<n;i++) cin>>vec1[i];
    for (long long  i=0;i<n;i++) cin>>vec2[i];
    for (long long  i=0;i<n;i++) {
        if (vec1[i]>vec2[i]) swap(vec1[i],vec2[i]);
    }
    long long  sum=0;
    for (auto x:vec2) sum+=x;
    sort(vec1.begin(),vec1.end());
    sum+=vec1[n-1];
    cout<<sum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}