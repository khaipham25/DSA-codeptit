#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+m];
		for(int i=0;i<n+m;++i)cin>>a[i];
		sort(a,a+n+m);
		cout <<a[k-1];
		cout <<endl;
	}
}

