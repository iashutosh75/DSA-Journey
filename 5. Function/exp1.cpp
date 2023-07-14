// By using function write  a program to find power of a number

#include <bits/stdc++.h>
using namespace std;

int power(int c, int d)
{
    int a = 1;
    int ans=1;
    for (a; a <= d; a++)
    {
        ans = ans * c;
    }

    return ans;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout<<power(a, b);

    return 0;
}
