// print prime number
#include<iostream>
using namespace std;
int main(){
    

    int i=1;
    int n;
    cin>>n;
    int count=0;
    for(i;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        cout<<"prime";
    }

    else{
        cout<<"not prime";
    }


}
