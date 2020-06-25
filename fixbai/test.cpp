#include <iostream>
#include <math.h>
using namespace std;

/*int sum(int x){
    int res=0;
    while (x>0){
        res+=x%10;
        x=x/10;
    }
    return res;
}

bool check(int x){
    int tg1=0,tg2=sum(x);
    int xx=x;
    for (int i=2; i<=sqrt(xx); i++){
        if (x % i==0){
            while (x % i == 0) 
            {
                tg1+=sum(i);
                x=x/i;
            }
        }
    }
    if (x>0) tg1+=sum(x);
    return (tg1==tg2);
}

int main(){
    int n;
    cin >> n;
    int i=n;
    while (true){
        if (check(i)) {
            cout << i;
            break;
        }
        i++;
    }
}*/

int main(){
    int n,c,r,cheo1,cheo2,w=0,g=0;
    cin >> n;
    cin >> r >> c >> cheo1 >> cheo2;
    if (n % 2 == 0){
        w+=n;
        g+=n;
        if (c+r % 2 == 0) g--;
        else w--; 
    }
    else {
        w+=n;
        g+=n;
        if (r % 2 == 0) w+=1;
        else g+=1;
        if (c % 2 == 0) w+=1;
        else g+=1;
        if (c+r % 2 == 0) g--;
        else w--;
    }
    int tg;
    if (cheo1<=n) tg=cheo1;
    else tg=n*2-cheo1;
    if (cheo1 % 2 == 0) w+=tg;
    else g+=tg;
    if (cheo2<=n) tg=cheo2;
    else tg=n*2-cheo2;
    if (cheo2 % 2 == 1) w+=tg;
    else g+=tg;
    if (abs(cheo1-cheo2) % 2 ==1){
        
    }
}
