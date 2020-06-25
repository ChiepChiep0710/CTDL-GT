#include <iostream>
#define p 1000000007
using namespace std;
int n,k,a[100000];

int bs(){
    int l=1, r=n, mid;
    while (l<=r) {
        mid=(l+r) /2;
        if (a[mid]==k) return mid;
        if (a[mid]>k) r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i=1; i<=n; i++) cin >> a[i];
        int res=bs();
        if (res>0) cout << res << endl;
        else cout << "NO" << endl;
    }
}