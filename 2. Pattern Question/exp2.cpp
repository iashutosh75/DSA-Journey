/*print a pattern 
6 5 4 3 2 1 
6 5 4 3 2 1 
6 5 4 3 2 1 
6 5 4 3 2 1 */


#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i <= 4)
    {
        int j = 6;
        while (j > 0)
        {
            cout << j << " ";
            j = j - 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

