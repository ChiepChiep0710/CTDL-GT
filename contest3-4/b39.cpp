#include <iostream>
#include <algorithm>
#define p 1000000007;
using namespace std;
int64_t t,n,*A,*B,k;
int main(){
    cin >> t;
    while (t--) {
        cin >> n ; 
        A=new int64_t[n+1];
        B=new int64_t[n+1];
        for (int i=1; i<=n; i++) cin >> A[i];
        for (int i=1; i<n; i++) cin >> B[i];
        for (int i=1; i<=n; i++) 
            if (A[i]!=B[i]){
                cout << i << endl;
                break;
            }
    }
}