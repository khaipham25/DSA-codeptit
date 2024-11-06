#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool cmp(pair<char,int> a,pair<char,int> b){
	return a.second>b.second;
}
int main(){
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		map<char,int> mp;
		vector<pair<char,int>> v;
		string s;cin>>s;
		for(auto x:s){
			mp[x]++;
		}
		//for(auto x:mp)cout <<x.first<<x.second;
		for(auto x:mp)v.push_back({x.first,x.second});
		while(k--){
			sort(v.begin(),v.end(),cmp);
			v[0].second--;
		}
		ll res=0;
		for(int i=0;i<v.size();++i){
			res=res+1ll*v[i].second*v[i].second;
		}
		cout <<res<<endl;
	}
}

