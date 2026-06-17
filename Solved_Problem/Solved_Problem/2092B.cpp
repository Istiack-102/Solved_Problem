#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank;
    vector<bool> has_b_zero;

    DisjointSet(int n) {
        parent.resize(n);
        rank.assign(n, 1);
        has_b_zero.assign(n, false);
        for (int i = 0; i < n; ++i) parent[i] = i;
    }

    int find(int u) {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }

    void unite(int u, int v) {
        int root_u = find(u);
        int root_v = find(v);
        if (root_u == root_v) return;
        if (rank[root_u] < rank[root_v]) {
            parent[root_u] = root_v;
            has_b_zero[root_v] = has_b_zero[root_v] || has_b_zero[root_u];
        } else {
            parent[root_v] = root_u;
            has_b_zero[root_u] = has_b_zero[root_u] || has_b_zero[root_v];
            if (rank[root_u] == rank[root_v])
                rank[root_u]++;
        }
    }
};

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        DisjointSet dsu(2 * n);
        for (int i = n; i < 2 * n; i++) {
            dsu.has_b_zero[i] = (b[i - n] == '0');
        }

        for (int j = 1; j < n; j++) {
            dsu.unite(j, n + (j - 1));
            dsu.unite(n + j, j - 1);
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (!dsu.has_b_zero[dsu.find(i)]) {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
