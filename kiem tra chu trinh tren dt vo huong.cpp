#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[10000];
bool visited[10000];
int n,m;
void input(){
	cin>>n>>m;
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
bool dfs(int u,int par){
	 visited[u]=true;
	 for(int v: adj[u]){
	 	if(!visited[v]){
	 		if(dfs(v,u))return true;
		}else if(v!=par)return true;
	}
	return false;
}

int main(){
	int t;cin>>t;
	while(t--){
		for(int i=1;i<=n;++i){
			visited[i]=false;
			adj[i].clear();
		}
		input();
		int check=0;
		for(int i=1;i<=n;++i){
			if(!visited[i]){
				if(dfs(i,0)){
					check=1;
					break;
				}
			}
		}
		if(check)cout <<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

