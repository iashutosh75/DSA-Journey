// introduction to array

#include <bits/stdc++.h>
using namespace std;

void arrValue(int arr[], int tillwhen)
{
    for (int i = 0; i < tillwhen; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    //  ----------------------------------

    int number[15];     // defining the array
    cout << number[15]<<endl; // printing the  array value at index 16

    // ----------------------------------

    int num[3] = {1, 2, 3}; // initalizing the array

    cout << num[2]<<endl; // printing the array value at index 3

    //-------------------------------------

    int num2[15] = {1, 2, 3}; // initalizing the value of array

    int n = 15; // integer n till which index we want to print the array index value
    for (int i = 0; i < n; i++)
    {
        cout << num2[i]; // printing all value  at the i index till i=14
    }
    cout<<endl;

    //-----------------------------------------

    //  below code by function

    int num3[10]={1,2,3};
    n=10;
    arrValue(num3, n);
    cout<<endl;
    int sizeofnum3= sizeof(num3)/sizeof(int);
    cout<<sizeofnum3;
    cout<<endl;

    //--------------------------------------------

    // dealing with character in array

    char ch1[5]={'A','B','C','D','E'};

    for(int i=0; i<5; i++){
        cout<<ch1[i];
    }

    
}
