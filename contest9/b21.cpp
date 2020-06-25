#include <iostream>
#include <algorithm>
#define maxn 1000005
using namespace std;
int n,m,s,counts;
int head[2*maxn],st[maxn],en[maxn],adj[maxn],tr[maxn],low[maxn],num[maxn],socon[maxn];
bool fr[maxn],khop[maxn];
void init(){
    counts=0;
    int u,v;
    cin >> n >> m ;
    for (int i=1; i<=n; i++) {
        tr[i]=0;
        khop[i]=false;
        socon[i]=0;
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
    counts++;
    low[u]=counts;
    num[u]=counts;
    for (int i=head[u+1]; i>head[u]; i--){
        int v=adj[i];
        if (v!=tr[u]){
            if (tr[v]==0){
                tr[v]=u;
                dfs(v);
                low[u]=min(low[u],low[v]);
            }
            else low[u]=min(low[u],num[v]);
        }
    }
}

void findkhop(){
    for (int i=1; i<=n; i++)
        if (tr[i]!=-1) socon[tr[i]]++;
    for (int v=1; v<=n; v++){
        if (tr[v]!=-1){
            int u=tr[v];
            if (low[v]>=num[u]){
                if (tr[u]!=-1 || socon[u]>=2) khop[u]=true;
            }
        }
    }
    for (int i=1; i<=n; i++)
        if (khop[i]) cout << i << " ";
    cout << endl;
}

void 

int main(){
    int t;
    cin >> t;
    while (t--){
        init();
        for (int i=1; i<=n; i++){
            if (tr[i]==0){
                tr[i]=-1;
                dfs(i);
            }
        }
        findkhop();
    }
}