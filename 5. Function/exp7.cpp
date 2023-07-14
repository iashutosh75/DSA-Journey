// question #3 on pass by value

#include <bits/stdc++.h>
using namespace std;

int addOne(int a)
{
    int ans = a * a;
    return ans;
}

int main()
{
    int a;
    cin >> a;
    a = addOne(a);
    cout << a << endl;
}
