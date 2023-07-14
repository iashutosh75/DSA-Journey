// calculator using switch case

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    int y;
    char ch;
    cin >> x >> y >> ch;

    switch (ch)
    {

    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        cout << x / y;
        break;
    case '%':
        cout << x % y;
        break;
    }
}