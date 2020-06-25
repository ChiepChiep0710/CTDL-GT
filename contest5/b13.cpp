#include <iostream>
using namespace std;

int64_t min(int64_t x, int64_t y){
    if (x<y) return x;
    else return y;
}

int main(){
    int64_t t,n,f[10001];
    //------- init ----
    f[0]=1;
    int last2=0;
    int last3=0;
    int last5=0;
    for (int i=1; i<10000; i++){
        int tr=f[i-1];
        while (f[last2] * 2 <= tr) ++last2;
        while (f[last3] * 3 <= tr) ++last3;
        while (f[last5] * 5 <= tr) ++last5;
        f[i]=min(f[last2] * 2 , min(f[last3] * 3 , f[last5] * 5));
    }

    cin >> t;
    while (t--){
        cin >> n;
        cout << f[n-1] << endl;
    }
}