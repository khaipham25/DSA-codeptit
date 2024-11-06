#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<int> adj[1005];bool ok;
int visited[1005];
int euler(int v){
	int cnt=0;
	for(int i=1;i<=v;++i){
		if(adj[i].size()%2==1)cnt++;
	}
	if(cnt==2)return 1;
	if(cnt==0)return 2;
	return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		for(int i=1;i<=v;++i){
			adj[i].clear();		
		}
		for(int i=0;i<e;++i){
			int x;int y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		cout <<euler(v)<<endl;
	}
}


