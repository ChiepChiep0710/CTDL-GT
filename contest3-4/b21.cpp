#include <iostream>
#define p 1000000007
using namespace std;
int64_t n,k;


int64_t pow(int64_t x){
    if (x==0) return 1;
    if (x==1) return n;
    int64_t tg=pow(x/2) % p;
    int64_t nhan=((tg%p)*(tg%p)) % p;
    if (x % 2 == 1) nhan=((nhan%p)*(n%p)) % p;
    return nhan;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        cout << pow(k) << endl;
    }
}