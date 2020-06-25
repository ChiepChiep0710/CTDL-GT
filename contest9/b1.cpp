#include <iostream>
#define maxn 1000005
using namespace std;
int n,m;
int head[2*maxn],st[maxn],en[maxn],adj[maxn];
void init(){
    int u,v;
    cin >> n >> m;
    for (int i=0; i<=n+1; i++) head[i]=0;
    for (int i=0; i<m; i++){ 
        cin >> st[i] >> en[i];
        head[st[i]]++;
        head[en[i]]++;
    }
    for (int i=2; i<=n; i++) head[i]=head[i-1]+head[i];
    for (int i=0; i<m; i++){
        adj[head[st[i]]]=en[i];
        adj[head[en[i]]]=st[i];
        head[st[i]]--; head[en[i]]--;
    }
    head[n+1]=2*m;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        init();
        for (int u=1; u<=n; u++){
            cout << u << ": ";
            for (int v=head[u+1]; v>head[u]; v--){
                cout << adj[v] << " ";
            }
            cout << endl;
        }
    }
}