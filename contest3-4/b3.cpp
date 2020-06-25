#include <iostream>
#include <algorithm>
#define p 1000000007;
using namespace std;
int main(){
    int64_t t,n,*A,res,tg;
    cin >> t;
    while (t--) {
        cin >> n; A=new int64_t[n];
        for (int i=0; i<n; i++) cin >> A[i];
        sort(A,A+n);
        res=0;
        for (int i=0; i<n; i++){
            tg = (A[i]*i) % p;
            res= (res + tg)  % p;
        }
        cout << res << endl;
    }
}