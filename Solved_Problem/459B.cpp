#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long size;
    cin >> size;

    vector<int> numbers(size);

    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        minValue = min(minValue, numbers[i]);
        maxValue = max(maxValue, numbers[i]);
    }

    long long minCount = 0;
    long long maxCount = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == minValue) minCount++;
        if (numbers[i] == maxValue) maxCount++;
    }

    cout << maxValue - minValue << " ";

    if (minValue == maxValue) {
        cout << size * (size - 1) / 2;
    } else {
        cout << minCount * maxCount;
    }

    return 0;
}
