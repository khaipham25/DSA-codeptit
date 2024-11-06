#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		int x=n;
		int y=0;
		vector<vector<int>> res;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		while(x){
			vector<int> v;
			for(int i=0;i<x;++i)v.push_back(a[i]);
			res.push_back(v);
			x--;
			for(int i=0;i<n-1;++i){
				a[i]=a[i]+a[i+1];
			}
		}
		for(int i=res.size()-1;i>=0;--i){
			cout<<"[";
			for(int j=0;j<res[i].size()-1;++j)cout<<res[i][j]<<" ";
			cout<<res[i][res[i ].size()-1];
			cout<<"] ";
		}
		cout <<endl;
	}
}

