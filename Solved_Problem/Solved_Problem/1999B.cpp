#include<bits/stdc++.h>
using namespace std;

int check(int a1, int a2, int b1, int b2) {
    int wins = 0;
    int suneetWins1 = (a1 > b1) ? 1 : 0;
    int suneetWins2 = (a2 > b2) ? 1 : 0;
    int slavicWins1 = (b1 > a1) ? 1 : 0;
    int slavicWins2 = (b2 > a2) ? 1 : 0;
    if (suneetWins1 + suneetWins2 > slavicWins1 + slavicWins2) wins++;
    suneetWins1 = (a1 > b2) ? 1 : 0;
    suneetWins2 = (a2 > b1) ? 1 : 0;
    slavicWins1 = (b2 > a1) ? 1 : 0;
    slavicWins2 = (b1 > a2) ? 1 : 0;
    if (suneetWins1 + suneetWins2 > slavicWins1 + slavicWins2) wins++;
    suneetWins1 = (a2 > b1) ? 1 : 0;
    suneetWins2 = (a1 > b2) ? 1 : 0;
    slavicWins1 = (b1 > a2) ? 1 : 0;
    slavicWins2 = (b2 > a1) ? 1 : 0;
    if (suneetWins1 + suneetWins2 > slavicWins1 + slavicWins2) wins++;
    suneetWins1 = (a2 > b2) ? 1 : 0;
    suneetWins2 = (a1 > b1) ? 1 : 0;
    slavicWins1 = (b2 > a2) ? 1 : 0;
    slavicWins2 = (b1 > a1) ? 1 : 0;
    if (suneetWins1 + suneetWins2 > slavicWins1 + slavicWins2) wins++;

    return wins;
}

int main() {
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << check(a1, a2, b1, b2) << endl;
    }
    return 0;
}