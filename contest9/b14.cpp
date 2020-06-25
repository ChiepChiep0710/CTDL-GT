#include <iostream>
#define maxn 1000005
using namespace std;
int n,m,s,t,k;
int head[2*maxn],st[maxn],en[maxn],adj[maxn],que[maxn],tr[maxn];
bool fr[maxn];

void reinit(){
    for (int i=1; i<=n; i++) {
        fr[i]=true;
        tr[i]=0;
    }
}

void init(){
    int u,v;
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        fr[i]=true;
        tr[i]=0;
    }
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

void dfs(int u){
    fr[u]=false;
    for (int i=head[u+1]; i>head[u]; i--){
        int v=adj[i];
        if (fr[v]) {
            tr[v]=u;
            dfs(v);
        }
    }
}

void bfs(){
    int l=0,r=0;
    r++; que[r]=s; 
    fr[s]=false;
    while (l<=r){
        l++; 
        int u=que[l];
        for (int i=head[u+1]; i>head[u]; i--){
            
            int v=adj[i];
            if (fr[v]) {
                tr[v]=u;
                r++; que[r]=v;
                fr[v]=false;
            }
        }
    }
}

void path(){
    int m=0,b[1005];
    m++; b[m]=t;                       // gán t vào đường đi
    if (tr[t]==0) {                    // nếu trước v không có đỉnh nào
        cout << -1;
        return;
    }
    
    int u=tr[t];
    while (tr[u]!=0)                   // khi trước u vẫn còn đỉnh
    {
        m++; b[m]=u;
        u=tr[u];                       // gán u bằng đỉnh trước u
    }

    m++; b[m]=s;                       // gán s vào đường đi
    for (int i=m; i>0; i--) cout << b[i] << " " ; // in đường đi
}

int main(){
    int tt;
    cin >> tt;
    while (tt--){
        init();
        cin >> k;
        for (int i=0; i<k; i++){
            reinit();
            cin >> s >> t;
            dfs(s);
            if (tr[t]) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
        /*for (int u=1; u<=n; u++){
            for (int i=head[u+1]; i>head[u]; i--)
            {
                cout << adj[i] << " ";
            }
            cout << endl;
        }*/
    }
}
