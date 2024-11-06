#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool visited[100000];
vector<int> adj[100000];
int n,m,k;
void input(){
	for(int i=0;i<m;++i){
		int x,y ; cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=n;++i)sort(adj[i].begin(),adj[i].end());
}
void dfs(int u){
	visited[u]=true;
	cout <<u<<" ";
	for(int v : adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m>>k;
		for (int i = 1; i <= n; ++i) {
            visited[i] = false;
            adj[i].clear();
        }
		input();
		dfs(k);
		cout <<endl;
	}
}

