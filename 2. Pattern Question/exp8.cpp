//same as exp number 6

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    int k=1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
       
    }
}

