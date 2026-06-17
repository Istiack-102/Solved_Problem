#include<bits/stdc++.h>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1 - i; j++) {
            if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
        }
    }
}

int main() {
    long size, length;
    cin >> size >> length;
    vector<int> v;
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    bubbleSort(v);

    double maxGap = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        double gap = v[i + 1] - v[i];
        if (gap > maxGap) maxGap = gap;
    }

    
    double d = max(maxGap / 2.0, max((double)v[0], (double)(length - v[size - 1])));

    
    printf("%.10f\n", d);

    return 0;
}