#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[1005];bool ok;vector<int> path;
int visited[1005];
void DFS(int u,int t){
	visited[u]=true;
	path.push_back(u);
	if(u==t){
		ok=true;
		return;
	}
	for(int v:adj[u]){
		if(!visited[v]){
			DFS(v,t);
		}
	}
	path.pop_back();
}
int main(){
	int t;cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		for(int i=1;i<=v;++i){
			adj[i].clear();
			visited[i]=false;
		}
		for(int i=0;i<e;++i){
			int x;int y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		//sort
		int q;cin>>q;
		while(q--){
			int n,m;cin>>n>>m;
			for(int i=1;i<=v;++i){
		//	adj[i].clear();
			visited[i]=false;
		    }    
			ok=false;
			path.clear();
			DFS(n,m);
			if(!ok)cout <<"NO"<<endl;
			else cout <<"YES"<<endl;
		}
		
		
	}
}

