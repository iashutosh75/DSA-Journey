/*
print the pattern
1
2 3
3 4 5 
4 5 6 7
5 6 7 8 9
*/


#include<iostream>
using namespace std;
int main(){

    int i=1;
    int n;
    cin>>n;

    while(i<=n){
         int j=0;

         while(j<i){
            cout<<i+j<<" ";
            // cout<<k;
            j++;
         }
         cout<<endl;
         i++;

    }
}



