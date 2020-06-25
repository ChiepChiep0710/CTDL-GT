#include <iostream>
#define p 1000000007
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

int64_t dao(int64_t x){
    int64_t res=0;
    while (x>0){
        res=res*10+x % 10;
        x=x/10;
    }
    return res;
} 

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n ;
        cout << pow(dao(n)) << endl;
    }
}