// if else question

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: " << endl;
    cin >> ch;
    int a = ch;

    if (a >= 65 && a <= 90)
    {

        cout << "Upper";
    }

    else if (a >= 97 && a <= 122)
    {

        cout << "Lower";
    }

    else if (a >= 48 && a <= 57)
    {

        cout << "Integer";
    }
}
