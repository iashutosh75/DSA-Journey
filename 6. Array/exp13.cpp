#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr1[5] = {23, 45, 67, 45, 78};
    int max[4];
    for (int i = 0; i < 5; i++)
    {
            max[i] = arr1[i] + arr1[i + 1];
            
    }

     for (int i = 0; i < 4; i++)
    {
            cout<<max[i]<<endl;;
            
    }

}