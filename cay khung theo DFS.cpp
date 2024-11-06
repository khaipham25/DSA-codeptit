#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll v,e,k;
vector<int> adj[100005];
bool visited[100005];
vector<pair<int,int>> v1;
void DFS(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			v1.push_back({u,v});
			DFS(v);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>v>>e>>k;
		for(int i=1;i<=v;++i){
			adj[i].clear();
			visited[i]=false;
		}
		for(int i=0;i<e;++i){
			int x,y;cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		v1.clear();
		DFS(k);
		if(v1.size()==v-1){
			for(auto x:v1)cout <<x.first<<" "<<x.second<<endl;
		}else cout <<"-1"<<endl;
	}
}

