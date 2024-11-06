#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		k=min(k,n-k);
		long long x=0,y=0;
		for(int i=0;i<k;++i)x=x+a[i];
		for(int i=k;i<n;++i)y=y+a[i];
		cout <<y-x<<endl;
	}
}

