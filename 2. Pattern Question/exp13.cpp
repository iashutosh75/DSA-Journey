/*
print the pattern
A B C
D E F
G H I

*/


#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n;
    cin >> n;

    char ch='A';

    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << ch;
            ch+=1;
            j++;
        }
        cout << endl;
        i++;
    }
}

