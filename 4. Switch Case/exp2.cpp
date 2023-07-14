// implementation of nested switch case

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i = 2;
    char ch = 'A';

    switch (i)
    {
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2"<<endl;;
        switch (ch)
        {
        case 'A':
            cout << "You are good boy";
            break;
        }
        break;
    case 3:
        cout << "3";
        break;
    case 4:
        cout << "4";
        break;

    default:
        cout << "not matched";
    }
}