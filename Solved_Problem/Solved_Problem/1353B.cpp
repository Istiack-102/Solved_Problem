#include <bits/stdc++.h>

using namespace std;

// Bubble sort function
void bubbleSort(vector<int> &v)
{
    for (int j = 0; j < v.size(); j++)
    {
        for (int i = 0; i < v.size() - 1 - j; i++)
        {
            if (v[i] > v[i + 1])
                swap(v[i], v[i + 1]);
        }
    }
}


int main()
{
    
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int arraySize, swapLimit;
        cin >> arraySize >> swapLimit;

        vector<int> vector1;
        vector<int> vector2;

        for (int j = 0; j < arraySize; j++)
        {
            int element;
            cin >> element;
            vector1.push_back(element);
        }

        for (int j = 0; j < arraySize; j++)
        {
            int element;
            cin >> element;
            vector2.push_back(element);
        }

        bubbleSort(vector1);
        bubbleSort(vector2);

        int swapCount = 0;
        int d = arraySize - 1;

        for (int k = 0; k < arraySize && swapCount < swapLimit; k++)
        {
            if (vector1[k] < vector2[d])
            {

                int temp = vector1[k];
                vector1[k] = vector2[d];
                vector2[d] = temp;

                swapCount++;
                d--;
            }
        }

        int sum = 0;
        for (int j = 0; j < arraySize; j++)
        {
            sum += vector1[j];
        }

        cout << sum << endl;
    }

    return 0;
}
/*1st a sort kore nilam then vector r 1 st positon r man jdi 2nd vector r last positon r che choto hoy 
tahole swap kore dibo then d-- kore break kore dibo jate last positon abr na ase r ta na hole continue.*/