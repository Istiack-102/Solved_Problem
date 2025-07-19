#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, const vector<vector<int>>& graph, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS: ";
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e;
    cout << "How many nodes? ";
    cin >> n;
    cout << "How many edges? ";
    cin >> e;

    vector<vector<int>> graph(n);

    cout << "Enter edges (from to):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Remove this line if directed
    }

    int start;
    cout << "Start BFS from: ";
    cin >> start;

    bfs(start, graph, n);

    return 0;
}
