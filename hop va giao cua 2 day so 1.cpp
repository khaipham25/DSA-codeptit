#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;set<int> s;map<int,int> mp;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;++i){
			cin>>a[i];s.insert(a[i]);mp[a[i]]++;
		}
		for(int i=0;i<m;++i){
			cin>>b[i];s.insert(b[i]);
			if(mp[b[i]]==1)mp[b[i]]=2;
		}
		for(auto x:s)cout <<x<<" ";
		cout <<endl;
		for(auto x:mp){
			if(x.second==2)cout <<x.first<<" ";
		}
		cout <<endl;
	
		
	}
}

