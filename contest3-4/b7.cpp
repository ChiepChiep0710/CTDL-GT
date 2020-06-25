#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
    int64_t t,n,*A,*B,res;
    cin >> t;
    while (t--) {
        cin >> n; A=new int64_t[n]; B=new int64_t[n];
        for (int i=0; i<n; i++) cin >> A[i];
        for (int i=0; i<n; i++) cin >> B[i];
        sort(A,A+n);
        sort(B,B+n);
        res=0;
        for (int i=0; i<n; i++)
        {
            res+=A[i]*B[n-i-1];
        }
        cout << res << endl;
    }
} 