#include <iostream>

using namespace std;

int main(){
    int  t,a[200],b[200],c[200],m,n;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i=0; i<n+m; i++) c[i]=0;
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<m; i++) cin >> b[i];
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++) {
                c[i+j]=c[i+j]+a[i]*b[j];
            }
        }
        for (int i=0; i<n+m-1; i++) cout << c[i] << " ";
        cout << endl;
    }
}