// to find how many notes of 100, 50, 20 and 10 are required for 1350;

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rupee;
    cin >> rupee;
    for (int i = 0; i <= 3; i++)
    {

        int rmoney = 0;

        switch (i)
        {

        case 0:
            cout << "Number of 100 rupee note required is: " << rupee / 100 << endl;
            rmoney = rupee / 100;
            rupee = rupee - (rmoney * 100);

            break;
        case 1:
            cout << "Number of 50 rupee note required is: " << rupee / 50 << endl;
            rmoney = rupee / 50;
            rupee = rupee - (rmoney * 50);

            break;
        case 2:
            cout << "Number of 20 rupee note required is: " << rupee / 20 << endl;
            rmoney = rupee / 20;
            rupee = rupee - (rmoney * 20);

            break;
        case 3:
            cout << "Number of 10 rupee note required is: " << rupee / 10 << endl;
            rmoney = rupee / 10;
            rupee = rupee - (rmoney * 10);
            break;
        }
    }
}




