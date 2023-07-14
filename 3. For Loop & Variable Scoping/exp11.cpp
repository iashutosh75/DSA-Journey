// to find wheather a number is palindrome or not

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x=34;
    int valuestored = x;

    long k = 0;

    if (x < 0)
    {
        return false;
    }

    while (x > 0)
    {
        k *= 10;
        k =k+(x % 10);
        x = x / 10;
    }

    if (valuestored == k)
    {
        cout<<"true";
    }

    else
    {
        cout<<"false";
    }
}



