/*to find a factorial of a number

nCr = n!/r!*(n-r)!

*/

#include <bits/stdc++.h>
using namespace std;

int isFact(int n, int r)
{
 
    int fact_r=1;
    int new_r = 1;
    while (new_r <= r)
    {
        fact_r = fact_r * (new_r);
        new_r++;
    }

    int k = n - r;
    int new_k=1;
    int fact_k=1;

    while (new_k <= k)
    {
        fact_k = fact_k * (new_k);
        new_k++;
    }

    int fact_n=1;
    int new_n = 1;
    while (new_n <= n)
    {
        fact_n = fact_n * (new_n);
        new_n++;
    }

    int final_fact= fact_n/(fact_r*(fact_k));

    cout<<final_fact;


}

int main()
{

    int a, b;
    cin >> a >> b;

    isFact(a, b);
}


