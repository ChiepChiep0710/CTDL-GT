#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int64_t t,n,a[100],mu,count,res;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        mu=1; count=0; res=0;
        for (int i=n-1; i>=0; i--)
        {
            count++;
            if (count>2) {
                mu*=10;
                count=1;
            }
            res=res+a[i]*mu;
        }
        cout << res << endl;
    }
}