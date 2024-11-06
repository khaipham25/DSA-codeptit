#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[1005];vector<int> path;
bool ok;
bool visited[1005];
int parent[1005];
void BFS(int i){
	queue<int> q;
	visited[i]=true;
	q.push(i);
	while(!q.empty()){
		int u=q.front();q.pop();
		for(int v:adj[u]){
			if(!visited[v]){
				
				q.push(v);
				visited[v]=true;
				parent[v]=u;
			}
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		ll v,e,bd,kt;
		cin>>v>>e>>bd>>kt;
		for(int i=1;i<=v;++i){
			adj[i].clear();
			visited[i]=false;
		}
		for(int i=0;i<e;++i){
			int x,y;cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=1;i<=v;++i)sort(adj[i].begin(),adj[i].end());
		BFS(bd);
		path.clear();
		if(!visited[kt])cout <<"-1"<<endl;
		else {
			while(kt!=bd){
				path.push_back(kt);
				kt=parent[kt];
			}
			path.push_back(bd);//not th dau tien
			reverse(path.begin(),path.end());
			for(auto x:path)cout <<x<<" ";
			cout <<endl;
		}
	}
}

