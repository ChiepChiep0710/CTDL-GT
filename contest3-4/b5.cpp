#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    int t,n,k,a[1000],res;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        res=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            res+=a[i];
        }
        sort(a,a+n);
        for (int i=0; i<min(k,n-k); i++) res-=a[i]*2;
        cout << res << endl;
    }
}