#include <bits/stdc++.h>
using namespace std;

void solve() {
    int size;
    cin >> size;

    vector<int> container(size);
    for (int i = 0; i < size; i++) {
        cin >> container[i];
    }

    sort(container.begin(), container.end());
    container.erase(unique(container.begin(), container.end()), container.end());

    if (container[0] != 0) {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < container.size(); i++) {
        if (container[i] != i) {
            cout << i << endl;
            return;
        }
    }

    cout << container.size() << endl;
}

int main() {
    int num;
    cin >> num;
    while (num--) {
        solve();
    }
}
