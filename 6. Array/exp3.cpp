// find minimum element of an array

#include <bits/stdc++.h>
using namespace std;

int maxArr(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int size;
    cin >> size;

    int arr1[1000];

    for (int i = 0; i < size; i++)
    {

        cin >> arr1[i];
    }

    cout << "Minimum value in array  is: " << maxArr(arr1, size) << endl;
}

