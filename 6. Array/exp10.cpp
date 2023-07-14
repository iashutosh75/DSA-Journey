// first and last occurance of element in shorted array

#include <bits/stdc++.h>
using namespace std;

int searchfirst(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    long mid = (start + end) / 2;
    int ans=0;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans=mid;
            end=mid-1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}


int searchlast(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    long mid = (start + end) / 2;
    int ans=0;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans=mid;
            start=mid+1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8};

    int key;
    cin >> key;

    cout << searchfirst(arr1, 10, key);
    cout << searchlast(arr1, 10, key);
}


