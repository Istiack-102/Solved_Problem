#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (v[minIndex] > v[j])
                minIndex = j;
        }
        if (i != minIndex)
            swap(v[i], v[minIndex]);
    }
}
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    selectionSort(v);
    for (int ele : v)
    {
        cout << ele << " ";
    }
}