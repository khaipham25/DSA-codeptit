#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool visited[10000]={false};
vector<int> adj[10000];
int n,m,k;
vector<int> v;

void input(){
    for(int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
}

void DFS(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v])
            DFS(v);
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        bool ok=true; // changed from false to true
        int dem=0;
        cin>>n>>m;
        for(int i=1;i<=n;++i){
            visited[i]=false;
            adj[i].clear();
        }
        input();
        for(int i=1;i<=n;++i){
            visited[i]=false;
            DFS(i);
            for(int j=1;j<=n;++j){
                if(!visited[j]){
                    ok=false; // set ok to false if an unvisited node is found
                    break;
                }
            }

        }
        if (ok) // print "YES" only if all nodes are visited
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
