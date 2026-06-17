#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<vector<vector<int>>, vector<vector<int>>> Matrix_Chain_Order(vector<int> d) {
    int n = d.size() - 1;
    vector<vector<int>> M(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> s(n + 1, vector<int>(n + 1, 0));
    
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            M[i][j] = INT_MAX;
            
            for (int k = i; k <= j - 1; k++) {
                int q = M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j];
                
                if (q < M[i][j]) {
                    M[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    
    return make_pair(M, s);
}

int main() {
    vector<int> d = {30, 35, 15, 5, 10, 20, 25};
    
    auto result = Matrix_Chain_Order(d);
    vector<vector<int>> M = result.first;
    vector<vector<int>> s = result.second;
    
    int n = d.size() - 1;
    
    cout << "Minimum number of multiplications: " << M[1][n] << endl;
    
    cout << "\nM matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= i)
                cout << M[i][j] << "\t";
            else
                cout << "0\t";
        }
        cout << endl;
    }
    
    cout << "\ns matrix (split points):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > i)
                cout << s[i][j] << "\t";
            else
                cout << "0\t";
        }
        cout << endl;
    }
    
    return 0;
}