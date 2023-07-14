// practice question #for loop -1

#include<bits/stdc++.h>
using namespace std;
int main(){

    for(int i=0; i<5;i++){
        for(int j=i;j<=5;j++){
            if(j+i==10){
                break;
            }

        cout<<i<<" "<<j<<endl;
        }
    }

}