// selection sorting

#include <bits/stdc++.h>
using namespace std;

int selectionS(int arr[], int size){

    for(int i=0; i<size-1; i++){

        int minimum=i;
        for(int j=i+1; j<size-1; j++ ){

           if(arr[j]<arr[minimum]){
                minimum=j;
           }
        }

        swap(arr[minimum], arr[i]);
    }

    for(int i=0; i<size-1; i++){
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int arr1[10] = {23, 45, 34, 67, 12, 14, 67, 10, 4, 5};
    selectionS(arr1, 10);

} 


