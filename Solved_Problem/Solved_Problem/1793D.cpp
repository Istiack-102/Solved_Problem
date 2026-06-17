#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> posA(n + 1), posB(n + 1);
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        posA[x] = i + 1;
    }
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        posB[x] = i + 1;
    }
 
    long long leftA = n, rightA = 1;
    long long leftB = n, rightB = 1;
    long long answer = 0;
 
    for (long long i = 1; i + 1 <= n; i++) {
        leftA = min(leftA, posA[i]);
        rightA = max(rightA, posA[i]);
        leftB = min(leftB, posB[i]);
        rightB = max(rightB, posB[i]);
 
        long long minLeftA, maxRightA;
        long long minLeftB, maxRightB;
 
        if (posA[i + 1] < leftA) {
            minLeftA = posA[i + 1] + 1;
            maxRightA = n;
        } else {
            minLeftA = 1;
            maxRightA = posA[i + 1] - 1;
        }
 
        if (posB[i + 1] < leftB) {
            minLeftB = posB[i + 1] + 1;
            maxRightB = n;
        } else {
            minLeftB = 1;
            maxRightB = posB[i + 1] - 1;
        }
 
        long long leftWays =
            max(min(leftA, leftB) - max(minLeftA, minLeftB) + 1, 0LL);
 
        long long rightWays =
            max(min(maxRightA, maxRightB) - max(rightA, rightB) + 1, 0LL);
 
        answer += leftWays * rightWays;
    }
 
    long long firstMin = min(posA[1], posB[1]);
    long long firstMax = max(posA[1], posB[1]);
 
    answer += firstMin * (firstMin - 1) / 2;
    answer += (n - firstMax) * (n - firstMax + 1) / 2;
    answer += llabs(posA[1] - posB[1]) * (llabs(posA[1] - posB[1]) - 1) / 2;
 
    answer++;
 
    cout << answer << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}