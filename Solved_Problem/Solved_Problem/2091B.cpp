#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>()); 

        int teams = 0;
        int current_team_size = 0;

        for (int skill : a) {
            current_team_size++;
            if (skill * current_team_size >= x) {
                teams++;
                current_team_size = 0;
            }
        }

        cout << teams << endl;
    }
    return 0;
}