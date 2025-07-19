#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int size1 = s1.size(), size2 = s2.size();
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        int count1 = 0;
        char ch1 = s1[i];
        while (i < size1 && s1[i] == ch1) {
            count1++;
            i++;
        }

        int count2 = 0;
        char ch2 = s2[j];
        while (j < size2 && s2[j] == ch2) {
            count2++;
            j++;
        }

        if (ch1 != ch2 || count2 < count1 || count2 > 2 * count1) {
            cout << "NO\n";
            return;
        }
    }

    if (i != size1 || j != size2) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
}
