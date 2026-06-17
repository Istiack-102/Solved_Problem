#include<bits/stdc++.h>
using namespace std;

void solve() {
    int size; 
    cin >> size;

    vector<int> container(size);
    vector<int> freq(size + 1, 0);   

    for (int i = 0; i < size; i++) {
        int x; 
        cin >> x;
        container[i] = x;
        freq[x]++;                 
    }

    int ans = 0;

    for (int i = 0; i <= size; i++) { 
        if (i == 0) {
            ans += freq[0];
            continue;
        }
        if (freq[i] == 0 || freq[i] == i) continue;

        if (freq[i] < i) ans += freq[i];
        else ans += (freq[i] - i);
    }

    cout << ans << endl;
}

int main() {
    int num; 
    cin >> num;
    while (num--) solve();
}
