#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[1005];
vector<int> path; bool ok;bool visited[1005];
int parent[1005];
ll v,e,s,t;
void input(){
	for(int i=0;i<e;++i){
		int x;int y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	for(int i=1;i<=v;++i)sort(adj[i].begin(),adj[i].end());
}
void BFS(int i){
	queue<int> q;
	visited[i]=true;
	q.push(i);
	while(!q.empty()){
		int u=q.front();q.pop();
		for(int v :adj[u]){
			if(!visited[v]){
				q.push(v);
				visited[v]=true;
				parent[v]=u;
			}
		}	
	}	
}

int main(){
	int kl;cin>>kl;
	while(kl--){
		cin>>v>>e>>s>>t;
		for(int i=1;i<=v;++i){
			visited[i]=false;
			adj[i].clear();
		}
		input();
	//	ok=false;
		path.clear();
		BFS(s);
		if(!visited[t]){
			cout <<"-1"<<endl;
		}else {
			while(t!=s){
				path.push_back(t);
				t=parent[t];
			}
			path.push_back(s);
			reverse(path.begin(),path.end());
		}
		for(auto x:path )cout <<x<<" ";
		cout <<endl;
	}
}

