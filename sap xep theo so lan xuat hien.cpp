#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if (a.second!=b.second)return a.second>b.second;
	if(a.second==b.second)return a.first<b.first;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;map<int,int> mp;
		vector<pair<int,int>> v;
		cin>>n;
		int a[n];
		for(auto &x:a){
			cin>>x;
			mp[x]++;
		}
		for(auto x:mp)v.push_back(x);
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();++i){
			
			for(int j=0;j<v[i].second;j++)cout <<v[i].first<<" ";
		}
		cout <<endl;
	}
}

