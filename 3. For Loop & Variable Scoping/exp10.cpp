// bitwise operator
#include<bits/stdc++.h>
using namespace std;
int main(){

 int num=6;
 int k=0;
 int value=1;

 while(k<=num){

    k=num%2;
    cout<<k;
    num=num/2;

 }

 int g=0;
 
 while(g<=k){
    g=k%10;
 }

}