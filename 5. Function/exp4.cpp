// pass by value

#include<bits/stdc++.h>
using namespace std;

int addOne(int d){
    d++;
    cout<<d<<endl;
}


int main(){

int a;
cin>>a;

addOne(a);

cout<<"If we add 1 to the  number then:"<<a<<endl;


}
