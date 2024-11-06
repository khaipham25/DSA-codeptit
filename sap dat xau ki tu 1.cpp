#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		string s;int k=0;
		cin>>s;
		map<char ,int> mp;
		for(auto &x :s)mp[x]++;
		for(auto &x :mp){
			k=max(k,x.second);
		}
		int cl=s.size()-k;
		if(cl<k-1)cout<<"-1"<<endl;
		else cout <<"1"<<endl;
		
	}
}

