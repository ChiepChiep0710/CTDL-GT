#include <iostream>
#include <queue>

using namespace std;

long long mod = 1e9 + 7;

int main()
{
    long long n,t;
cin >> t;
while (t--){
    cin >> n;
    long long k;
    priority_queue<long long, vector<long long>, greater<long long> > a;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a.push(k);
    }
    long long sum = 0;
    while (a.size() > 1)
    {
        long long first = a.top(); a.pop(); first = first%mod;
        long long second = a.top(); a.pop(); second = second%mod;
        long long e = (first + second)%mod;
        sum += e;
        sum %= mod;
        a.push(e);
    }
    cout << sum << endl;
}
}