#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int k=0;
		string s;
		cin>>s;
		map<char,int> mp;
		for(auto x:s)mp[x]++;
		for(auto x:mp){
			k=max(k,x.second);
		}
		if(s.size()<k*n-(n-1))cout <<"-1"<<endl;
		else cout <<"1"<<endl;
	}
}

