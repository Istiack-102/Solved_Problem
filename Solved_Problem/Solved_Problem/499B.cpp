#include<bits/stdc++.h>
using namespace std;

int main() {
    int totalWords, lines;
    cin >> totalWords >> lines;
    string arr[lines][2];
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < totalWords; i++) {
        string word;
        cin >> word;
        int line = -1;
        for (int j = 0; j < lines; j++) {
            if (word == arr[j][0] || word == arr[j][1]) {
                line = j;
                break;
            }
        }
        if (arr[line][0].size() <= arr[line][1].size()) {
            cout << arr[line][0] << " ";
        } else {
            cout << arr[line][1] << " ";
        }
    }
    return 0;
}
/*amra 2d string nilam then akta akta word check kore condition satisfy korlam
then print kore dilam.*/