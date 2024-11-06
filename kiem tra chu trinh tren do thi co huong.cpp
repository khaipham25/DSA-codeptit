#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[1005];
bool visited[1005];
int color[1005];
int parent[1005];
int v,e;
bool DFS(int u){
	color[u]=1;
	for(int v:adj[u]){
		if(color[v]==0){
			parent[v]=u;
			if(DFS(v))return true;
		}else if(color[v]==1)return true;
	}
	color[u]=2;
	return false;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=v;++i){
			adj[i].clear();
		//	visited[i]=false;
			color[i]=0;
		}
		for(int i=0;i<e;++i){
			int x;int y;
			cin>>x>>y;
			adj[x].push_back(y);
		}
		int check=0;
		for(int i=1;i<=v;++i){
			if(color[i]==0){
				if(DFS(i)){
					check=1;break;
				}
		   }
	   }
	   if(check)cout <<"YES"<<endl;else cout <<"NO"<<endl;
    }
}

