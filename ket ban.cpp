#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
const int md=1e6+1;
vector<int> adj[md];
bool visited[md];
int v,e;
int dem;
void DFS(int u){
	visited[u]=true;
	++dem;
	for(int v:adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>v>>e;
		int res=0;
		for(int i=1;i<=v;++i){
			adj[i].clear();
			visited[i]=false;
		}
		for(int i=0;i<e;++i){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=1;i<=v;++i){
			if(!visited[i]){
				dem=0;
				DFS(i);
			}
			res=max(res,dem);
		}
		cout <<res<<endl;
	}
}

