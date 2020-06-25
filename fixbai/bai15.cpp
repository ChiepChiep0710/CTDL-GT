#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        int res, need;
        if(m>n) cout << -1 << endl;
        else{
            need = s*m;
            if(need%n==0) cout << need/n << endl;
            else cout << need/n+1 << endl;
        }
    }
}