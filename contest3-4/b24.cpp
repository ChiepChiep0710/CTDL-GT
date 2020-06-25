#include <iostream>
#define p 123456789
using namespace std;
int64_t n,k;


int64_t pow(int64_t x){
    if (x==0) return 1;
    if (x==1) return n;
    int64_t tg=pow(x/2);
    int64_t nhan=(tg*tg) % p;
    if (x % 2 == 1) nhan=(nhan*n) % p;
    return nhan;
}

int main(){
    int t;
    cin >> t;
    n=2;
    while (t--){
        cin >> k;
        cout << pow(k-1) << endl;
    }
}