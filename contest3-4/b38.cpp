#include <iostream>

using namespace std;

int main(){
    int  t,*A,*B,m,n,k,res,nn,mm;
    cin >> t;
    while (t--){
        cin >> n >> m >> k;
        A=new int[n+1];
        B=new int[m+1];
        for (int i=0; i<n; i++) cin >> A[i];
        for (int i=0; i<m; i++) cin >> B[i];
        A[n]=10000000; B[m]=10000000;
        nn=0; mm=0;
        int i=0,tg;
        while (nn<n && mm<m){
            if (A[nn]<=B[mm]) {
                tg=A[nn]; nn++;
            } else {
                tg=B[mm]; mm++;
            }
            i++;
            if (i==k) {
                cout << tg << endl;
                break;
            }
        }

    }
}