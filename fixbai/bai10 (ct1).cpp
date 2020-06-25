#include <bits/stdc++.h>
using namespace std;
#define MAX 10

void solve()
{
    string a;
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if(a[i] == '1')
            if (a[i+1] == '1') a[i+1] = '0';
            else a[i+1] = '1';
    }
    cout << a << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}