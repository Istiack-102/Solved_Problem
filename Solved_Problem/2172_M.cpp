#include <bits/stdc++.h>
using namespace std;

const long long INF = (1LL << 60);

vector<long long> bfs(int n, vector<vector<int>>& adj) {
    vector<long long> dist(n + 1, INF);
    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> product(n + 1);
    for (int i = 1; i <= n; i++) cin >> product[i];

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<long long> dist = bfs(n, adj);

    vector<long long> ans(k + 1, 0);
    for (int city = 1; city <= n; city++) {
        int p = product[city];
        ans[p] = max(ans[p], dist[city]);
    }

    for (int p = 1; p <= k; p++) {
        cout << ans[p] << (p == k ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
