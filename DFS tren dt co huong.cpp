#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool visited[10000]={false};
vector<int> adj[10000];
int n,m,k;
void input(){
	for(int i=1;i<=m;++i){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
	}
}
void DFS(int u){
	visited[u]=true;
	cout <<u<<" ";
	for(int v:adj[u]){
		if(!visited[v])DFS(v);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m>>k;
		for(int i=1;i<=n;++i){
			visited[i]=false;
			adj[i].clear();
		}
		input();
		DFS(k);
		cout <<endl;
	}
}

