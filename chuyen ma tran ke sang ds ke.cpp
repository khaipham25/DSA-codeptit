#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int n;cin>>n;
	int a[n+1][n+1];
	vector<int> adj[10000];
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(a[i][j]==1)
			cout << j<<" ";
		}
		cout <<endl;
	}

}

