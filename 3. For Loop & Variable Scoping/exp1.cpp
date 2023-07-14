// for loop basic

#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n = 10;
    for (;;)
    {

        if (i <= n)
        {
            cout << i<<endl;
        }

        else
        {
            break;
        }
        i++;
    }
}