#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

void solve(long long n, priority_queue<long long, vector<long long>,  greater<long long> > a){
    long long sum=0;
    long long first, second;
    while (a.size()>1)
    {
        first = a.top(); a.pop();
        second = a.top(); a.pop();
        long long e = first+second;     
        sum += e;
        a.push(e);
    }
    cout << sum << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        priority_queue<long long,vector<long long>, greater<long long> > a;
        for(int i=0; i<n; i++){
            long long k; cin >> k;
            a.push(k);
        }
        solve(n,a);
        
    }
}