// question #1 on pass by value

#include<bits/stdc++.h>
using namespace std;

void addOne(int a){
    a++;
}


int main(){

int a;
cin>>a;

addOne(a);

cout<<a<<endl;


}
