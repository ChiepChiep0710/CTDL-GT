#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    int t,n,a[100],b[100];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l=0, r=n-1;
        bool ok=true;
        while (l<r){
            if ((a[l]==b[l] && a[r]==b[r])|| (a[l]==b[r] && a[r]==b[l])) ok=true;
            else  {
                ok=false;
                break;
            }
            l++; r--;
        }
        if (ok) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
} 