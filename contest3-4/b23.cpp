#include <iostream>
#define p 1000000007
using namespace std;
int64_t n,k,a[100];



int main(){
    a[0]=1;
    for (int i=1; i<=50; i++) a[i]=a[i-1]*2;
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        while (n>0){
            if (k==a[n]) {
                cout << n+1 << endl; 
                break;
            }
            if (k>a[n]) k-=a[n];
            n--;
        }
    }
}