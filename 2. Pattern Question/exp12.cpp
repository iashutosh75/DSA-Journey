/*
print the pattern
#1
A A A
B B B
C C C

#2
A B C
A B C
A B C
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
        int j = 1;
        while (j <= n)
        {

            //char ch = 'A'+j-1; for first pattern
            char ch = 'A'+j-1;   //for second pattern
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}


