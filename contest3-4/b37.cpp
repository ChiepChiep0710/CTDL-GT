#include <iostream>
#include <algorithm>
#define p 1000000007;
using namespace std;
int64_t t,n,*A,k;

int bs(){
    int l=0, r=n-1, mid,res=-2;
    while (l<=r) {
        mid=(l+r) /2;
        if (A[mid]<=k) {
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
        cin >> n >> k; A=new int64_t[n];
        for (int i=0; i<n; i++) cin >> A[i];
        cout << bs()+1 << endl;
    }
}