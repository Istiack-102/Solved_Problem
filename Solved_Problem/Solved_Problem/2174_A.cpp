#include<bits/stdc++.h>
using namespace std;

void solve (){
    int size;
    cin >> size;

    vector<int> container(size);
    vector<int> check(size);

    for (int i = 0; i < size; i++) {
        cin >> container[i];
        check[i] = container[i];
    }

    sort(check.begin(), check.end());
    if (container == check) {
        cout << 0 << "\n";
        return;
    }

    vector<int> removed;
    int countOps = 0;

    for (int i = 0; i < size - 1; i++) {
        bool skip_i = false;
        for (int r : removed) if (r == i) skip_i = true;
        if (skip_i) continue;

        for (int j = i + 1; j < size; j++) {
            bool skip_j = false;
            for (int r : removed) if (r == j) skip_j = true;
            if (skip_j) continue;

            if (container[i] > container[j]) {
                countOps++;
                removed.push_back(j);
            }
        }
    }

    cout << countOps << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;
    while (num--) {
        solve();
    }
    return 0;
}
