//to find prime or not


#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n;
    cin >> n;
    int count=0;

    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
        
    }

    if(count==2){
        cout<<"Prime";
    }

    else{
        cout<<"Not";
    }
}



