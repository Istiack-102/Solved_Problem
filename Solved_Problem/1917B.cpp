#include <iostream>
#include <vector>
#include <string>

using namespace std;

int testCases, length;

int main() {
    cin >> testCases;

    while (testCases--) {
        cin >> length;
        string inputString;
        cin >> inputString;

        vector<long long> result(length, 0);
        vector<int> nextPosition(26, length);

        result[length - 1] = 1;
        nextPosition[inputString[length - 1] - 'a'] = length - 1;

        for (int index = length - 2; index >= 0; index--) {
            result[index] =
                result[index + 1] +
                (nextPosition[inputString[index] - 'a'] - index);

            nextPosition[inputString[index] - 'a'] = index;
        }

        cout << result[0] << endl;
    }

    return 0;
}
