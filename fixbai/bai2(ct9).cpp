#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    string *s;
    cin >> n;
    cin.ignore();
    s = new string[n+1];
    for (int i = 1; i <= n; i++) getline(cin, s[i]);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < s[i].length(); j++)
            if(s[i][j] > '0' && s[i][j] <= '9' && i < s[i][j] - '0') cout << i << " " << s[i][j] << endl;
}