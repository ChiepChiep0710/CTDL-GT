#include <bits/stdc++.h>
using namespace std;

int OK = true;
string a;

void nextbit()
{
    int i = a.length();
    while (i > 0 && a[i] != '0')
    {
        a[i] = '0';
        i--;
    }
    if(i > 0)
    {
        a[i] = '1';
    }
    else OK = false;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        nextbit();
        if(OK)
        {
            cout << a << endl;
        }
        else
        {
            for (int i = 0; i < a.length(); i++)
            {
                cout << "0"; 
            }
            cout << endl;
        }
    }
}