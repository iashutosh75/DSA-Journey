/*
print the pattern
1
2 1
3 2 1
4 3 2 1

*/


#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n;
    cin >> n;

    while (i <= n)
    {

        int j = 0;
        while (j < i)
        {
            cout << i - j << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}