#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, const vector<vector<int>>& matrix, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);  // 0 ->push
        //0 1 2 3 4
// v[0]-> 0 1 1 1 0
// v[1]-> 1 0 0 0 1
// v[2]-> 1 0 0 1 1
// v[3]-> 1 0 1 0 1 
// v[4]-> 0 1 1 1 0 
    cout << "BFS: ";
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 0; i < n; i++) {
            if (matrix[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
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

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    cout << "Enter edges (from to):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1; // Remove this line if directed
    }

    int start;
    cout << "Start BFS from: ";
    cin >> start;

    bfs(start, matrix, n);

    return 0;
}
