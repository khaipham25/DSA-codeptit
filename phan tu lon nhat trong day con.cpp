#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll max1(queue<ll> q){
	ll m=0;
	while(!q.empty()){
		ll top=q.front();
		q.pop();
		m=max(m,top);
	}
	return m;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;int k;
		cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		queue<ll> q;
		for(int i=0;i<k;++i){
			q.push(a[i]);
		}
		cout <<max1(q)<<" ";
		for(int i=k;i<n;++i){
			q.pop();
			q.push(a[i]);
			cout << max1(q)<<" ";
		}
		cout <<endl;
	}
}

