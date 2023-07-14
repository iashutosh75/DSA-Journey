// using function to find wheather a number is even or odd

#include <bits/stdc++.h>
using namespace std;

bool isEven(int b)
{
    int c;
    c = b % 2;

    if (c == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a;
    cin >> a;

    cout << isEven(a);
}
