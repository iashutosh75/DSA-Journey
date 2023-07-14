// find maximum element of an array

#include <bits/stdc++.h>
using namespace std;

int maxArr(int arr[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
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

    cout<< "Maximum value in array  is: "<<maxArr(arr1, size)<<endl;
}