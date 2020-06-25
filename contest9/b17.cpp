#include <iostream>
#define maxn 1000005
using namespace std;
int n,m,s;
int head[2*maxn],st[maxn],en[maxn],adj[maxn];
bool fr[maxn];
void init(){
    int u,v;
    cin >> n >> m ;
    for (int i=1; i<=n; i++) fr[i]=true;
    for (int i=0; i<=n+1; i++) head[i]=0;
    for (int i=0; i<m; i++){ 
        cin >> st[i] >> en[i];
        head[st[i]]++;
    }
    for (int i=2; i<=n; i++) head[i]=head[i-1]+head[i];
    for (int i=0; i<m; i++){
        adj[head[st[i]]]=en[i];
        head[st[i]]--; 
    }
    head[n+1]=m;
}

void dfs(int u){
    fr[u]=false;
    for (int i=head[u+1]; i>head[u]; i--){
        int v=adj[i];
        if (fr[v]) dfs(v);
    }
}

bool check(){
    for (int i=1; i<=n; i++) 
        if (fr[i]) return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int count=0;
        init();
        dfs(1);
        if (check()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}