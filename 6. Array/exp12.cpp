// simple trying to find square root of a number

#include<bits/stdc++.h>
using namespace std;
int main(){

    int k=35;
    int n=1;
    // int l=;

    while(n<=k){
        if(n*n==k){
            cout<<n;
            break;
        }
        if (n*n>k){
            cout<<n-1;
            break;
        }
        if(n*n<k){
            n++;
        }
    }
}