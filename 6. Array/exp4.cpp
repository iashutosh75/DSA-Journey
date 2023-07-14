//  print the sum of all element in array

#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    int arr1[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout<<"Sum of element in array is: "<<sumArray(arr1, size);


}

