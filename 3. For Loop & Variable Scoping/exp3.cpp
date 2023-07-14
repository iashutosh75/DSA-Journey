// fibonacci series

#include<iostream>
using namespace std;
int main(){
    int i=0;
    int j=1;
    int sum=0;
    int n;
    cin>>n;

    cout<<i<<" "<<j<<" "<<" ";
    for(int k=1; k<=n; k++ ){
        sum=i+j;
        cout<<sum<<" ";
        i=j;
        j=sum;

    }
}