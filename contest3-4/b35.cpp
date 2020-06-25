#include <iostream>

using namespace std;

int main(){
    int  t,a[200],b[200],c[200],m,n,res;
    cin >> t;
    while (t--){
        cin >> n;b[0]=0;
        res=-1000000;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            b[i]=b[i-1]+a[i];
        }
        for (int i=1; i<=n; i++){
            for (int j = i; j <=n; j++){
                if (b[j]-b[i-1]>res) res=b[j]-b[i-1];
            }
        }
        cout << res << endl;
    }
}