#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		priority_queue<int,vector<int>,greater<int>> pq;
		int a[n];
		for(auto &x:a){
			cin >>x;
			pq.push(x);
		}
		ll ans=0;
		while(pq.size()>1){
			ll top1=pq.top();
			pq.pop();
			ll top2=pq.top();
			pq.pop();
			ans=ans+(top1+top2);
			pq.push(top1+top2);
		}
		cout <<ans<<endl;
	}
}

