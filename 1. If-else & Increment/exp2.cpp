//find the sum of all even number till n

#include<iostream>
using namespace std;

int main(){

int i=0;
int n;
cin>>n;
int sum=0;

while(i<n){
    i=i+2;
    sum=sum+i;

}
cout<<sum<<endl;
}

