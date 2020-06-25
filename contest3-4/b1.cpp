#include <iostream>

using namespace std;

int main(){
    int t,n,a[20],res;
    a[0]=1; a[1]=2; a[2]=5; a[3]=10; a[4]=20; a[5]=50; a[6]=100; a[7]=200; a[8]=500; a[9]=1000;
    cin >> t;
    while (t--){
        res=0;
        cin >> n;
        for (int i=9 ; i>=0; i--)
        {
            while (n>=a[i]) {
                res++; n-=a[i];
            }
        }
        cout << res << endl;
    }
}