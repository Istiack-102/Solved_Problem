#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

int binarySearch(const vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left + 1;
}

int main()
{
    int sizeOfVector;
    cin >> sizeOfVector;
    vector<int> numbersOfWorms;

    for (int i = 0; i < sizeOfVector; i++)
    {
        int element;
        cin >> element;
        numbersOfWorms.push_back(element);
    }

    prefixSum(numbersOfWorms);

    int numbersOfJuicy;
    cin >> numbersOfJuicy;

    for (int i = 0; i < numbersOfJuicy; i++)
    {
        int juicyPosition;
        cin >> juicyPosition;

        int index = binarySearch(numbersOfWorms, juicyPosition);
        cout << index << endl;
    }

    return 0;
}
/*amra eikhan a prefix sum use korechi then binary search use korsi number ta search kore 
ber korar jonno*/