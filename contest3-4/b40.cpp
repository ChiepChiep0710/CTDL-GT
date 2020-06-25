#include <iostream>
#include <algorithm>
#define p 1000000007;
using namespace std;
int64_t t,n,a[10000],k;

int bs(){
    int l=1, r=n, mid,res=0;
    while (l<=r) {
        mid=(l+r) /2;
        if (a[mid]==0) {
            res=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
int main(){
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=1; i<=n; i++) cin >> a[i];
        cout << bs() << endl;
    }
}