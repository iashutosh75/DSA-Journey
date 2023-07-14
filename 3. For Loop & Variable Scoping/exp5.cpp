// print a prime number #method 2

#include <iostream>
using namespace std;
int main()
{

    int i = 2;
    int n;
    cin >> n;
    int a = 1;

    for (i; i < n; i++)
    {

        if (n % i == 0)
        {
            a=0;
            break;
        }
    }

    if(a==0){
        cout<<"not prime";
    }

    else{
        cout<<"prime";
    }
}

