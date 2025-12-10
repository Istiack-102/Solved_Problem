#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> a(N), l(N), r(N);
    for(int i=0; i<N; i++) cin >> a[i];
    l[0] = a[0];
    for(int i=1; i<N; i++) l[i] = __gcd(l[i-1], a[i]);
    r[N-1] = a[N-1];
    for(int i=N-1; i--;) r[i] = __gcd(r[i+1], a[i]);
    long long ans = l[N-1];
    for(int i=1; i<N-1; i++) ans += min(l[i], r[i]);
    cout << ans << endl;
}