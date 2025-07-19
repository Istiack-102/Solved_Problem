#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        int maxCount = 0, positionOFn = 0;
        for (int j = 0; j < n; j++) {
            int count = 0;
            for (int k = 0; k < v[j].size(); k++) {
                if (v[j][k] == '#')
                    count++;
            }
            if (count > maxCount) {
                maxCount = count;
                positionOFn = j;
            }
        }
        int middle = (maxCount + 1) / 2;
        int countM = 0, countHash = 0;
        for (int j = 0; j < v[positionOFn].size(); j++) {
            if (v[positionOFn][j] == '#') {
                countHash++;
                if (countHash == middle) {
                    countM = j + 1; // 1-based index
                    break;
                }
            }
        }
        cout << positionOFn + 1 << " " << countM << endl;
    }
    return 0;
}
/* max numbers of # kon row te ache ta khuje ber korlam tthen 
max row r '#' gular modde jeita center a ache oita position store korbo
the row and coloum position print kore dibo...jeheto ami 0th index niye kaj koirechi tai 
+1`kore print korechi*/