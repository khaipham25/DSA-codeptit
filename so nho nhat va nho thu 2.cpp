#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		set<int> s;
		vector<int> v;
		int a[n];
		for(auto &x:a){
			cin>>x;
			s.insert(x);
		}
		for(auto x:s)v.push_back(x);
		if(v.size()>=2){
			cout <<v[0]<<" "<<v[1];
			cout <<endl;
		}else cout <<"-1"<<endl;
	}
}

