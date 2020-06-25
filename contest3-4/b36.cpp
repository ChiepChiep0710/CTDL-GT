#include <iostream>
#include <string>
using namespace std;
int64_t pow[100];
int64_t process(string x){
    int64_t n=x.length(),res=0;
    for (int i=n-1; i>=0; i--){
        if (x[i]=='1') res+=pow[n-i-1];
    }
    return res;
}

int main(){
    pow[0]=1;
    for (int i=1; i<=30; i++) pow[i]=pow[i-1]*2;
    int64_t  t,m,n,res;
    string a,b;
    cin >> t;
    while (t--){
        cin >> a >> b;

        cout << process(a)*process(b) << endl;
    }
}