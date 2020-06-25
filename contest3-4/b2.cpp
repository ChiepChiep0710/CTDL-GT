#include <iostream>
using namespace std;

int changeMax(int x){
    int xx=0,mu=1;
    while (x>0)
    {
        int tg=x % 10;
        if (tg==5) tg=6;
        xx=xx+tg*mu;
        mu*=10;
        x=x/10;
    }
    return xx;
}

int changeMin(int x){
    int xx=0,mu=1;
    while (x>0)
    {
        int tg=x % 10;
        if (tg==6) tg=5;
        xx=xx+tg*mu;
        mu*=10;
        x=x/10;
    }
    return xx;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << changeMin(a)+changeMin(b) << " " << changeMax(a) + changeMax(b);
}