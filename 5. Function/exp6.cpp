// question #2 on pass by value

#include<bits/stdc++.h>
using namespace std;

int addOne(int a){
    a-=5;
    return a;
}


int main(){

int a;
cin>>a;

addOne(a);

cout<<a<<endl;


}