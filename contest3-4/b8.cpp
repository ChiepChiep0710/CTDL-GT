#include <iostream>
#include <algorithm> 
using namespace std;

struct data
{
    int st;
    int en;
};

bool bo(struct data x,struct data y){
    return x.en<y.en;
}

int main(){
    int64_t t,n,res;
    struct  data a[1001];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i].st;
        for (int i=0; i<n; i++) cin >> a[i].en;
        sort(a,a+n,bo);
        int timeEnd=a[0].en;
        res=1;
        for (int i=1; i<n; i++) {
            if (a[i].st>=timeEnd){
                res++;
                timeEnd=a[i].en;
            }
        }
        cout << res << endl;
    }
} 